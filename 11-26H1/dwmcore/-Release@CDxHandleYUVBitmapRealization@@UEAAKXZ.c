/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x1800F4FD0
 * Callers:
 *     ?Release@CGlobalCompositionSurfaceInfo@@WGI@EAAKXZ @ 0x1802666F0 (-Release@CGlobalCompositionSurfaceInfo@@WGI@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@WFA@EAAKXZ @ 0x1802AAB60 (-Release@CStereoRenderTargetBitmap@@WFA@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@WFI@EAAKXZ @ 0x1802AAB70 (-Release@CStereoRenderTargetBitmap@@WFI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBEI@EAAKXZ @ 0x1802AAB80 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBEI@EAAKXZ.c)
 *     ?Release@CGDIBitmapRealization@@WBFA@EAAKXZ @ 0x1802AABA0 (-Release@CGDIBitmapRealization@@WBFA@EAAKXZ.c)
 *     ?Release@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802AABC0 (-Release@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFI@EAAKXZ @ 0x1802ABF60 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFI@EAAKXZ.c)
 *     ?Release@CGDIBitmapRealization@@WBJA@EAAKXZ @ 0x1802ABF80 (-Release@CGDIBitmapRealization@@WBJA@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@WII@EAAKXZ @ 0x1802B0A30 (-Release@CStereoRenderTargetBitmap@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(this);
}
