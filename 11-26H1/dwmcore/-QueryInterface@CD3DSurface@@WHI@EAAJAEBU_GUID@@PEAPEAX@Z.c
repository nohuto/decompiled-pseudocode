/*
 * XREFs of ?QueryInterface@CD3DSurface@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A4BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDeviceTextureTarget::QueryInterface((CDeviceTextureTarget *)(a1 - 120), a2, a3);
}
