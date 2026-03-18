/*
 * XREFs of ?Pop@CDrawingContext@@QEAAJXZ @ 0x18003EE08
 * Callers:
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18003D634 (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180040050 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18006B470 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18007F3A0 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800822E0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z @ 0x180082330 (-Pop@-$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopClipBounds@CDrawingContext@@AEAAXXZ @ 0x180174190 (-PopClipBounds@CDrawingContext@@AEAAXXZ.c)
 *     ?PopLight@CDrawingContext@@AEAAJXZ @ 0x18019C694 (-PopLight@CDrawingContext@@AEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  _QWORD *v1; // rsi
  int v2; // eax
  __m128i v4; // xmm6
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  char v19[16]; // [rsp+30h] [rbp-28h] BYREF

  v1 = (_QWORD *)((char *)this + 256);
  v2 = *((_DWORD *)this + 66);
  v4 = 0LL;
  if ( v2 )
  {
    v5 = 0;
    v4 = *(__m128i *)(*v1 + 16LL * (unsigned int)(v2 - 1));
  }
  else
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x1247u, 0LL);
  }
  v6 = _mm_cvtsi128_si32(v4);
  if ( v6 <= 6 )
  {
    if ( v6 != 6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 == 1 )
                CDrawingContext::PopTransformInternal(this, 1);
            }
            else
            {
              CDrawingContext::PopClippingScope(this, 1);
            }
          }
          else
          {
            CDrawingContext::PopClipBounds(this);
          }
        }
        else
        {
          CDrawingContext::PopCpuClip(this);
        }
      }
      else
      {
        CDrawingContext::PopGpuClipRectInternal(this, 1);
      }
      return v5;
    }
    goto LABEL_28;
  }
  v11 = v6 - 7;
  if ( !v11 )
  {
LABEL_28:
    v17 = CDrawingContext::PopLayer(this);
    v5 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x125Bu, 0LL);
    return v5;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, v19);
          --*((_DWORD *)this + 168);
        }
      }
      else
      {
        v15 = CDrawingContext::PopLight(this);
        v5 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x126Fu, 0LL);
      }
    }
    else
    {
      CDrawingContext::PopRenderOptionsInternal(this, 1);
    }
  }
  else
  {
    v16 = *((_DWORD *)this + 66);
    if ( v16 )
      *((_DWORD *)this + 66) = v16 - 1;
    CWatermarkStack<void *,2,2,10>::Pop((char *)this + 3152);
  }
  return v5;
}
