/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1403FF880
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool DxgkGetPresenterViewMode()
{
  return *((_DWORD *)DXGGLOBAL::GetGlobal() + 342) != 0;
}
