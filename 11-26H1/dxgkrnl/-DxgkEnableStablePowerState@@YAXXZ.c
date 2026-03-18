/*
 * XREFs of ?DxgkEnableStablePowerState@@YAXXZ @ 0x1401DCE3C
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x14005ABCC (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1401DD034 (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkEnableStablePowerState(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::EnableStablePowerState(Global);
}
