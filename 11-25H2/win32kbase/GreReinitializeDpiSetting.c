/*
 * XREFs of GreReinitializeDpiSetting @ 0x1401CFFE0
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015ED90 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     GreReinitializePerUserDpiSetting @ 0x1401D0014 (GreReinitializePerUserDpiSetting.c)
 */

__int64 __fastcall GreReinitializeDpiSetting(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  *(_DWORD *)(v1 + 1112) = 0;
  *(_DWORD *)(v1 + 1124) = 0;
  return GreReinitializePerUserDpiSetting();
}
