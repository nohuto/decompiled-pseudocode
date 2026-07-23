/*
 * XREFs of MmUpdateMdlTrackerForMdlSwitch @ 0x1406EF760
 * Callers:
 *     VmProbeAndLockPages @ 0x1406C44C0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1406C4560 (VmUnlockPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiReadProcessNumberOfLockedPages @ 0x1404D83F0 (MiReadProcessNumberOfLockedPages.c)
 *     MiValidateMdlTracker @ 0x1404E901C (MiValidateMdlTracker.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MmUpdateMdlTrackerForMdlSwitch(ULONG_PTR BugCheckParameter2, int a2)
{
  PEPROCESS v4; // r14
  bool v5; // di
  struct _LIST_ENTRY *Flink; // rsi
  volatile LONG *p_Blink; // rcx
  KIRQL v8; // r12
  struct _LIST_ENTRY *Blink; // rbx
  ULONG_PTR v10; // rax
  unsigned __int64 *v11; // r15
  struct _LIST_ENTRY *v12; // rcx
  _QWORD *v13; // r14
  int v14; // eax
  _QWORD *v15; // rax
  volatile LONG *v16; // rcx
  ULONG_PTR ProcessNumberOfLockedPages; // rax
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // r10
  ULONG_PTR v21; // [rsp+70h] [rbp+18h]

  if ( (MmTrackLockedPages & 1) == 0 )
    return;
  v4 = *(PEPROCESS *)(BugCheckParameter2 + 16);
  v5 = 0;
  if ( !v4 )
    v4 = PsInitialSystemProcess;
  Flink = v4[2].Header.WaitListHead.Flink;
  if ( !Flink )
    return;
  p_Blink = (volatile LONG *)&Flink[1].Blink;
  if ( KeGetCurrentIrql() == 2 )
  {
    v8 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(p_Blink);
  }
  else
  {
    v8 = ExAcquireSpinLockExclusive(p_Blink);
  }
  if ( a2 )
  {
    Blink = Flink->Flink;
    if ( !Flink->Flink )
      goto LABEL_47;
    do
    {
      if ( (struct _LIST_ENTRY *)BugCheckParameter2 < Blink[1].Blink )
      {
        Blink = Blink->Flink;
      }
      else
      {
        if ( (struct _LIST_ENTRY *)BugCheckParameter2 <= Blink[1].Blink )
          break;
        Blink = Blink->Blink;
      }
    }
    while ( Blink );
    if ( !Blink )
    {
LABEL_47:
      if ( HIDWORD(Flink[1].Blink) )
      {
        ProcessNumberOfLockedPages = MiReadProcessNumberOfLockedPages((__int64)v4);
        KeBugCheckEx(0x76u, 8uLL, BugCheckParameter2, ProcessNumberOfLockedPages, BugCheckParameter4);
      }
      goto LABEL_33;
    }
    MiValidateMdlTracker((ULONG_PTR)Blink, 1);
    Blink[1].Blink = (struct _LIST_ENTRY *)((unsigned __int64)Blink[1].Blink & ~0x8000000000000000uLL);
    RtlAvlRemoveNode((unsigned __int64 *)Flink, (__int64)Blink);
    v10 = *(_QWORD *)(BugCheckParameter2 + 48);
    v11 = (unsigned __int64 *)&Flink->Blink;
  }
  else
  {
    Blink = Flink->Blink;
    if ( !Blink )
      goto LABEL_48;
    v12 = *(struct _LIST_ENTRY **)(BugCheckParameter2 + 48);
    do
    {
      if ( v12 < Blink[4].Flink )
      {
        Blink = Blink->Flink;
      }
      else
      {
        if ( v12 <= Blink[4].Flink )
          break;
        Blink = Blink->Blink;
      }
    }
    while ( Blink );
    if ( !Blink )
    {
LABEL_48:
      if ( HIDWORD(Flink[1].Blink) )
      {
        v19 = MiReadProcessNumberOfLockedPages((__int64)v4);
        KeBugCheckEx(0x76u, 9uLL, BugCheckParameter2, v19, v20);
      }
      goto LABEL_33;
    }
    Blink[1].Blink = (struct _LIST_ENTRY *)BugCheckParameter2;
    MiValidateMdlTracker((ULONG_PTR)Blink, 1);
    RtlAvlRemoveNode((unsigned __int64 *)&Flink->Blink, (__int64)Blink);
    v10 = BugCheckParameter2;
    v11 = (unsigned __int64 *)Flink;
  }
  v13 = (_QWORD *)*v11;
  v21 = v10;
  if ( !*v11 )
    goto LABEL_32;
  while ( 1 )
  {
    v14 = guard_dispatch_icall_no_overrides(v10, v13);
    if ( v14 > 0 )
      break;
    if ( v14 >= 0 )
      KeBugCheckEx(0xD9u, 2uLL, (ULONG_PTR)v13, BugCheckParameter2, (ULONG_PTR)Flink[1].Flink);
    v15 = (_QWORD *)*v13;
    if ( !*v13 )
      goto LABEL_32;
LABEL_37:
    v13 = v15;
    v10 = v21;
  }
  v15 = (_QWORD *)v13[1];
  if ( v15 )
    goto LABEL_37;
  v5 = 1;
LABEL_32:
  RtlAvlInsertNodeEx(v11, (unsigned __int64)v13, v5, Blink);
LABEL_33:
  v16 = (volatile LONG *)&Flink[1].Blink;
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v16);
  else
    ExReleaseSpinLockExclusive(v16, v8);
}
