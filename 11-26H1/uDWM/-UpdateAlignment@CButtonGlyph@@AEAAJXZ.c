/*
 * XREFs of ?UpdateAlignment@CButtonGlyph@@AEAAJXZ @ 0x18000A374
 * Callers:
 *     ?UpdateImage@CButtonGlyph@@AEAAJXZ @ 0x180009120 (-UpdateImage@CButtonGlyph@@AEAAJXZ.c)
 *     ?UpdateLayout@CButtonGlyph@@UEAAJ_N@Z @ 0x18006ECD0 (-UpdateLayout@CButtonGlyph@@UEAAJ_N@Z.c)
 * Callees:
 *     ?Width@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A88C (-Width@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Height@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A898 (-Height@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$GetBrush@UICompositionSurfaceBrush2@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionSurfaceBrush2@Composition@UI@Windows@@@Z @ 0x18000A9DC (--$GetBrush@UICompositionSurfaceBrush2@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUIComp.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     floorf @ 0x18008EED0 (floorf.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CButtonGlyph::UpdateAlignment(CButtonGlyph *this)
{
  __int64 v2; // rax
  int v3; // ecx
  float v4; // xmm8_4
  float v5; // xmm9_4
  int v6; // edx
  float v7; // xmm2_4
  double v8; // xmm0_8
  LONG v9; // xmm7_4
  __m128 v10; // xmm11
  __m128 v11; // xmm6
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // edi
  struct tagRECT v18; // [rsp+28h] [rbp-19h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]
  __int64 v21; // [rsp+A8h] [rbp+67h] BYREF

  v18.left = *((_DWORD *)this + 60);
  v18.top = *((_DWORD *)this + 61);
  v18.right = *((_DWORD *)this + 16) + v18.left;
  v18.bottom = v18.top + *((_DWORD *)this + 17);
  CRectangleVisual::SetRect(this, &v18);
  v2 = *((_QWORD *)this + 29);
  v3 = *(_DWORD *)(v2 + 132);
  if ( *(int *)(v2 + 128) <= 0 || v3 <= 0 )
    return 0LL;
  *(_QWORD *)&v18.left = 0LL;
  *(float *)&v18.right = (float)*((int *)this + 16);
  *(float *)&v18.bottom = (float)*((int *)this + 17);
  v4 = (float)v3;
  v5 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Height(&v18)));
  v7 = (float)v6;
  v8 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Width(&v18);
  *(float *)&v9 = fminf(1.0, fminf(*(float *)&v8 / v7, v5 / v4));
  v18.left = v9;
  *(_QWORD *)&v18.top = 0LL;
  v18.bottom = v9;
  v10 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf(
                                                  (float)((float)(*(float *)&v8 - (float)(*(float *)&v9 * v7)) * 0.5)
                                                + 0.5));
  v10.m128_f32[0] = v10.m128_f32[0] + 0.0;
  v11 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf((float)((float)(v5 - (float)(*(float *)&v9 * v4)) * 0.5) + 0.5));
  v11.m128_f32[0] = v11.m128_f32[0] + 0.0;
  v21 = 0LL;
  v12 = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionSurfaceBrush2>(this, &v21);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v12,
      v18.left);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  else
  {
    v14 = v21;
    if ( v21 )
    {
      v19 = _mm_unpacklo_ps(v10, v11).m128_u64[0];
      v15 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v21 + 152LL))(v21, &v18);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x251,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
          (const char *)(unsigned int)v15,
          v18.left);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        return v16;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      return 0LL;
    }
    v13 = -2003292412;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)0x88982F04LL,
      v18.left);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v21);
  }
  return v13;
}
