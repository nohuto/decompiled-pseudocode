/*
 * XREFs of GreReinitializeDpiSetting @ 0x1401A4D90
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14011F640 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     GreReinitializePerUserDpiSetting @ 0x1401BDC24 (GreReinitializePerUserDpiSetting.c)
 */

__int64 __fastcall GreReinitializeDpiSetting(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  *(_DWORD *)(v1 + 1200) = 0;
  *(_DWORD *)(v1 + 1212) = 0;
  return GreReinitializePerUserDpiSetting();
}
