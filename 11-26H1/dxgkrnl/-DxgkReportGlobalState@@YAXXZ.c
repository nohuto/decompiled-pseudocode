/*
 * XREFs of ?DxgkReportGlobalState@@YAXXZ @ 0x1403BB7F8
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x14005ABCC (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403BB818 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkReportGlobalState(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::ReportState(Global);
}
