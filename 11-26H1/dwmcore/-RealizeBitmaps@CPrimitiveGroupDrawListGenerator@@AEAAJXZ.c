/*
 * XREFs of ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x18007C790
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x1800190B8 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?RVCDrawListBitmap@@$0A@@?$default_delete@$$BY0A@VCDrawListBitmap@@@std@@QEBAXPEAVCDrawListBitmap@@@Z @ 0x18001B258 (--$-RVCDrawListBitmap@@$0A@@-$default_delete@$$BY0A@VCDrawListBitmap@@@std@@QEBAXPEAVCDrawListBi.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x18007D050 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800D361C (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800D369C (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180146DA8 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801744A0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::RealizeBitmaps(CPrimitiveGroupDrawListGenerator *this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  bool v6; // cf
  SIZE_T v7; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r15
  CDrawListBitmap *v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // r15d
  __int64 v15; // rdi
  void (__fastcall *v16)(__int64, char *); // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  __int64 v24; // r15
  __int64 v25; // rax
  size_t v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rbx
  struct IBitmapResource **v32; // rax
  CDrawListBitmap *v33; // rax
  unsigned int v34; // [rsp+20h] [rbp-30h]
  __int128 v35; // [rsp+30h] [rbp-20h] BYREF
  char v36; // [rsp+40h] [rbp-10h]
  unsigned int v37; // [rsp+80h] [rbp+30h]

  v1 = *((unsigned int *)this + 8);
  v2 = 0LL;
  v37 = 0;
  if ( (_DWORD)v1 )
  {
    v4 = (unsigned int)v1;
    v5 = 24 * v1;
    if ( !is_mul_ok(v1, 0x18uLL) )
      v5 = -1LL;
    v6 = __CFADD__(v5, 8LL);
    v7 = v5 + 8;
    if ( v6 )
      v7 = -1LL;
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, v7);
    if ( v9 )
    {
      v11 = v9 + 1;
      *v9 = v1;
      v12 = (CDrawListBitmap *)(v9 + 1);
      do
      {
        CDrawListBitmap::CDrawListBitmap(v12);
        v12 = (CDrawListBitmap *)((char *)v12 + 24);
        --v4;
      }
      while ( v4 );
    }
    else
    {
      v11 = 0LL;
    }
    v13 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v11;
    if ( v13 )
      std::default_delete<CDrawListBitmap [0]>::operator()<CDrawListBitmap,0>(v10, v13);
    if ( !*((_QWORD *)this + 10) )
    {
      v34 = 227;
LABEL_27:
      v37 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v34, 0LL);
      return v37;
    }
    v14 = 0;
    do
    {
      if ( (unsigned __int64)v14 >= *((_QWORD *)this + 4) )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      _mm_lfence();
      v15 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v14);
      v35 = 0LL;
      v36 = 0;
      v16 = *(void (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 64LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v35 + 1);
      v16(v15, (char *)&v35 + 8);
      *(_QWORD *)&v35 = v15;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v17 = *((_QWORD *)this + 10);
      v18 = v35;
      *(_QWORD *)&v35 = 0LL;
      v19 = *(_QWORD *)(v17 + 24LL * v14);
      *(_QWORD *)(v17 + 24LL * v14) = v18;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v20 = *((_QWORD *)&v35 + 1);
      *((_QWORD *)&v35 + 1) = 0LL;
      v21 = *(_QWORD *)(v17 + 24LL * v14 + 8);
      *(_QWORD *)(v17 + 24LL * v14 + 8) = v20;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      *(_BYTE *)(v17 + 24LL * v14 + 16) = v36;
      if ( *((_QWORD *)&v35 + 1) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v35 + 1) + 16LL))(*((_QWORD *)&v35 + 1));
      if ( (_QWORD)v35 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v35 + 16LL))(v35);
      ++v14;
    }
    while ( v14 < (unsigned int)v1 );
  }
  v22 = *((unsigned int *)this + 12);
  if ( !(_DWORD)v22 )
    return v37;
  v24 = *((unsigned int *)this + 12);
  v25 = 24 * v24;
  if ( !is_mul_ok(v22, 0x18uLL) )
    v25 = -1LL;
  v6 = __CFADD__(v25, 8LL);
  v26 = v25 + 8;
  if ( v6 )
    v26 = -1LL;
  v27 = MIDL_user_allocate(v26);
  if ( v27 )
  {
    v29 = v27 + 1;
    *v27 = v22;
    `vector constructor iterator'(v27 + 1, 0x18uLL, v22, (void *(*)(void *))CDrawListBitmap::CDrawListBitmap);
  }
  else
  {
    v29 = 0LL;
  }
  v30 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = v29;
  if ( v30 )
    std::default_delete<CDrawListBitmap [0]>::operator()<CDrawListBitmap,0>(v28, v30);
  if ( !*((_QWORD *)this + 11) )
  {
    v34 = 239;
    goto LABEL_27;
  }
  v31 = 0LL;
  do
  {
    v32 = (struct IBitmapResource **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                       (char *)this + 48,
                                       v2);
    v33 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v35, *v32);
    CDrawListBitmap::operator=(v31 + *((_QWORD *)this + 11), v33);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v35);
    ++v2;
    v31 += 24LL;
    --v24;
  }
  while ( v24 );
  return v37;
}
