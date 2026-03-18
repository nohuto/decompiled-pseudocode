/*
 * XREFs of ?QueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180180530
 * Callers:
 *     ?QueryInterface@CGlobalCompositionSurfaceInfo@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802666E0 (-QueryInterface@CGlobalCompositionSurfaceInfo@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD3DDevice@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180299780 (-QueryInterface@CD3DDevice@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSectionBitmapRealization@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AAAC0 (-QueryInterface@CSectionBitmapRealization@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWICBitmapRealization@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AAAD0 (-QueryInterface@CWICBitmapRealization@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDIBitmapRealization@@WBEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AAAE0 (-QueryInterface@CGDIBitmapRealization@@WBEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDIBitmapRealization@@WBFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AAB00 (-QueryInterface@CGDIBitmapRealization@@WBFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDISectionBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AAB20 (-QueryInterface@CGDISectionBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDIBitmapRealization@@WBFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ABF00 (-QueryInterface@CGDIBitmapRealization@@WBFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ABF20 (-QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStereoRenderTargetBitmap@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B0A10 (-QueryInterface@CStereoRenderTargetBitmap@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::QueryInterface()
{
  return CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface();
}
