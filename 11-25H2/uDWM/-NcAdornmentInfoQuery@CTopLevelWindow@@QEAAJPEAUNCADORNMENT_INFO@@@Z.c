/*
 * XREFs of ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180017F04
 * Callers:
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180017C40 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x1800E56A4 (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 * Callees:
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x180018108 (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800188F4 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180018990 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::NcAdornmentInfoQuery(CTopLevelWindow *this, struct NCADORNMENT_INFO *a2)
{
  unsigned int *v4; // rbx
  struct CVisual *RootVisualNoAddRef; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  float v8; // xmm1_4
  float v9; // xmm5_4
  _DWORD *v10; // rdx
  __int64 v11; // r8
  int yBottom; // [rsp+20h] [rbp-39h]
  float v14; // [rsp+30h] [rbp-29h] BYREF
  float v15; // [rsp+34h] [rbp-25h]
  float v16; // [rsp+38h] [rbp-21h] BYREF
  float v17; // [rsp+3Ch] [rbp-1Dh]
  RECT rcSrc2; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v19[64]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( *(_DWORD *)a2 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        v4 = (unsigned int *)*((_QWORD *)this + 62);
        break;
      case 2:
        v4 = (unsigned int *)*((_QWORD *)this + 63);
        break;
      case 3:
        v4 = (unsigned int *)*((_QWORD *)this + 64);
        break;
      default:
        if ( *(_DWORD *)a2 != 4 || (*((_DWORD *)this + 146) & 0x10000) == 0 )
          goto LABEL_13;
        v4 = (unsigned int *)*((_QWORD *)this + 67);
        break;
    }
  }
  else
  {
    v4 = (unsigned int *)*((_QWORD *)this + 61);
  }
  if ( !v4 )
  {
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14BD,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)0x80070057LL,
      yBottom);
    return 2147942487LL;
  }
  RootVisualNoAddRef = (struct CVisual *)CTopLevelWindow::GetRootVisualNoAddRef(this, 0LL);
  CVisual::GetLocalToParentVisualTransform((CVisual *)v4, RootVisualNoAddRef, (struct D2DMatrix *)v19);
  v6 = _mm_cvtsi32_si128(v4[18]);
  v7 = _mm_cvtsi32_si128(v4[19]);
  v16 = 0.0;
  v17 = 0.0;
  LODWORD(v14) = _mm_cvtepi32_ps(v6).m128_u32[0];
  LODWORD(v15) = _mm_cvtepi32_ps(v7).m128_u32[0];
  D3DXVec2TransformCoord((struct D2DVector2 *)&v16, (const struct D2DVector2 *)&v16, (const struct D2DMatrix *)v19);
  D3DXVec2TransformCoord((struct D2DVector2 *)&v14, (const struct D2DVector2 *)&v14, (const struct D2DMatrix *)v19);
  v8 = v14;
  v9 = v16;
  if ( v16 > v14 )
  {
    v8 = v16;
    v9 = v14;
  }
  SetRect((LPRECT)((char *)a2 + 4), (int)v9, (int)v17, (int)v8, (int)v15);
  OffsetRect(
    (LPRECT)((char *)a2 + 4),
    *(_DWORD *)(*((_QWORD *)this + 89) + 48LL),
    *(_DWORD *)(*((_QWORD *)this + 89) + 52LL));
  v10 = (_DWORD *)*((_QWORD *)this + 89);
  v11 = *((_BYTE *)this + 200) & 4 | 0x9BLL;
  rcSrc2.left = *((_DWORD *)this + v11) + v10[12];
  rcSrc2.top = *((_DWORD *)this + v11 + 2) + v10[13];
  rcSrc2.right = v10[14] - *((_DWORD *)this + v11 + 1);
  rcSrc2.bottom = v10[15] - *((_DWORD *)this + v11 + 3);
  IntersectRect((LPRECT)((char *)a2 + 4), (const RECT *)((char *)a2 + 4), &rcSrc2);
  return 0LL;
}
