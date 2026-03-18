/*
 * XREFs of ?QueryInterface@CCrossAdapterTexture@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B8730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossAdapterTexture::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDeviceTextureTarget::QueryInterface((CDeviceTextureTarget *)(a1 - 128), a2, a3);
}
