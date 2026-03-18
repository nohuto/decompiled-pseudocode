/*
 * XREFs of ?NotifyDrawVisualTree@CRenderPerf@@QEAAX_K@Z @ 0x18021ED94
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 */

void __fastcall CRenderPerf::NotifyDrawVisualTree(CRenderPerf *this)
{
  CComposition *CurrentFrameId; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  _DWORD *v4; // rax

  CurrentFrameId = GetCurrentFrameId();
  if ( *(CComposition **)v2 == CurrentFrameId )
  {
    ++*(_DWORD *)(v2 + 192);
    v4 = *(_DWORD **)(v2 + 16);
    while ( v4 != *(_DWORD **)(v2 + 8) )
    {
      if ( *--v4 )
      {
        if ( *v4 == 5 )
        {
          *(_QWORD *)(v2 + 176) += v3;
          return;
        }
        if ( *v4 == 6 )
        {
          *(_QWORD *)(v2 + 184) += v3;
          return;
        }
        break;
      }
    }
    *(_QWORD *)(v2 + 152) += v3;
  }
}
