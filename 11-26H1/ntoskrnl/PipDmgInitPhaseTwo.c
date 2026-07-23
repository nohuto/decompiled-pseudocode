/*
 * XREFs of PipDmgInitPhaseTwo @ 0x1407B4334
 * Callers:
 *     PiDmaGuardInitialize @ 0x1405DF48C (PiDmaGuardInitialize.c)
 * Callees:
 *     PipDmgReevaluateQueue @ 0x140773D50 (PipDmgReevaluateQueue.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407AA520 (PipDmgInitReadGroupPolicy.c)
 *     PnpTraceDmaGuardSystemPolicy @ 0x1407B497C (PnpTraceDmaGuardSystemPolicy.c)
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
