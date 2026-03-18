/*
 * XREFs of ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C9200
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x18005CCE4 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C9380 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderPerf_ApplyLayer@CLayer@@QEBAXXZ @ 0x1800CA030 (-RenderPerf_ApplyLayer@CLayer@@QEBAXXZ.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18018DECC (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18024F830 (-RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall COffScreenRenderingLayer::ApplyState(
        COffScreenRenderingLayer *this,
        const void **a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  char v5; // r14
  unsigned int v8; // eax
  int v9; // esi
  int v10; // r15d
  _DWORD *v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  const void *v14; // rax
  int v16; // eax
  unsigned int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char *)(a2 + 394);
  v5 = 0;
  if ( *((_DWORD *)a2 + 790) == *((_DWORD *)a2 + 791) )
  {
    v16 = CWatermarkStack<float,64,2,10>::Grow((__int64)(a2 + 394), (__int64)a2, a3, a4, a2 + 394);
    v9 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v16);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x11A7u, 0LL);
      v17 = 61;
      v10 = v9;
      goto LABEL_12;
    }
  }
  v5 = 1;
  *(_DWORD *)(*(_QWORD *)v4 + 4LL * *((unsigned int *)v4 + 2)) = 1065353216;
  v8 = *((_DWORD *)v4 + 5);
  if ( v8 <= ++*((_DWORD *)v4 + 2) )
    v8 = *((_DWORD *)v4 + 2);
  *((_DWORD *)v4 + 5) = v8;
  v9 = CExternalLayer::ApplyRenderTarget(this, (struct CDrawingContext *)a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 68;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v17, 0LL);
    CExternalLayer::RestoreRenderTarget(this, (struct CDrawingContext *)a2);
    if ( v5 )
      CDrawingContext::PopAlpha((CDrawingContext *)a2, 0);
    return (unsigned int)v9;
  }
  v11 = a2[4];
  v12 = 0LL;
  v13 = v11[90];
  if ( v13 )
    v12 = *(_QWORD *)(*((_QWORD *)v11 + 42) + 8LL * (unsigned int)(v13 - 1));
  *(_BYTE *)(v12 + 79) = 1;
  v14 = a2[995];
  a2[995] = 0LL;
  *((_QWORD *)this + 5) = v14;
  CLayer::RenderPerf_ApplyLayer(this);
  return (unsigned int)v9;
}
