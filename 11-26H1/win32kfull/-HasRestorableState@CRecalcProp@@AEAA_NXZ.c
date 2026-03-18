/*
 * XREFs of ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x14015F654
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E97C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 * Callees:
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x14011CF74 (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 *     ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x14015F6C0 (-IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14015F738 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 */

char __fastcall CRecalcProp::HasRestorableState(CRecalcProp *this)
{
  char v2; // bl
  char ShouldDeferRecalc; // si

  v2 = 1;
  ShouldDeferRecalc = CRecalcState::ShouldDeferRecalc(*((_QWORD *)this + 4), *((_QWORD *)this + 2), 1LL);
  if ( CRecalcState::IsPendingAndEquivalentMonitorSet(*((CRecalcState **)this + 4), *((const struct tagWND **)this + 2))
    || ShouldDeferRecalc
    || !CRecalcProp::FindRestorableRecalcState((const struct tagWND **)this) )
  {
    return 0;
  }
  return v2;
}
