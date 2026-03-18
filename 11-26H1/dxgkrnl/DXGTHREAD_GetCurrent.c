/*
 * XREFs of DXGTHREAD_GetCurrent @ 0x140074FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

struct DXGTHREAD *DXGTHREAD_GetCurrent()
{
  return DXGTHREAD::GetCurrent();
}
