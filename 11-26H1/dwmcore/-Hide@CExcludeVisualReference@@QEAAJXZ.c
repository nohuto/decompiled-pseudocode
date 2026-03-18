/*
 * XREFs of ?Hide@CExcludeVisualReference@@QEAAJXZ @ 0x180194FAC
 * Callers:
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x180055A64 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180128124 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?HideVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1801AF1A0 (-HideVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180195048 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CExcludeVisualReference::Hide(CExcludeVisualReference *this)
{
  struct CVisual *VisualNoRef; // rax
  unsigned __int8 v3; // dl
  __int64 result; // rax

  VisualNoRef = CExcludeVisualReference::GetVisualNoRef(this);
  if ( !VisualNoRef )
    return 2291674884LL;
  v3 = *((_BYTE *)VisualNoRef + 101);
  *((_BYTE *)VisualNoRef + 101) = v3 | 0x80;
  result = 0LL;
  *((_BYTE *)this + 20) = v3 >> 7;
  *((_DWORD *)this + 4) = 2;
  return result;
}
