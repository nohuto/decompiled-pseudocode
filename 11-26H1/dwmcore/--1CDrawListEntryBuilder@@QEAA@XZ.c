/*
 * XREFs of ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420
 * Callers:
 *     ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180007D60 (-BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawLis.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002D120 (--1CDrawingContext@@MEAA@XZ.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18003D6D0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18003E488 (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18003F1EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180077EA0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D2050 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A76A0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801CB150 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FDB90 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180265C90 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268130 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListEntryBuilder::~CDrawListEntryBuilder(CDrawListEntryBuilder *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // r15
  int v12; // ebp
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  char *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r8
  char *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r8
  char *v25; // rbp
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r8
  char *v30; // rbp
  __int64 v31; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v33; // rax
  HANDLE v34; // rax
  HANDLE v35; // rax
  int v36[8]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (_QWORD *)*((_QWORD *)this + 14);
  v3 = (_QWORD *)*((_QWORD *)this + 15);
  while ( v1 != v3 )
  {
    if ( *v1 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
      *v1 = 0LL;
    }
    ++v1;
  }
  v4 = *((_QWORD *)this + 14);
  v5 = (*((_QWORD *)this + 15) - v4) >> 3;
  if ( v5 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v36, v4, v5);
    *((_QWORD *)this + 15) += -8 * v6;
  }
  *((_BYTE *)this + 4488) = 0;
  v7 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  _mm_lfence();
  v8 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 560);
  if ( v11 )
  {
    v12 = _InterlockedDecrement(v11 + 2);
    if ( v12 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v36[0]);
    if ( !v12 )
    {
      if ( _InterlockedAdd(v11 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v36[0]);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 24LL))(v11);
      v13 = _InterlockedDecrement(v11 + 2);
      if ( v13 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v36[0]);
      if ( !v13 )
      {
        if ( _InterlockedDecrement(v11 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v36[0]);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 16LL))(v11, 1LL);
      }
    }
  }
  v14 = *((_QWORD *)this + 511);
  v15 = (*((_QWORD *)this + 512) - v14) >> 1;
  if ( v15 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v36, v14, v15);
    *((_QWORD *)this + 512) += -2 * v16;
  }
  v17 = (char *)*((_QWORD *)this + 511);
  *((_QWORD *)this + 511) = 0LL;
  if ( v17 != (char *)this + 4112 && v17 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v17);
  }
  v18 = *((_QWORD *)this + 266);
  v19 = (*((_QWORD *)this + 267) - v18) >> 4;
  if ( v19 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v36, v18, v19);
    *((_QWORD *)this + 267) += -16 * v20;
  }
  v21 = (char *)*((_QWORD *)this + 266);
  *((_QWORD *)this + 266) = 0LL;
  if ( v21 != (char *)this + 2160 && v21 )
  {
    v33 = GetProcessHeap();
    HeapFree(v33, 0, v21);
  }
  v22 = *((_QWORD *)this + 22);
  v23 = (*((_QWORD *)this + 23) - v22) >> 4;
  if ( v23 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v36, v22, v23);
    *((_QWORD *)this + 23) += -16 * v24;
  }
  v25 = (char *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v25 != (char *)this + 208 && v25 )
  {
    v34 = GetProcessHeap();
    HeapFree(v34, 0, v25);
  }
  v26 = *((_QWORD *)this + 21);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  v27 = *((_QWORD *)this + 14);
  v28 = (*((_QWORD *)this + 15) - v27) >> 3;
  if ( v28 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v36, v27, v28);
    *((_QWORD *)this + 15) += -8 * v29;
  }
  v30 = (char *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v30 != (char *)this + 136 && v30 )
  {
    v35 = GetProcessHeap();
    HeapFree(v35, 0, v30);
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((char *)this + 104);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((char *)this + 96);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((char *)this + 88);
  v31 = *((_QWORD *)this + 10);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
}
