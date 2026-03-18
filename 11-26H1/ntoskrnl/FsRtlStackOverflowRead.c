/*
 * XREFs of FsRtlStackOverflowRead @ 0x1405B8010
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall FsRtlStackOverflowRead($6CDADE90C2B69D9F3FFCADA247B6EB8A *P)
{
  struct _KTHREAD *result; // rax

  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
  guard_dispatch_icall_no_overrides(*(_QWORD *)&P[20].AbWaitEntryCount, *(_QWORD *)&P[24].AbWaitEntryCount);
  if ( P == &VslpReservedTransferLock.792 )
    KeSetEvent((PRKEVENT)&VslpReservedTransferLock.ThreadListEntry, 0, 0);
  else
    ExFreePoolWithTag(P, 0);
  result = KeGetCurrentThread();
  result[1].TrapFrame = 0LL;
  return result;
}
