/*
 * XREFs of ?Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@PEAPEAV1@@Z @ 0x180176560
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DLayer::Create(
        const struct D2D_RECT_F *a1,
        struct ID2D1Geometry *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        float a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_LAYER_OPTIONS1 a6,
        enum D2D1_PRIMITIVE_BLEND a7,
        struct CD2DLayer **a8)
{
  unsigned int v11; // r14d
  _DWORD *Value; // rbp
  int v13; // ecx
  char *v14; // rbx
  HANDLE ProcessHeap; // rax
  CThreadContext *v17; // rax
  CThreadContext *v18; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v11 = 0;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v17 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v17 || (v18 = CThreadContext::CThreadContext(v17), (Value = v18) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v18);
  }
  v13 = Value[109];
  v14 = 0LL;
  if ( v13 )
  {
    v14 = (char *)*((_QWORD *)Value + 55);
    *((_QWORD *)Value + 55) = *(_QWORD *)v14;
    Value[109] = v13 - 1;
  }
  if ( v14 || (ProcessHeap = GetProcessHeap(), (v14 = (char *)HeapAlloc(ProcessHeap, 0, 0x50uLL)) != 0LL) )
  {
    *(_QWORD *)v14 = &CD2DLayer::`vftable';
    *(struct D2D_RECT_F *)(v14 + 8) = *a1;
    *((_QWORD *)v14 + 3) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_DWORD *)v14 + 14) = a5;
    *((_DWORD *)v14 + 15) = a6;
    *((_DWORD *)v14 + 16) = a7;
    v14[72] = a3 != 0LL;
    *((float *)v14 + 17) = a4;
    if ( a3 )
    {
      *((_OWORD *)v14 + 2) = *(_OWORD *)&a3->m11;
      *((_QWORD *)v14 + 6) = *(_QWORD *)&a3->m[2][0];
    }
    *a8 = (struct CD2DLayer *)v14;
  }
  else
  {
    *a8 = 0LL;
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Du, 0LL);
  }
  return v11;
}
