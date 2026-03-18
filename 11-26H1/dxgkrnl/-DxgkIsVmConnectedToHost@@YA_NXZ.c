/*
 * XREFs of ?DxgkIsVmConnectedToHost@@YA_NXZ @ 0x140071058
 * Callers:
 *     IsFeatureEnabledUncached @ 0x140289AE4 (IsFeatureEnabledUncached.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403BCBA0 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

bool DxgkIsVmConnectedToHost(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::IsVmConnectedToHost(Global) != 0;
}
