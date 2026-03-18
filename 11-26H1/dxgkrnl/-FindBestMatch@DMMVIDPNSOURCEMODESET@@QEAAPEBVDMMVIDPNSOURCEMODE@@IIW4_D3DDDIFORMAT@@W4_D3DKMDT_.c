/*
 * XREFs of ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x14003B508
 * Callers:
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x14025A284 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x140383C90 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x14003B5AC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x14003B600 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 */

const struct DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODESET::FindBestMatch(
        DMMVIDPNSOURCEMODESET *this,
        int a2,
        int a3,
        enum _D3DDDIFORMAT a4,
        enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE a5)
{
  DMMVIDPNSOURCEMODESET *v5; // r10
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  UINT cy; // edx

  v5 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
  NextMode = 0LL;
  if ( v5 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    NextMode = (DMMVIDPNSOURCEMODESET *)((char *)v5 - 8);
  while ( 1 )
  {
    if ( !NextMode )
      return 0LL;
    GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(NextMode);
    if ( *((_DWORD *)NextMode + 18) == a5 && GraphicsInfo->PrimSurfSize.cx == a2 )
    {
      cy = GraphicsInfo->PrimSurfSize.cy;
      if ( cy == a3
        && GraphicsInfo->PixelFormat == a4
        && GraphicsInfo->VisibleRegionSize.cx == GraphicsInfo->PrimSurfSize.cx
        && GraphicsInfo->VisibleRegionSize.cy == cy )
      {
        break;
      }
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(this, NextMode);
  }
  return NextMode;
}
