/*
 * XREFs of ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x14006F354
 * Callers:
 *     ?DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z @ 0x140073C90 (-DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z @ 0x140073CE0 (-DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestDevicePowerIrp @ 0x140032C50 (DpiRequestDevicePowerIrp.c)
 *     DpiRequestDeviceDirectedPowerIrp @ 0x1400858B8 (DpiRequestDeviceDirectedPowerIrp.c)
 *     ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1401C1848 (-SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDeviceDirectedPowerCallback(DXGADAPTER *this, char a2)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rcx

  WdLogSingleEntry1(9LL);
  WdLogGlobalForLineNumber = 1307;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::SetDFxEngaged(Global, a2 == 0);
  v5 = *((_QWORD *)this + 27);
  if ( a2 )
    DpiRequestDevicePowerIrp(*(_QWORD *)(v5 + 64), (POWER_STATE)1);
  else
    DpiRequestDeviceDirectedPowerIrp(v5, 4LL);
}
