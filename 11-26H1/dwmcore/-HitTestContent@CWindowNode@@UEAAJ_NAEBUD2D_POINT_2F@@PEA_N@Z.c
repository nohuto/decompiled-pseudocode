/*
 * XREFs of ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800251B0
 * Callers:
 *     <none>
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18002563C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z @ 0x18016E300 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18016E340 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x1801D5E48 (-IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::HitTestContent(CWindowNode *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  void (__fastcall ***v4)(_QWORD, __int64); // r14
  unsigned int v6; // edi
  __int64 v10; // rcx
  int v11; // eax
  __m128 x_low; // xmm2
  __m128i y_low; // xmm4
  __m128 v15; // xmm6
  __m128i v16; // xmm7
  __m128i v17; // xmm8
  __m128 v18; // xmm9
  float y; // xmm0_4
  const struct D2D_RECT_F *TouchTargetBounds; // rax
  CGeometry *v21; // rcx
  bool v22; // al
  float v23; // xmm0_4
  int v24; // ecx
  int v25; // ecx
  unsigned __int64 v26; // rax
  void (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rcx
  bool v28; // al
  int v29; // ecx
  __m128 v30; // rt1
  D3DVALUE r; // xmm1_4
  int ShapeData; // eax
  unsigned int v33; // [rsp+20h] [rbp-59h]
  __int64 v34; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v35[2]; // [rsp+38h] [rbp-41h] BYREF
  struct _D3DCOLORVALUE v36; // [rsp+40h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = 0LL;
  v6 = 0;
  *a4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CWindowNode *))(*(_QWORD *)this + 296LL))(this)
    && !*a4
    && (v10 = *((_QWORD *)this + 31)) != 0
    && (v11 = (*(__int64 (__fastcall **)(__int64, char *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v10 + 216LL))(
                v10,
                (char *)this + 140,
                a3,
                a4),
        v6 = v11,
        v11 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1279u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2C1u, 0LL);
  }
  else if ( !*a4 && !*((_BYTE *)this + 745) && *((_QWORD *)this + 99) )
  {
    v15 = 0LL;
    v15.m128_f32[0] = (float)*((int *)this + 178);
    v16 = 0LL;
    *(float *)v16.m128i_i32 = (float)*((int *)this + 179);
    v17 = 0LL;
    *(float *)v17.m128i_i32 = (float)*((int *)this + 177);
    v18 = 0LL;
    v18.m128_f32[0] = (float)*((int *)this + 176);
    if ( a3->x >= v18.m128_f32[0]
      && v15.m128_f32[0] > a3->x
      && (y = a3->y, y >= *(float *)v17.m128i_i32)
      && *(float *)v16.m128i_i32 > y )
    {
      *a4 = 1;
      x_low = (__m128)LODWORD(a3->x);
      y_low = (__m128i)LODWORD(a3->y);
    }
    else
    {
      *a4 = 0;
      x_low = (__m128)LODWORD(a3->x);
      y_low = (__m128i)LODWORD(a3->y);
      if ( a2 )
      {
        TouchTargetBounds = (const struct D2D_RECT_F *)CVisual::GetTouchTargetBounds(this, &v36);
        if ( IsPointInRect(a3, TouchTargetBounds) )
        {
          *a4 = 1;
          if ( v18.m128_f32[0] <= x_low.m128_f32[0] )
          {
            if ( x_low.m128_f32[0] >= v15.m128_f32[0] )
            {
              x_low = v15;
              x_low.m128_f32[0] = v15.m128_f32[0] - 1.0;
            }
          }
          else
          {
            x_low = v18;
          }
          if ( *(float *)v17.m128i_i32 <= *(float *)y_low.m128i_i32 )
          {
            if ( *(float *)y_low.m128i_i32 >= *(float *)v16.m128i_i32 )
            {
              y_low = v16;
              *(float *)y_low.m128i_i32 = *(float *)v16.m128i_i32 - 1.0;
            }
          }
          else
          {
            y_low = v17;
          }
        }
      }
    }
    if ( !*a4 )
      goto LABEL_22;
    if ( (*((_BYTE *)this + 896) & 4) != 0 && (*((_BYTE *)this + 764) & 0xA) != 0 )
    {
      if ( (_mm_cvtsi128_si32((__m128i)x_low) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v29 = (int)x_low.m128_f32[0];
        x_low.m128_f32[0] = (float)(int)x_low.m128_f32[0] - x_low.m128_f32[0];
        x_low = _mm_cmple_ss(x_low, (__m128)LODWORD(FLOAT_N0_5));
        v24 = v29 - _mm_cvtsi128_si32((__m128i)x_low);
      }
      else
      {
        *(float *)&v34 = x_low.m128_f32[0] + 6291456.25;
        v24 = (int)((_DWORD)v34 << 10) >> 11;
      }
      v35[0] = v24;
      if ( (_mm_cvtsi128_si32(y_low) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        x_low.m128_f32[0] = (float)(int)*(float *)y_low.m128i_i32 - *(float *)y_low.m128i_i32;
        v30.m128_f32[0] = FLOAT_N0_5;
        v25 = (int)*(float *)y_low.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(x_low, v30));
      }
      else
      {
        *(float *)&v34 = *(float *)y_low.m128i_i32 + 6291456.25;
        v25 = (int)((_DWORD)v34 << 10) >> 11;
      }
      v35[1] = v25;
      v26 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 103);
      *(struct _D3DCOLORVALUE *)&v36.r = 0LL;
      if ( *(_QWORD *)(*(_QWORD *)v26 + 360LL) )
      {
        v27 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)v26 + 448LL);
        if ( v27 )
        {
          v34 = 0LL;
          (**v27)(v27, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v34);
          *(struct _D3DCOLORVALUE *)&v36.r = *(struct _D3DCOLORVALUE *)(*(__int64 (__fastcall **)(__int64, struct _D3DCOLORVALUE *, _DWORD *))(*(_QWORD *)v34 + 24LL))(
                                                                         v34,
                                                                         &v36,
                                                                         v35);
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
      if ( (*((_BYTE *)this + 764) & 2) != 0 )
      {
        if ( *((_DWORD *)this + 194) )
        {
          r = v36.r;
          v36.r = v36.b;
          v36.b = r;
        }
        *a4 = !CColorKey::IsColorKey((CWindowNode *)((char *)this + 840), &v36);
      }
      if ( !*a4 || (*((_BYTE *)this + 764) & 8) != 0 && (v28 = v36.a > 0.0, *a4 = v36.a > 0.0, !v28) )
      {
LABEL_22:
        if ( (*((_BYTE *)this + 896) & 8) != 0 )
        {
          v21 = (CGeometry *)*((_QWORD *)this + 100);
          *(_QWORD *)&v36.r = 0LL;
          LOBYTE(v36.b) = 0;
          if ( !v21 )
            goto LABEL_24;
          ShapeData = CGeometry::GetShapeData(
                        v21,
                        (const struct D2D_SIZE_F *)((char *)this + 140),
                        (struct CShapePtr *)&v36);
          if ( ShapeData < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x649,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
              (const char *)(unsigned int)ShapeData,
              v33);
          v4 = *(void (__fastcall ****)(_QWORD, __int64))&v36.r;
          if ( *(_QWORD *)&v36.r )
          {
            CShapePtr::FillContainsPoint((CShapePtr *)&v36, a3, a4);
            v4 = *(void (__fastcall ****)(_QWORD, __int64))&v36.r;
          }
          else
          {
LABEL_24:
            v22 = 0;
            if ( a3->x >= v18.m128_f32[0] && v15.m128_f32[0] > a3->x )
            {
              v23 = a3->y;
              if ( v23 >= *(float *)v17.m128i_i32 )
                v22 = *(float *)v16.m128i_i32 > v23;
            }
            *a4 = v22;
          }
          if ( LOBYTE(v36.b) && v4 )
            (**v4)(v4, 1LL);
        }
      }
    }
  }
  return v6;
}
