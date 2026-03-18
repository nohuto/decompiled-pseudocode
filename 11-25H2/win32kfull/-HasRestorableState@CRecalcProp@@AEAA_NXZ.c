/*
 * XREFs of ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x140022298
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x140029818 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 * Callees:
 *     ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x140022304 (-IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14002237C (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x140204E88 (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 */

char __fastcall CRecalcProp::HasRestorableState(CRecalcProp *this)
{
  char v2; // bl
  char ShouldDeferRecalc; // si

  v2 = 1;
  ShouldDeferRecalc = CRecalcState::ShouldDeferRecalc(*((_QWORD *)this + 4), *((_QWORD *)this + 2), 1LL);
  if ( CRecalcState::IsPendingAndEquivalentMonitorSet(*((CRecalcState **)this + 4), *((const struct tagWND **)this + 2))
    || ShouldDeferRecalc
    || !CRecalcProp::FindRestorableRecalcState(this) )
  {
    return 0;
  }
  return v2;
}
