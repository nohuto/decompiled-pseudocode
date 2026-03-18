/*
 * XREFs of ?UpdateBrushTransform@CCompositionGlyphRun@@AEAAXXZ @ 0x18026A9F0
 * Callers:
 *     ?NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18026A9B0 (-NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?SetTransform@CComponentTransform2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801C48B8 (-SetTransform@CComponentTransform2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionGlyphRun::UpdateBrushTransform(CCompositionGlyphRun *this)
{
  __int64 v2; // rcx
  char v3; // al
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  FLOAT v7; // xmm1_4
  FLOAT v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  CComponentTransform2D *v11; // r9
  __m128i si128; // [rsp+20h] [rbp-50h] BYREF
  float v13; // [rsp+30h] [rbp-40h]
  float v14; // [rsp+34h] [rbp-3Ch]
  _BYTE v15[24]; // [rsp+38h] [rbp-38h] BYREF
  struct D2D_MATRIX_3X2_F v16; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, 84LL);
    v4 = (_QWORD *)*((_QWORD *)this + 11);
    if ( v3 )
    {
      v5 = v4[14];
      if ( !v5 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, 142LL) )
        return;
      v6 = v4[14];
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*v4 + 64LL))(*((_QWORD *)this + 11), 142LL) )
        return;
      v6 = *((_QWORD *)this + 11);
    }
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 152) )
      {
        LODWORD(v13) = *((_DWORD *)this + 24) ^ _xmm;
        v7 = 1.0 / *((float *)this + 26);
        *(_QWORD *)&v16.m[0][1] = 0LL;
        v8 = 1.0 / *((float *)this + 27);
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        LODWORD(v14) = *((_DWORD *)this + 25) ^ _xmm;
        v16.m11 = v7;
        v16.m22 = v8;
        v16.dx = 0.0 - (float)(v7 * 0.0);
        v16.dy = 0.0 - (float)(v8 * 0.0);
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)v15,
          (const struct D2D1::Matrix3x2F *)&si128,
          (const struct D2D1::Matrix3x2F *)&v16);
        v9 = *((float *)this + 20) + *((float *)this + 18);
        v10 = *((float *)this + 21) + *((float *)this + 19);
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v13 = v9;
        v14 = v10;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v16,
          (const struct D2D1::Matrix3x2F *)v15,
          (const struct D2D1::Matrix3x2F *)&si128);
        CComponentTransform2D::SetTransform(v11, &v16);
      }
    }
  }
}
