/*
 * XREFs of ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18003A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x18003AEBC (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x180187AB0 (-Arrange@StretchAlign@@QEBA-AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapRenderStrategy::GetBrushParameters(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CBrushDrawListGenerator *a3)
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx
  int v6; // edi
  int v7; // ebx
  int v8; // ebx
  unsigned int v9; // r14d
  float v10; // xmm8_4
  int v11; // edi
  float v12; // xmm9_4
  float v13; // xmm12_4
  float v14; // xmm13_4
  __int64 *v15; // r15
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  int v19; // ebx
  char v20; // r14
  __int64 v21; // rax
  int v22; // rdx^4
  float v23; // xmm11_4
  float v24; // xmm10_4
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int128 v29; // xmm0
  void (__fastcall ***v30)(_QWORD, __int64); // rcx
  __int64 v32; // rcx
  struct D2D_RECT_F v33; // xmm6
  __int64 v34; // rcx
  __int64 v35; // xmm3_8
  const struct D2D1::Matrix3x2F *v36; // rcx
  unsigned int v37; // [rsp+28h] [rbp-E0h]
  struct D2D_RECT_F v38; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-B0h]
  struct D2D_SIZE_F v40; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v41[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v42; // [rsp+88h] [rbp-80h]
  __int128 v43; // [rsp+A8h] [rbp-60h] BYREF
  struct D2D_RECT_F v44; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-40h]
  struct D2D_RECT_F v46; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-28h]
  __int128 v48; // [rsp+E8h] [rbp-20h] BYREF

  v3 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)a2 + 23);
  v41[0] = 0LL;
  (**v3)(v3, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, v41);
  if ( *((float *)a3 + 11) <= 0.0 || *((float *)a3 + 12) <= 0.0 || !*((_QWORD *)a2 + 23) )
  {
    v6 = -2003304441;
    v37 = 591;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2850, 2u, v6, v37, 0LL);
    v7 = v6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3FEu, 0LL);
    goto LABEL_31;
  }
  v32 = *((_QWORD *)a2 + 24);
  v40 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v43 = 0LL;
  v46 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, const struct CSurfaceBrush *, char *, struct D2D_SIZE_F *, __int128 *, __int128 *, struct D2D_RECT_F *))(*(_QWORD *)v32 + 72LL))(
         v32,
         a2,
         (char *)a3 + 44,
         &v40,
         &v48,
         &v43,
         &v46);
  if ( v6 < 0 )
  {
    v37 = 609;
    goto LABEL_3;
  }
  v44 = 0LL;
  StretchAlign::Arrange(
    (const struct CSurfaceBrush *)((char *)a2 + 168),
    &v38,
    &v40,
    (const struct D2D_SIZE_F *)((char *)a3 + 44),
    &v44);
  v39 = *(_QWORD *)&v44.left;
  *(_QWORD *)&v38.top = 0LL;
  v38.left = (float)(v44.right - v44.left) / v40.width;
  v38.bottom = (float)(v44.bottom - v44.top) / v40.height;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v44,
    (const struct D2D1::Matrix3x2F *)&v46,
    (const struct D2D1::Matrix3x2F *)&v38);
  v33 = v44;
  v34 = *((_QWORD *)a2 + 19);
  v35 = v45;
  v39 = v45;
  v38 = v44;
  if ( v34 )
  {
    (*(void (__fastcall **)(__int64, char *, struct D2D_RECT_F *))(*(_QWORD *)v34 + 216LL))(v34, (char *)a3 + 44, &v44);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v46,
      (const struct D2D1::Matrix3x2F *)&v38,
      (const struct D2D1::Matrix3x2F *)&v44);
    v33 = v46;
    v35 = v47;
    v38 = v46;
    v39 = v47;
  }
  if ( !D2D1::Matrix3x2F::IsIdentity((const struct CSurfaceBrush *)((char *)a2 + 216)) )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v46, (const struct D2D1::Matrix3x2F *)&v38, v36);
    v33 = v46;
    v35 = v47;
  }
  v8 = *((_DWORD *)a2 + 45);
  v9 = 0;
  v10 = *(float *)&v43;
  v11 = 1;
  v12 = *((float *)&v43 + 1);
  v13 = *((float *)&v43 + 2);
  v14 = *((float *)&v43 + 3);
  v15 = (__int64 *)v41[0];
  v42 = v43;
  *(__m128i *)((char *)a3 + 56) = _mm_load_si128((const __m128i *)&_xmm);
  for ( *((_DWORD *)a3 + 13) = 0; v9 < *((_DWORD *)a3 + 10); ++v9 )
  {
    v16 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a3 + v9 + 1);
    *((_QWORD *)a3 + v9 + 1) = 0LL;
    if ( v16 )
      (**v16)(v16, 1LL);
  }
  *((_DWORD *)a3 + 10) = 0;
  v17 = *v15;
  *(_QWORD *)&v38.left = 0LL;
  LOBYTE(v39) = 0;
  *(_QWORD *)&v38.right = 0LL;
  (*(void (__fastcall **)(__int64 *, FLOAT *))(v17 + 64))(v15, &v38.right);
  v18 = *(_QWORD *)&v38.left;
  *(_QWORD *)&v38.left = v15;
  (*(void (__fastcall **)(__int64 *))(*v15 + 8))(v15);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v8 )
  {
    v19 = v8 - 1;
    if ( !v19 || (v20 = 2, v19 != 2) )
      v20 = 1;
  }
  else
  {
    v20 = 0;
  }
  LODWORD(v21) = 0;
  v22 = 0;
  if ( *(_QWORD *)&v38.right )
  {
    v21 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, struct D2D_SIZE_F *))(**(_QWORD **)&v38.right + 32LL))(
                       *(_QWORD *)&v38.right,
                       &v40);
    v22 = HIDWORD(v21);
  }
  v23 = 1.0 / (float)(int)v21;
  v24 = 1.0 / (float)v22;
  v25 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  v26 = v25;
  if ( v25 )
  {
    *(_QWORD *)(v25 + 8) = 1065353216LL;
    *(_DWORD *)(v25 + 16) = 0;
    *(_QWORD *)(v25 + 20) = 1065353216LL;
    *(_DWORD *)(v25 + 28) = 0;
    *(_BYTE *)(v25 + 52) = 0;
    *(_QWORD *)v25 = &CSurfaceDrawListBrush::`vftable';
    v27 = *(_QWORD *)&v38.left;
    *(_QWORD *)(v25 + 56) = *(_QWORD *)&v38.left;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    v28 = *(_QWORD *)&v38.right;
    *(_QWORD *)(v26 + 64) = *(_QWORD *)&v38.right;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    *(_BYTE *)(v26 + 72) = v39;
    *(_BYTE *)(v26 + 80) = v20;
    *(_WORD *)(v26 + 81) = 257;
    v29 = v42;
    *(_QWORD *)(v26 + 88) = 0LL;
    *(float *)(v26 + 84) = v23;
    *(float *)(v26 + 100) = v24;
    *(float *)(v26 + 108) = 0.0 - (float)(v23 * 0.0);
    *(float *)(v26 + 112) = 0.0 - (float)(v24 * 0.0);
    *(_DWORD *)(v26 + 96) = 0;
    *(_DWORD *)(v26 + 104) = 0;
    *(_DWORD *)(v26 + 116) = 1065353216;
    *(_DWORD *)(v26 + 144) = 1;
    *(_OWORD *)(v26 + 32) = v29;
    *(_BYTE *)(v26 + 52) = 1;
    *(_DWORD *)(v26 + 48) = 50529027;
    *((float *)&v43 + 1) = v12 * v24;
    *(float *)&v43 = v10 * v23;
    *((float *)&v43 + 2) = v13 * v23;
    *((float *)&v43 + 3) = v14 * v24;
    *(_OWORD *)(v26 + 120) = v43;
    *(struct D2D_RECT_F *)(v26 + 8) = v33;
    *(_QWORD *)(v26 + 24) = v35;
    if ( *((_BYTE *)a2 + 140) )
    {
      *(float *)(v26 + 136) = v10;
      *(float *)(v26 + 140) = v12;
      *(_BYTE *)(v26 + 147) = 1;
    }
    v30 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a3 + 1);
    *((_QWORD *)a3 + 1) = v26;
    if ( v30 )
      (**v30)(v30, 1LL);
    v7 = 0;
    if ( *((_DWORD *)a3 + 10) > 1u )
      v11 = *((_DWORD *)a3 + 10);
    *((_DWORD *)a3 + 10) = v11;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x34Au, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v38.right);
  if ( *(_QWORD *)&v38.left )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v38.left + 16LL))(*(_QWORD *)&v38.left);
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x400u, 0LL);
LABEL_31:
  if ( v41[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v41[0] + 16LL))(v41[0]);
  return (unsigned int)v7;
}
