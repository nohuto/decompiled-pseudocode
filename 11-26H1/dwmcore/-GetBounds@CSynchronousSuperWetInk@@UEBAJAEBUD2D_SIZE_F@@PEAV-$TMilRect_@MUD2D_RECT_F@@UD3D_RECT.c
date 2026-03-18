/*
 * XREFs of ?GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180284BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x180125FA8 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::GetBounds(CSynchronousSuperWetInk *a1, __int64 a2, _OWORD *a3)
{
  int *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // xmm1_4
  __int32 v7; // xmm2_4
  int v8; // xmm0_4
  _OWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !CSynchronousSuperWetInk::IsSuperWetCompatible(a1) )
    return 0LL;
  if ( *(_DWORD *)(v4 + 172) == 2 )
  {
    v6 = *v3;
    COERCE_FLOAT(v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(*v3 & v7) < 0.0000011920929 && COERCE_FLOAT(v3[1] & v7) < 0.0000011920929 )
    {
      if ( IsEmpty((const struct D2D_RECT_F *)(v4 + 72)) )
      {
        *(_QWORD *)v11 = 0LL;
        *(_DWORD *)(v11 + 8) = 1065353216;
        *(_DWORD *)(v11 + 12) = 1065353216;
      }
      else
      {
        *(_OWORD *)v11 = *v10;
      }
    }
    else
    {
      v8 = v3[1];
      *(_QWORD *)v5 = 0LL;
      *(_DWORD *)(v5 + 8) = v6;
      *(_DWORD *)(v5 + 12) = v8;
    }
    return 0LL;
  }
  v12 = *(_QWORD *)(v4 + 184);
  if ( !v12 )
    return 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 192LL))(v12);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC7,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
    (const char *)(unsigned int)v13);
  return v14;
}
