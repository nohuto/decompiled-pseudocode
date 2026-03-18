/*
 * XREFs of ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x18003A0B8
 * Callers:
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800D38D0 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A430 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x18003AEBC (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapResourceRenderStrategy::GetBrushParametersWorker(
        const struct CSurfaceBrush *a1,
        struct IBitmapResource *a2,
        struct CContent::LayoutData *a3,
        enum D2D1_INTERPOLATION_MODE a4,
        struct CBrushDrawListGenerator *a5)
{
  struct CBrushDrawListGenerator *v5; // r15
  __int64 v10; // rax
  void (__fastcall *v11)(struct IBitmapResource *, char *); // rbx
  int v12; // edi
  int v13; // esi
  char v14; // r14
  __int64 v15; // rax
  int v16; // rdx^4
  float v17; // xmm7_4
  float v18; // xmm6_4
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int128 v22; // xmm0
  int v23; // xmm1_4
  void (__fastcall ***v24)(_QWORD, __int64); // rcx
  unsigned int v25; // ebx
  __int128 v27; // [rsp+38h] [rbp-41h]
  __int128 v28; // [rsp+48h] [rbp-31h] BYREF
  char v29; // [rsp+58h] [rbp-21h]
  char v30; // [rsp+E0h] [rbp+67h] BYREF

  v5 = a5;
  CBrushDrawListGenerator::Reset(a5);
  v10 = *(_QWORD *)a2;
  v29 = 0;
  v28 = 0LL;
  v11 = *(void (__fastcall **)(struct IBitmapResource *, char *))(v10 + 64);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v28 + 1);
  v11(a2, (char *)&v28 + 8);
  *(_QWORD *)&v28 = a2;
  (*(void (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)a2 + 8LL))(a2);
  v12 = 1;
  if ( a4 )
  {
    v13 = a4 - 1;
    if ( !v13 || (v14 = 2, v13 != 2) )
      v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  LODWORD(v15) = 0;
  v16 = 0;
  if ( *((_QWORD *)&v28 + 1) )
  {
    v15 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)&v28 + 1) + 32LL))(
                       *((_QWORD *)&v28 + 1),
                       &v30);
    v16 = HIDWORD(v15);
  }
  v17 = 1.0 / (float)(int)v15;
  v18 = 1.0 / (float)v16;
  v19 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  v20 = v19;
  if ( v19 )
  {
    *(_QWORD *)(v19 + 8) = 1065353216LL;
    *(_DWORD *)(v19 + 16) = 0;
    *(_QWORD *)(v19 + 20) = 1065353216LL;
    *(_DWORD *)(v19 + 28) = 0;
    *(_BYTE *)(v19 + 52) = 0;
    *(_QWORD *)v19 = &CSurfaceDrawListBrush::`vftable';
    *(_QWORD *)(v19 + 56) = v28;
    if ( (_QWORD)v28 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 8LL))(v28);
    v21 = *((_QWORD *)&v28 + 1);
    *(_QWORD *)(v20 + 64) = *((_QWORD *)&v28 + 1);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    *(_BYTE *)(v20 + 72) = v29;
    *(_BYTE *)(v20 + 80) = v14;
    *(_WORD *)(v20 + 81) = 257;
    *(float *)(v20 + 84) = v17;
    *(float *)(v20 + 100) = v18;
    *(float *)(v20 + 108) = 0.0 - (float)(v17 * 0.0);
    *(float *)(v20 + 112) = 0.0 - (float)(v18 * 0.0);
    *(_QWORD *)(v20 + 88) = 0LL;
    *(_DWORD *)(v20 + 96) = 0;
    *(_DWORD *)(v20 + 104) = 0;
    *(_DWORD *)(v20 + 116) = 1065353216;
    *(_DWORD *)(v20 + 144) = 1;
    *(struct D2D_RECT_F *)(v20 + 120) = CSurfaceDrawListBrush::k_rcfBoundless;
    *(_BYTE *)(v20 + 52) = 1;
    v22 = *(_OWORD *)((char *)a3 + 24);
    *(_DWORD *)(v20 + 48) = 50529027;
    *(_OWORD *)(v20 + 32) = v22;
    *((float *)&v27 + 1) = v18 * *((float *)a3 + 7);
    *(float *)&v27 = v17 * *((float *)a3 + 6);
    *((_QWORD *)&v27 + 1) = __PAIR64__(v18 * *((float *)a3 + 9), v17 * *((float *)a3 + 8));
    *(_OWORD *)(v20 + 120) = v27;
    *(_OWORD *)(v20 + 8) = *(_OWORD *)a3;
    *(_QWORD *)(v20 + 24) = *((_QWORD *)a3 + 2);
    if ( *((_BYTE *)a1 + 140) )
    {
      v23 = *((_DWORD *)a3 + 7);
      *(_DWORD *)(v20 + 136) = *((_DWORD *)a3 + 6);
      *(_DWORD *)(v20 + 140) = v23;
      *(_BYTE *)(v20 + 147) = 1;
    }
    v24 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v5 + 1);
    *((_QWORD *)v5 + 1) = v20;
    if ( v24 )
      (**v24)(v24, 1LL);
    v25 = 0;
    if ( *((_DWORD *)v5 + 10) > 1u )
      v12 = *((_DWORD *)v5 + 10);
    *((_DWORD *)v5 + 10) = v12;
  }
  else
  {
    v25 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x34Au, 0LL);
  }
  if ( *((_QWORD *)&v28 + 1) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 16LL))(*((_QWORD *)&v28 + 1));
  if ( (_QWORD)v28 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 16LL))(v28);
  return v25;
}
