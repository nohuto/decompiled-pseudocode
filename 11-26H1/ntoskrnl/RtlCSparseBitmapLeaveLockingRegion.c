/*
 * XREFs of RtlCSparseBitmapLeaveLockingRegion @ 0x140354454
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x140353424 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
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
