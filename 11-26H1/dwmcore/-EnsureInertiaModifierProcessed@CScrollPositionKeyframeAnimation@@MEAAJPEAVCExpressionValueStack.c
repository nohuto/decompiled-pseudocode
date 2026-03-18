/*
 * XREFs of ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@@Z @ 0x1801D85C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1801DB744 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z @ 0x180279EF0 (-ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z.c)
 *     ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@W4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x18028C0B0 (-TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@W4ModifierT.c)
 */

__int64 __fastcall CScrollPositionKeyframeAnimation::EnsureInertiaModifierProcessed(
        CScrollPositionKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  char v2; // al
  __int32 v5; // xmm1_4
  int v6; // edi
  int v7; // esi
  int v8; // xmm0_4
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int v12; // esi
  int v14; // xmm0_4
  int v15; // xmm0_4
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+40h] [rbp-C8h]
  int v18[16]; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+88h] [rbp-80h]
  int v20[16]; // [rsp+98h] [rbp-70h] BYREF
  int v21; // [rsp+D8h] [rbp-30h]
  __int64 v22; // [rsp+E8h] [rbp-20h] BYREF
  int v23; // [rsp+F0h] [rbp-18h]
  int v24; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v2 = *((_BYTE *)this + 624);
  if ( (v2 & 4) == 0 )
  {
    COERCE_FLOAT(v5 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v6 = 0;
    v7 = 0;
    v8 = *((_DWORD *)this + 158) & v5;
    *((_BYTE *)this + 624) = v2 | 4;
    v21 = 0;
    v19 = 0;
    if ( *(float *)&v8 >= 0.0000011920929 )
    {
      v9 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, 0LL, 0LL, v20);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5B,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
          (const char *)(unsigned int)v9);
LABEL_9:
        CExpressionValue::DestroyCurrent((CExpressionValue *)v18);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v20);
        return v10;
      }
      v6 = v21;
      v5 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    }
    if ( COERCE_FLOAT(*((_DWORD *)this + 159) & v5) >= 0.0000011920929 )
    {
      v11 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, 0LL, 1LL, v18);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x64,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
          (const char *)(unsigned int)v11);
        v10 = v12;
        goto LABEL_9;
      }
      v7 = v19;
    }
    if ( v6 || v7 )
    {
      CScrollPositionKeyframeAnimation::GetNaturalEndpoint(this, &v16);
      if ( v6 == 18 )
      {
        v14 = v20[0];
        *((_BYTE *)this + 624) |= 8u;
        LODWORD(v16) = v14;
      }
      if ( v7 == 18 )
      {
        v15 = v18[0];
        *((_BYTE *)this + 624) |= 8u;
        HIDWORD(v16) = v15;
      }
      if ( (*((_BYTE *)this + 624) & 8) != 0 )
      {
        v24 = 0;
        CExpressionValue::DestroyCurrent((CExpressionValue *)&v22);
        v22 = v16;
        v24 = 52;
        v23 = v17;
        CKeyframeAnimation::ReplaceLastKeyframeValueConstant(this, (struct CExpressionValue *)&v22);
        CExpressionValue::DestroyCurrent((CExpressionValue *)&v22);
      }
    }
    CExpressionValue::DestroyCurrent((CExpressionValue *)v18);
    CExpressionValue::DestroyCurrent((CExpressionValue *)v20);
  }
  return 0LL;
}
