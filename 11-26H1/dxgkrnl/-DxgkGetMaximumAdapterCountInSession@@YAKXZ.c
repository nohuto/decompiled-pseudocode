/*
 * XREFs of ?DxgkGetMaximumAdapterCountInSession@@YAKXZ @ 0x140369FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x140369800 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 */

__int64 DxgkGetMaximumAdapterCountInSession(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
}
