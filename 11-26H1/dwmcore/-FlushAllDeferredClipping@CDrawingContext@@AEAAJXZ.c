/*
 * XREFs of ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18006FB70
 * Callers:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006FCD0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushAllDeferredClipping(CDrawingContext *this)
{
  int v1; // edi
  __int64 v2; // rbp
  __int64 v4; // rsi
  unsigned int v5; // r15d
  __int64 result; // rax
  __int64 v7; // r14
  char v8; // al
  CD2DLayer *v9; // rcx
  int v10; // eax
  int v11; // eax

  v1 = 0;
  v2 = *((_QWORD *)this + 93);
  v4 = -858993459 * (unsigned int)((__int64)(*((_QWORD *)this + 336) - *((_QWORD *)this + 335)) >> 3)
     - *(_DWORD *)(v2 - 176);
  v5 = 0;
  while ( 1 )
  {
    result = (unsigned int)v1;
    if ( !*(_QWORD *)(v2 - 160) )
      break;
    v7 = *((_QWORD *)this + 335) + 40 * v4;
    v8 = 0;
    v9 = *(CD2DLayer **)(v7 + 24);
    if ( v9 )
    {
      v10 = CD2DLayer::ApplyState(v9, this);
      v1 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x248u, 0LL);
        goto LABEL_13;
      }
      *(_QWORD *)(v7 + 24) = 0LL;
      v8 = 1;
      --*(_QWORD *)(v2 - 160);
    }
    if ( *(_BYTE *)(v7 + 36) )
    {
      if ( v8 )
      {
        v11 = CCpuClipAntialiasSinkContext::FlushDrawList(*(CCpuClipAntialiasSinkContext **)(v2 - 16), this, v5);
        v1 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x264u, 0LL);
          goto LABEL_13;
        }
      }
      ++v5;
    }
    v4 = (unsigned int)(v4 + 1);
  }
  if ( v1 < 0 )
  {
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x107Du, 0LL);
    return (unsigned int)v1;
  }
  if ( *((_BYTE *)this + 8066) )
    *(_WORD *)((char *)this + 8065) = 1;
  return result;
}
