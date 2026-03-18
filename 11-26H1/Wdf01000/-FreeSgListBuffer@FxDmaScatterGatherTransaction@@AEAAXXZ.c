/*
 * XREFs of ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x14007066C
 * Callers:
 *     ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x1400704F0 (-Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ.c)
 *     ?SetNewSgListBuffer@FxDmaScatterGatherTransaction@@MEAAXPEAXK@Z @ 0x1400888F0 (-SetNewSgListBuffer@FxDmaScatterGatherTransaction@@MEAAXPEAXK@Z.c)
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x14002B050 (FxFreeToNPagedLookasideList.c)
 */

void __fastcall FxDmaScatterGatherTransaction::FreeSgListBuffer(FxDmaScatterGatherTransaction *this)
{
  if ( this->m_IsBufferFromLookaside )
  {
    FxFreeToNPagedLookasideList(&this->m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside, this->m_SGListBuffer);
    this->m_IsBufferFromLookaside = 0;
  }
  else
  {
    ExFreePoolWithTag(this->m_SGListBuffer, 0);
  }
  this->m_SGListBuffer = 0LL;
  this->m_SgListBufferSize = 0;
}
