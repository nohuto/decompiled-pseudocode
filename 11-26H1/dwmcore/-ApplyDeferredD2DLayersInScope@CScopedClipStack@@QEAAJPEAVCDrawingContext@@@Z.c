/*
 * XREFs of ?ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x180071420
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006FCD0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 */

__int64 __fastcall CScopedClipStack::ApplyDeferredD2DLayersInScope(
        CScopedClipStack *this,
        struct CDrawingContext *a2,
        __int64 a3)
{
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 v10; // rsi
  char v11; // al
  CD2DLayer *v12; // rcx

  v3 = 0;
  v4 = *((_QWORD *)this + 1);
  v7 = -858993459 * (unsigned int)((__int64)(*((_QWORD *)this + 244) - *((_QWORD *)this + 243)) >> 3)
     - *(_DWORD *)(v4 - 176);
  v8 = 0;
  while ( *(_QWORD *)(v4 - 160) )
  {
    v10 = *((_QWORD *)this + 243) + 40 * v7;
    v11 = 0;
    v12 = *(CD2DLayer **)(v10 + 24);
    if ( v12 )
    {
      v3 = CD2DLayer::ApplyState(v12, a2, a3);
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x248u, 0LL);
        return (unsigned int)v3;
      }
      *(_QWORD *)(v10 + 24) = 0LL;
      v11 = 1;
      --*(_QWORD *)(v4 - 160);
    }
    if ( *(_BYTE *)(v10 + 36) )
    {
      if ( v11 )
      {
        v3 = CCpuClipAntialiasSinkContext::FlushDrawList(*(CCpuClipAntialiasSinkContext **)(v4 - 16), a2, v8);
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x264u, 0LL);
          return (unsigned int)v3;
        }
      }
      ++v8;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  return (unsigned int)v3;
}
