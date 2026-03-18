/*
 * XREFs of ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180038840
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180038190 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18009DB08 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801056F0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802039A0 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     ?GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18026A0D0 (-GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18027EC20 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802869F0 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithTextureTransform(__int64 *a1, __int16 *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  _DWORD *Value; // rdi
  int v10; // ecx
  char *v11; // rbx
  HANDLE ProcessHeap; // rax
  __int16 v13; // di
  char v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  CThreadContext *v18; // rax
  CThreadContext *v19; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v18 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v18 || (v19 = CThreadContext::CThreadContext(v18), (Value = v19) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v19);
  }
  v10 = Value[81];
  v11 = 0LL;
  if ( v10 )
  {
    v11 = (char *)*((_QWORD *)Value + 41);
    *((_QWORD *)Value + 41) = *(_QWORD *)v11;
    Value[81] = v10 - 1;
  }
  if ( v11 || (ProcessHeap = GetProcessHeap(), (v11 = (char *)HeapAlloc(ProcessHeap, 0, 0x98uLL)) != 0LL) )
  {
    v13 = *a2;
    v14 = *((_BYTE *)a2 + 2);
    *((_QWORD *)v11 + 1) = 1065353216LL;
    *((_DWORD *)v11 + 4) = 0;
    *(_QWORD *)(v11 + 20) = 1065353216LL;
    *((_DWORD *)v11 + 7) = 0;
    v11[52] = 0;
    *(_QWORD *)v11 = &CSurfaceDrawListBrush::`vftable';
    v15 = *a1;
    *((_QWORD *)v11 + 7) = *a1;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = a1[1];
    *((_QWORD *)v11 + 8) = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v11[72] = *((_BYTE *)a1 + 16);
    *((_WORD *)v11 + 40) = v13;
    v11[82] = v14;
    *((_DWORD *)v11 + 21) = *a3;
    *((_DWORD *)v11 + 22) = a3[1];
    *((_DWORD *)v11 + 23) = a3[2];
    *((_DWORD *)v11 + 24) = a3[3];
    *((_DWORD *)v11 + 25) = a3[4];
    *((_DWORD *)v11 + 26) = a3[5];
    *((_DWORD *)v11 + 27) = a3[6];
    *((_DWORD *)v11 + 28) = a3[7];
    *((_DWORD *)v11 + 29) = a3[8];
    *((_DWORD *)v11 + 36) = 0;
    *(struct D2D_RECT_F *)(v11 + 120) = CSurfaceDrawListBrush::k_rcfBoundless;
    *a4 = v11;
  }
  else
  {
    *a4 = 0LL;
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Au, 0LL);
  }
  return v5;
}
