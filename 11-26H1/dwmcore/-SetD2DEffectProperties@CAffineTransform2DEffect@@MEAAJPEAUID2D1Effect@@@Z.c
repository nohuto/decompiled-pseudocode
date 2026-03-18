/*
 * XREFs of ?SetD2DEffectProperties@CAffineTransform2DEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180287180
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180197C44 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAffineTransform2DEffect::SetD2DEffectProperties(
        CAffineTransform2DEffect *this,
        struct ID2D1Effect *a2)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm6_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  __int64 (__fastcall *v10)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int); // rax
  int v11; // esi
  __int64 v12; // rdx
  int v14; // eax
  unsigned int v15; // ebx
  __int128 v16; // [rsp+38h] [rbp-19h] BYREF
  __int64 v17; // [rsp+48h] [rbp-9h]
  __int128 v18; // [rsp+50h] [rbp-1h] BYREF
  __int64 v19; // [rsp+60h] [rbp+Fh]
  D2D1_MATRIX_3X2_F v20; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  if ( !a2 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\affinetransform2deffect.cpp",
      (const char *)0x8007029CLL);
  v4 = *((float *)this + 99);
  v5 = *((float *)this + 98);
  v6 = *((float *)this + 91);
  v7 = *((float *)this + 92);
  v8 = *((float *)this + 94);
  v9 = v4 * *((float *)this + 93);
  DWORD2(v18) = *((_DWORD *)this + 93);
  *(_QWORD *)&v18 = __PAIR64__(LODWORD(v7), LODWORD(v6));
  *((float *)&v18 + 3) = v8;
  *(float *)&v19 = (float)((float)(v9 + (float)(v5 * v6)) + *((float *)this + 95)) - v5;
  *(_QWORD *)&v20.m[2][0] = *((_QWORD *)this + 52);
  *((float *)&v19 + 1) = (float)((float)((float)(v4 * v8) + (float)(v5 * v7)) + *((float *)this + 96)) - v4;
  *(_OWORD *)&v20.m11 = *((_OWORD *)this + 25);
  if ( !D2D1::Matrix3x2F::Invert(&v20) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x42,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\affinetransform2deffect.cpp",
      (const char *)0x8007029CLL);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v16,
    (const struct D2D1::Matrix3x2F *)&v20,
    (const struct D2D1::Matrix3x2F *)&v18);
  v18 = v16;
  v19 = v17;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v16,
    (const struct D2D1::Matrix3x2F *)&v18,
    (CAffineTransform2DEffect *)((char *)this + 400));
  v10 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL);
  v18 = v16;
  v19 = v17;
  v11 = v10(a2, 0LL, 0LL, (char *)this + 352, 4);
  if ( v11 < 0 )
  {
    v12 = 80LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\affinetransform2deffect.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
          a2,
          1LL,
          0LL,
          (char *)this + 356,
          4);
  if ( v11 < 0 )
  {
    v12 = 84LL;
    goto LABEL_7;
  }
  v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)a2 + 72LL))(
          a2,
          2LL,
          0LL,
          &v18,
          24);
  if ( v11 < 0 )
  {
    v12 = 88LL;
    goto LABEL_7;
  }
  v14 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
          a2,
          3LL,
          0LL,
          (char *)this + 360,
          4);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\affinetransform2deffect.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
