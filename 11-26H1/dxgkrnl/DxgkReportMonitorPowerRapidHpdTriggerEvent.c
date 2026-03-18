/*
 * XREFs of DxgkReportMonitorPowerRapidHpdTriggerEvent @ 0x140046F48
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x14024A2EC (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x140046FBC (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkReportMonitorPowerRapidHpdTriggerEvent(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  struct DXGGLOBAL *Global; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  return RAPID_HPD_MANAGER::ReportTriggerEvent((char *)Global + 305640, (v2 ^ 1u) + 1, *(_QWORD *)(a1 + 412));
}
