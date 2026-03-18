/*
 * XREFs of DxgkDWCloneCheckTargetID @ 0x1401CFB40
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1404290E4 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

_BOOL8 __fastcall DxgkDWCloneCheckTargetID(int a1)
{
  DXGGLOBAL::GetGlobal();
  return (a1 & 0xFF000000) == 0;
}
