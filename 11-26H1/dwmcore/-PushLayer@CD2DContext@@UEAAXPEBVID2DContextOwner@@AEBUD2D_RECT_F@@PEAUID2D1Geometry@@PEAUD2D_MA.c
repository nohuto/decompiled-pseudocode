/*
 * XREFs of ?PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180070FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ED40 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800700A0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DContext::PushLayer(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const __m128i *a3,
        struct ID2D1Geometry *a4,
        struct D2D_MATRIX_3X2_F *a5,
        unsigned int a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_LAYER_OPTIONS1 a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  __m128 si128; // xmm6
  unsigned int v18; // xmm7_4
  __int64 v19; // rbx
  int v20; // xmm8_4
  __m128i v21; // xmm2
  _BYTE v22[4]; // [rsp+2Ch] [rbp-DCh] BYREF
  __int128 v23; // [rsp+38h] [rbp-D0h]
  __int128 v24; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v25; // [rsp+58h] [rbp-B0h]
  __int64 v26; // [rsp+60h] [rbp-A8h]
  _QWORD v27[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h]
  _OWORD v29[4]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-40h]

  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v14 = *((_DWORD *)this + 86);
  v15 = 0LL;
  if ( v14 )
  {
    v12 = (unsigned int)(v14 - 1);
    v15 = *(_QWORD *)(*((_QWORD *)this + 40) + 8 * v12);
  }
  CD2DContext::EnsureBeginDraw(this, v12, v13);
  v16 = *(_QWORD *)(v15 + 16);
  si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  v18 = 0;
  *(__m128 *)&v27[1] = si128;
  v28 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v16 + 200) + 240LL))(*(_QWORD *)(v16 + 200), &v27[1]);
  v19 = *(_QWORD *)(v15 + 16);
  if ( a9 != *(_DWORD *)(v19 + 388) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v19 + 200) + 624LL))(
      *(_QWORD *)(v19 + 200),
      (unsigned int)a9);
    *(_DWORD *)(v19 + 388) = a9;
    v19 = *(_QWORD *)(v15 + 16);
  }
  if ( a5 )
  {
    si128 = *(__m128 *)&a5->m11;
    v28 = *(_QWORD *)&a5->m[2][0];
    v18 = HIDWORD(v28);
    v20 = v28;
  }
  else
  {
    v20 = 0;
  }
  memset_0(v22, 0, 0x44uLL);
  v21 = _mm_loadu_si128(a3);
  *((_QWORD *)&v23 + 1) = __PAIR64__(si128.m128_u32[0], a7);
  LODWORD(v24) = _mm_shuffle_ps(si128, si128, 85).m128_u32[0];
  LODWORD(v27[0]) = a8;
  DWORD1(v24) = _mm_shuffle_ps(si128, si128, 170).m128_u32[0];
  v29[0] = v21;
  DWORD2(v24) = _mm_shuffle_ps(si128, si128, 255).m128_u32[0];
  HIDWORD(v24) = v20;
  *(_QWORD *)&v23 = a4;
  v26 = 0LL;
  v29[2] = v24;
  v29[1] = v23;
  v30 = v27[0];
  v25 = __PAIR64__(a6, v18);
  v29[3] = __PAIR64__(a6, v18);
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(**(_QWORD **)(v19 + 200) + 688LL))(
    *(_QWORD *)(v19 + 200),
    v29,
    0LL);
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v15);
  ++*(_DWORD *)(v15 + 48);
}
