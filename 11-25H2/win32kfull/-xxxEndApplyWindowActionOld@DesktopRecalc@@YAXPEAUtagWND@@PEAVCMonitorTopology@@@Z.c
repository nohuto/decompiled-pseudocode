/*
 * XREFs of ?xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C7618
 * Callers:
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402CE344 (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CE998 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401CAE4C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C7288 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 */

void __fastcall DesktopRecalc::xxxEndApplyWindowActionOld(
        DesktopRecalc *this,
        struct tagWND *a2,
        struct CMonitorTopology *a3)
{
  CRecalcProp *RecalcProperty; // rax

  RecalcProperty = CRecalcProp::GetRecalcProperty(this, (__int64)a2);
  if ( RecalcProperty )
    CRecalcProp::xxxEndApplyWindowActionOld(RecalcProperty, this, a2);
}
