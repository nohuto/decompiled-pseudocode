/*
 * XREFs of ?DxgkDisableStablePowerState@@YAXXZ @ 0x1401DCDD4
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x14005ABCC (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1401DCCD4 (-DisableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkDisableStablePowerState(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::DisableStablePowerState(Global);
}
