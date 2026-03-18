/*
 * XREFs of RtlCSparseBitmapLeaveLockingRegion @ 0x1403523D0
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x1403513A4 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 */

void __fastcall RtlCSparseBitmapLeaveLockingRegion(unsigned __int8 *a1)
{
  unsigned __int64 v1; // rbx

  if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 48LL) )
  {
    v1 = *a1;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
    __writecr8(v1);
  }
  else
  {
    KeLeaveGuardedRegion();
  }
}
