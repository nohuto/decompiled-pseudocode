/*
 * XREFs of ?AddRef@CSurfaceBrush@@WKA@EAAKXZ @ 0x1802470D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 160));
}
