/*
 * XREFs of MiFreeDanglingProtos @ 0x1402A5498
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A63BC (MiSystemPeriodicTick.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiOkToDeleteProtos @ 0x1404500BC (MiOkToDeleteProtos.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void MiFreeDanglingProtos()
{
  KIRQL v0; // al
  struct _KTHREAD **KernelStack; // rbx
  KIRQL v2; // di
  struct _KTHREAD *v3; // rsi
  struct _KTHREAD *v4; // rcx
  struct _LIST_ENTRY *v5; // rdx
  PVOID *v6; // rcx
  PVOID v7; // rcx
  __int64 v8; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  if ( stru_140E2D2D0.KernelStack != &stru_140E2D2D0.KernelStack )
  {
    p_P = &P;
    P = &P;
    v0 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
    KernelStack = (struct _KTHREAD **)stru_140E2D2D0.KernelStack;
    v2 = v0;
    if ( stru_140E2D2D0.KernelStack != &stru_140E2D2D0.KernelStack )
    {
      do
      {
        v3 = *KernelStack;
        if ( (unsigned int)MiOkToDeleteProtos((ULONG_PTR)KernelStack) )
        {
          v4 = *KernelStack;
          if ( (struct _KTHREAD **)(*KernelStack)->Header.WaitListHead.Flink != KernelStack
            || (v5 = (struct _LIST_ENTRY *)KernelStack[1], (struct _KTHREAD **)v5->Flink != KernelStack) )
          {
            __fastfail(3u);
          }
          v5->Flink = (struct _LIST_ENTRY *)v4;
          v4->Header.WaitListHead.Flink = v5;
          v6 = p_P;
          if ( *p_P != &P )
            __fastfail(3u);
          KernelStack[1] = (struct _KTHREAD *)p_P;
          *KernelStack = (struct _KTHREAD *)&P;
          *v6 = KernelStack;
          p_P = (PVOID *)KernelStack;
        }
        KernelStack = (struct _KTHREAD **)v3;
      }
      while ( v3 != (struct _KTHREAD *)&stru_140E2D2D0.KernelStack );
    }
    if ( v2 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
    else
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime, v2);
    while ( 1 )
    {
      v7 = P;
      if ( P == &P )
        break;
      if ( *((PVOID **)P + 1) != &P || (v8 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
        __fastfail(3u);
      P = *(PVOID *)P;
      *(_QWORD *)(v8 + 8) = &P;
      ExFreePoolWithTag(v7, 0);
    }
  }
}
