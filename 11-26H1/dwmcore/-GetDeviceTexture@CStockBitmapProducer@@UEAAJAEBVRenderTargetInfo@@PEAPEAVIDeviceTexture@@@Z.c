/*
 * XREFs of ?GetDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C54F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall CStockBitmapProducer::GetDeviceTexture(
        CStockBitmapProducer *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CStockBitmapProducer::EnsureDeviceTexture(this, a2, a3);
}
