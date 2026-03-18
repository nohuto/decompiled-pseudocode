/*
 * XREFs of ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AECE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDeviceTexture(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CDxHandleStereoBitmapRealization::GetDeviceTexture((CDxHandleStereoBitmapRealization *)(a1 - 256), a2, a3);
}
