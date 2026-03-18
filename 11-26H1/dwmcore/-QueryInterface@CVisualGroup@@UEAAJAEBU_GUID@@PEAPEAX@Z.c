/*
 * XREFs of ?QueryInterface@CVisualGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C83D0
 * Callers:
 *     ?QueryInterface@CLinearGradientBrush@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022B0C0 (-QueryInterface@CLinearGradientBrush@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPrimitiveGroup@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802499E0 (-QueryInterface@CPrimitiveGroup@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDDARenderTarget@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802499F0 (-QueryInterface@CDDARenderTarget@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRemoteRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180249A00 (-QueryInterface@CRemoteRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLegacyRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180249A10 (-QueryInterface@CLegacyRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRemoteAppRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180249A30 (-QueryInterface@CRemoteAppRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRemoteRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180249A50 (-QueryInterface@CRemoteRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGenericInk@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180249A70 (-QueryInterface@CGenericInk@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CIndirectSwapchainRenderTarget@@WJFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180249A90 (-QueryInterface@CIndirectSwapchainRenderTarget@@WJFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180265BB0 (-QueryInterface@CGdiSpriteBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180265BC0 (-QueryInterface@CGdiSpriteBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVisualGroup::QueryInterface(
        volatile signed __int32 *this,
        _QWORD *a2,
        volatile signed __int32 **a3)
{
  return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(this, a2, a3);
}
