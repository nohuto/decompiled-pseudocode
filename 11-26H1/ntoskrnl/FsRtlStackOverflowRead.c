/*
 * XREFs of FsRtlStackOverflowRead @ 0x1405BA880
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall FsRtlStackOverflowRead(unsigned __int8 *P)
{
  struct _KTHREAD *result; // rax

  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
  guard_dispatch_icall_no_overrides(*((_QWORD *)P + 5), *((_QWORD *)P + 6));
  if ( P == &VslpReservedTransferLock.PriorityFloorCounts[16] )
    KeSetEvent((PRKEVENT)&VslpReservedTransferLock.PropagateBoostsEntry, 0, 0);
  else
    ExFreePoolWithTag(P, 0);
  result = KeGetCurrentThread();
  result[1].TrapFrame = 0LL;
  return result;
}
