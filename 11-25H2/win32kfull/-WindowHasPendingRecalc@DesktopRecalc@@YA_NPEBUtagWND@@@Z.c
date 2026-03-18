/*
 * XREFs of ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x140259954
 * Callers:
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 *     ?GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z @ 0x1402CAEB8 (-GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401CAE4C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?HasPendingRecalc@CRecalcProp@@QEAA_NPEBUtagWND@@@Z @ 0x1402598E4 (-HasPendingRecalc@CRecalcProp@@QEAA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall DesktopRecalc::WindowHasPendingRecalc(DesktopRecalc *this, const struct tagWND *a2)
{
  __int64 v3; // rdx
  struct CRecalcState **RecalcProperty; // rax
  __int64 v5; // r8

  if ( (unsigned int)UserIsDisconnectConnection(this, a2) )
  {
    LOBYTE(RecalcProperty) = 1;
  }
  else
  {
    RecalcProperty = (struct CRecalcState **)CRecalcProp::GetRecalcProperty(this, v3);
    if ( RecalcProperty )
      LOBYTE(RecalcProperty) = CRecalcProp::HasPendingRecalc(RecalcProperty, this, v5) != 0;
  }
  return (char)RecalcProperty;
}
