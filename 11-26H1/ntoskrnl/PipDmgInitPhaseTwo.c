/*
 * XREFs of PipDmgInitPhaseTwo @ 0x1407B12D4
 * Callers:
 *     PiDmaGuardInitialize @ 0x1405DCB24 (PiDmaGuardInitialize.c)
 * Callees:
 *     PipDmgReevaluateQueue @ 0x140770D50 (PipDmgReevaluateQueue.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407A7970 (PipDmgInitReadGroupPolicy.c)
 *     PnpTraceDmaGuardSystemPolicy @ 0x1407B191C (PnpTraceDmaGuardSystemPolicy.c)
 */

__int64 PipDmgInitPhaseTwo()
{
  int GroupPolicy; // eax

  if ( PipDmaGuardPolicy )
  {
    GroupPolicy = PipDmgInitReadGroupPolicy();
    if ( !GroupPolicy )
      GroupPolicy = 2;
    PipDmaGuardPolicy = GroupPolicy;
    PipDmgReevaluateQueue();
  }
  PnpTraceDmaGuardSystemPolicy();
  return 0LL;
}
