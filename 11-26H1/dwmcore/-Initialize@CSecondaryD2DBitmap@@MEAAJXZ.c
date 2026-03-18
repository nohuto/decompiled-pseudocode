/*
 * XREFs of ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x1801C7800
 * Callers:
 *     ?Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802B0274 (-Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11T.c)
 *     ?Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@2AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802B046C (-Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D1.c)
 * Callees:
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x1800F5C08 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800F6260 (-AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Initialize(CD2DResourceManager **this)
{
  CRegion::SetRectangle((CRegion *)(this + 32), (const struct MilRectU *)(this + 30));
  CD2DResourceManager::AddResource(this[5], (struct CD2DResource *)this);
  return 0LL;
}
