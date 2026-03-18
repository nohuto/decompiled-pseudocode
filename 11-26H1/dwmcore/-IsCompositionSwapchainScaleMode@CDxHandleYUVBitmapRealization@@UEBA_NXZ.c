/*
 * XREFs of ?IsCompositionSwapchainScaleMode@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1801D1440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsCompositionSwapchainScaleMode(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 22) & 0x4000) != 0;
}
