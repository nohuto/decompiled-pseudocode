/*
 * XREFs of ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180021EB0
 * Callers:
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180021BF4 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x1800E14F0 (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800220C4 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x180022160 (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180022944 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::NcAdornmentInfoQuery(CTopLevelWindow *this, struct NCADORNMENT_INFO *a2)
{
  __int64 v4; // rbx
  struct CVisual *RootVisualNoAddRef; // rax
  __m128i v6; // xmm1
  float v7; // xmm1_4
  float v8; // xmm5_4
  _DWORD *v9; // rdx
  __int64 v10; // r8
  int yBottom; // [rsp+20h] [rbp-39h]
  unsigned __int64 v13; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v15[64]; // [rsp+40h] [rbp-19h] BYREF
  RECT rcSrc2; // [rsp+80h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( *(_DWORD *)a2 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        v4 = *((_QWORD *)this + 60);
        break;
      case 2:
        v4 = *((_QWORD *)this + 61);
        break;
      case 3:
        v4 = *((_QWORD *)this + 62);
        break;
      default:
        if ( *(_DWORD *)a2 != 4 || (*((_DWORD *)this + 142) & 0x10000) == 0 )
          goto LABEL_13;
        v4 = *((_QWORD *)this + 65);
        break;
    }
  }
  else
  {
    v4 = *((_QWORD *)this + 59);
  }
  if ( !v4 )
  {
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)0x80070057LL,
      yBottom);
    return 2147942487LL;
  }
  RootVisualNoAddRef = (struct CVisual *)CTopLevelWindow::GetRootVisualNoAddRef(this, 0LL);
  CVisual::GetLocalToParentVisualTransform((CVisual *)v4, RootVisualNoAddRef, (struct D2DMatrix *)v15);
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 64));
  v14 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v13 = _mm_unpacklo_ps(_mm_cvtepi32_ps(v6), (__m128)COERCE_UNSIGNED_INT((float)*(int *)(v4 + 68))).m128_u64[0];
  D3DXVec2TransformCoord((struct D2DVector2 *)&v14, (const struct D2DVector2 *)&v14, (const struct D2DMatrix *)v15);
  D3DXVec2TransformCoord((struct D2DVector2 *)&v13, (const struct D2DVector2 *)&v13, (const struct D2DMatrix *)v15);
  v7 = *(float *)&v13;
  v8 = *(float *)&v14;
  if ( *(float *)&v14 > *(float *)&v13 )
  {
    v7 = *(float *)&v14;
    v8 = *(float *)&v13;
  }
  SetRect((LPRECT)((char *)a2 + 4), (int)v8, (int)*((float *)&v14 + 1), (int)v7, (int)*((float *)&v13 + 1));
  OffsetRect(
    (LPRECT)((char *)a2 + 4),
    *(_DWORD *)(*((_QWORD *)this + 87) + 48LL),
    *(_DWORD *)(*((_QWORD *)this + 87) + 52LL));
  v9 = (_DWORD *)*((_QWORD *)this + 87);
  v10 = (*((_BYTE *)this + 184) & 4) != 0 ? 0x10 : 0;
  rcSrc2.left = *(_DWORD *)((char *)this + v10 + 604) + v9[12];
  rcSrc2.top = v9[13] + *(_DWORD *)((char *)this + v10 + 612);
  rcSrc2.right = v9[14] - *(_DWORD *)((char *)this + v10 + 608);
  rcSrc2.bottom = v9[15] - *(_DWORD *)((char *)this + v10 + 616);
  IntersectRect((LPRECT)((char *)a2 + 4), (const RECT *)((char *)a2 + 4), &rcSrc2);
  return 0LL;
}
