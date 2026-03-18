/*
 * XREFs of ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x18015DE78
 * Callers:
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x18018A118 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x180291690 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18015E48C (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCursorState::EnsureDestRectAndTransform(CCursorState *this, char a2)
{
  __int64 v3; // rax
  float v4; // xmm1_4
  int v5; // xmm0_4
  __int32 v6; // xmm5_4
  int v7; // xmm2_4
  __int32 v8; // xmm3_4
  __int32 v9; // xmm4_4
  __int64 v10; // rcx
  bool v11; // zf
  int *v12; // rcx
  int v13; // eax
  float v14; // xmm1_4
  int v15; // eax
  float v16; // xmm1_4
  float v17; // xmm2_4
  struct Windows::Foundation::Numerics::float4x4 *v18; // r8
  const char *v19; // r9
  struct D2D_RECT_F v20; // [rsp+20h] [rbp-69h] BYREF
  __m128i v21; // [rsp+30h] [rbp-59h] BYREF
  __m128i si128; // [rsp+40h] [rbp-49h]
  __m128i v23; // [rsp+50h] [rbp-39h]
  int v24; // [rsp+60h] [rbp-29h]
  int v25; // [rsp+64h] [rbp-25h]
  int v26; // [rsp+68h] [rbp-21h]
  int v27; // [rsp+6Ch] [rbp-1Dh]
  int v28; // [rsp+70h] [rbp-19h]
  __int64 v29; // [rsp+80h] [rbp-9h] BYREF
  int v30; // [rsp+88h] [rbp-1h]
  _BYTE v31[64]; // [rsp+90h] [rbp+7h] BYREF
  int v32; // [rsp+D0h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  int v34; // [rsp+F0h] [rbp+67h] BYREF
  int v35; // [rsp+F4h] [rbp+6Bh]

  if ( !*((_BYTE *)this + 115) || a2 )
  {
    v3 = *((_QWORD *)this + 22);
    if ( v3 )
    {
      v10 = *(_QWORD *)(v3 + 24) + 120LL;
      v28 = 0;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 32LL))(v10, &v34);
      v11 = *((_BYTE *)this + 114) == 0;
      *(_QWORD *)&v20.left = 0LL;
      v20.right = (float)v34;
      v20.bottom = (float)v35;
      if ( !v11 )
      {
        v20.right = (float)v34 + 6.0;
        v20.bottom = (float)v35 + 6.0;
      }
      v12 = (int *)*((_QWORD *)this + 22);
      v13 = *v12;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v21 = _mm_load_si128((const __m128i *)&_xmm);
      v14 = (float)v13;
      v15 = v12[1];
      v26 = 0;
      v27 = 1065353216;
      LOBYTE(v28) = -88;
      v23 = _mm_load_si128((const __m128i *)&_xmm);
      BYTE1(v28) = BYTE1(v28) & 0xC0 | 0x29;
      v24 = LODWORD(v14) ^ _xmm;
      v16 = 1.0 / *((float *)this + 42);
      v25 = COERCE_UNSIGNED_INT((float)v15) ^ _xmm;
      CMILMatrix::Scale((CMILMatrix *)&v21, v16, v16, 1.0);
      v17 = *((float *)this + 48);
      if ( COERCE_FLOAT(LODWORD(v17) & _xmm) >= 0.0000011920929 )
      {
        v32 = 0;
        v29 = 0LL;
        v30 = 1065353216;
        CMILMatrix::SetRotation((CMILMatrix *)v31, (const struct Windows::Foundation::Numerics::float3 *)&v29, v17);
        CMILMatrix::Multiply((CMILMatrix *)&v21, (const struct CMILMatrix *)v31);
      }
      CMILMatrix::Translate((CMILMatrix *)&v21, *((float *)this + 53), *((float *)this + 54));
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v21, &v20, (float *)this + 32);
      if ( !Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v21, (__m128 *)&v21, v18) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1A6,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          v19);
      v5 = v25;
      v7 = v24;
      v4 = *(float *)&si128.m128i_i32[1];
      v8 = si128.m128i_i32[0];
      v9 = v21.m128i_i32[1];
      v6 = v21.m128i_i32[0];
    }
    else
    {
      v4 = FLOAT_1_0;
      v5 = 0;
      v6 = LODWORD(FLOAT_1_0);
      *((_QWORD *)this + 17) = 0LL;
      *((_QWORD *)this + 16) = 0LL;
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    *((_DWORD *)this + 36) = v6;
    *((_DWORD *)this + 37) = v9;
    *((_DWORD *)this + 38) = v8;
    *((float *)this + 39) = v4;
    *((_DWORD *)this + 40) = v7;
    *((_DWORD *)this + 41) = v5;
    *((_BYTE *)this + 115) = 1;
  }
}
