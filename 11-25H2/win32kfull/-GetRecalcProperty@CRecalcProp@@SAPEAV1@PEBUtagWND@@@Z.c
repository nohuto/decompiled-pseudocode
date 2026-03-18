/*
 * XREFs of ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401CAE4C
 * Callers:
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1400295EC (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReas.c)
 *     ?s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1401CA958 (-s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1401CAADC (-s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1401CAC78 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401CB264 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x140259954 (-WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z.c)
 *     ?BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z @ 0x1402C3C80 (-BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z.c)
 *     ?BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z @ 0x1402C4068 (-BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z.c)
 *     ?GetLastInterceptedTopology@DesktopRecalc@@YAPEAVCMonitorTopology@@PEAUtagWND@@@Z @ 0x1402C436C (-GetLastInterceptedTopology@DesktopRecalc@@YAPEAVCMonitorTopology@@PEAUtagWND@@@Z.c)
 *     ?SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C58A8 (-SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402C68FC (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402C6A30 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402C6C34 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C6EFC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C7618 (-xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CAD74 (-ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CDFBC (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 */

struct CRecalcProp *__fastcall CRecalcProp::GetRecalcProperty(const struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( (*((_DWORD *)a1 + 95) & 0x80u) == 0 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return (struct CRecalcProp *)GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 42250), 1u);
}
