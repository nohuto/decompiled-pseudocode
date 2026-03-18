/*
 * XREFs of ?AddRef@CDeviceTextureTarget@@WBAI@EAAKXZ @ 0x1802A9B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 264));
}
