/*
 * XREFs of ?GetBrushParameters@CClipBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180289490
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18001B6D4 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18001B6F4 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A430 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1801991E4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClipBrush::GetBrushParameters(CClipBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  __m128 v12; // xmm2
  struct D2D_RECT_F v13; // xmm0
  struct D2D_RECT_F v15; // [rsp+30h] [rbp-20h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  __int64 (__fastcall ***v17)(_QWORD, __int64); // [rsp+70h] [rbp+20h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, __int64); // [rsp+80h] [rbp+30h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 344LL))(*((_QWORD *)this + 13));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xC4u, 0LL);
    goto LABEL_20;
  }
  if ( !*((_DWORD *)a2 + 10) )
  {
    v17 = 0LL;
    *(_QWORD *)&v15.left = &v17;
    *(_QWORD *)&v15.right = 0LL;
    v16 = 1;
    v6 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v15.right, v5);
    wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>((__int64)&v15);
    if ( v6 >= 0 )
    {
      v18 = v17;
      v17 = 0LL;
      CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v18);
      std::unique_ptr<CShape>::~unique_ptr<CShape>(&v18);
      std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v17);
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xCAu, 0LL);
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v17);
LABEL_20:
    CBrushDrawListGenerator::Reset(a2);
    return (unsigned int)v6;
  }
LABEL_5:
  v7 = *((_QWORD *)a2 + 1);
  if ( *(_BYTE *)(v7 + 52) )
  {
    v8 = *((float *)this + 28);
    v9 = *(float *)(v7 + 36);
    v10 = *(float *)(v7 + 40);
    v11 = *(float *)(v7 + 44);
    v15.left = *(FLOAT *)(v7 + 32);
    v15.top = v9;
    v15.right = v10;
    v15.bottom = v11;
    if ( v8 > v15.left )
      v15.left = v8;
    if ( *((float *)this + 29) > v9 )
      v15.top = *((FLOAT *)this + 29);
    if ( v10 > *((float *)this + 30) )
      v15.right = *((FLOAT *)this + 30);
    if ( v11 > *((float *)this + 31) )
      v15.bottom = *((FLOAT *)this + 31);
    if ( IsEmpty(&v15) )
    {
      *(_QWORD *)&v15.right = 0LL;
      *(_QWORD *)&v15.left = 0LL;
    }
  }
  else
  {
    v12 = (__m128)_mm_loadu_si128((const __m128i *)this + 7);
    LODWORD(v15.left) = v12.m128_i32[0];
    LODWORD(v15.bottom) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
    LODWORD(v15.top) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
    LODWORD(v15.right) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  }
  v13 = v15;
  *(_BYTE *)(v7 + 52) = 1;
  v6 = 0;
  *(_DWORD *)(v7 + 48) = 50529027;
  *(struct D2D_RECT_F *)(v7 + 32) = v13;
  return (unsigned int)v6;
}
