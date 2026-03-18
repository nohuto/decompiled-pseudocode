/*
 * XREFs of DXGPROCESS_GetCurrent @ 0x140039910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS *DXGPROCESS_GetCurrent()
{
  return DXGPROCESS::GetCurrent();
}
