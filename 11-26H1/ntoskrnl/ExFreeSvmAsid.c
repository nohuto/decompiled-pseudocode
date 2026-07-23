/*
 * XREFs of ExFreeSvmAsid @ 0x1404C7CDC
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExpFreeAsid @ 0x1406D5704 (ExpFreeAsid.c)
 *     ExpSvmDereferenceDevice @ 0x1406D6100 (ExpSvmDereferenceDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall ExFreeSvmAsid(__int64 a1, __int64 a2)
{
  struct _KTHREAD *result; // rax
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  _KPROCESS *Process; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  struct _LIST_ENTRY *v8; // r14
  struct _KTHREAD **Flink; // rsi
  struct _LIST_ENTRY **p_Blink; // r13
  struct _KTHREAD *P; // [rsp+50h] [rbp+8h]

  result = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  Process = result->ApcState.Process;
  v6 = Process[3].ActiveGroupPadding[0];
  v7 = HIDWORD(Process[4].Padding[0]);
  if ( v6 )
  {
    v3 = Process[3].ActiveGroupPadding[1];
    --v6;
    if ( !v7 )
      goto LABEL_6;
  }
  else if ( !v7 )
  {
    return result;
  }
  v4 = Process[4].Padding[1];
  --v7;
LABEL_6:
  v8 = (struct _LIST_ENTRY *)&Process[3].Padding[1];
  while ( 1 )
  {
    Flink = (struct _KTHREAD **)v8->Flink;
    if ( v8->Flink->Blink != v8 || (result = *Flink, (struct _KTHREAD **)(*Flink)->Header.WaitListHead.Flink != Flink) )
      __fastfail(3u);
    v8->Flink = (struct _LIST_ENTRY *)result;
    result->Header.WaitListHead.Flink = v8;
    if ( Flink == (struct _KTHREAD **)v8 )
      break;
    P = Flink[2];
    p_Blink = &P->ApcState.ApcListHead[1].Blink;
    if ( v3 )
    {
      guard_dispatch_icall_no_overrides(v3, *p_Blink);
      ExpSvmDereferenceDevice(P);
    }
    if ( v4 )
    {
      guard_dispatch_icall_no_overrides(v4, *p_Blink);
      ExpSvmDereferenceDevice(P);
    }
    ExFreePoolWithTag(Flink, 0);
  }
  if ( v6 )
  {
    guard_dispatch_icall_no_overrides(v3, a2);
    Process[3].ActiveGroupPadding[1] = 0LL;
    result = (struct _KTHREAD *)ExpFreeAsid(v6, Process);
  }
  if ( v7 )
  {
    guard_dispatch_icall_no_overrides(v4, a2);
    Process[4].Padding[1] = 0LL;
    return (struct _KTHREAD *)ExpFreeAsid(v7, Process);
  }
  return result;
}
