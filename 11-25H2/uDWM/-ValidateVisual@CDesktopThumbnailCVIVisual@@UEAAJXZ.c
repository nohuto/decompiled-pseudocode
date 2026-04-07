/*
 * XREFs of ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18007EB30
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000A9D0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z @ 0x180013350 (-Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F2BC (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?GetCVIRect@CDesktopThumbnailCVI@@QEAA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@XZ @ 0x18007EE20 (-GetCVIRect@CDesktopThumbnailCVI@@QEAA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL.c)
 *     ??$IntersectRectT@UD2D_POINTANDSIZE_L@@@@YAHPEAUD2D_POINTANDSIZE_L@@PEBU0@1@Z @ 0x180082408 (--$IntersectRectT@UD2D_POINTANDSIZE_L@@@@YAHPEAUD2D_POINTANDSIZE_L@@PEBU0@1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Width@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x1800996C4 (-Width@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 *     ?GetRealizationSize@CDesktopThumbnailCVI@@QEAA?AUtagSIZE@@XZ @ 0x18009A3A0 (-GetRealizationSize@CDesktopThumbnailCVI@@QEAA-AUtagSIZE@@XZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::ValidateVisual(struct CRectangleGeometryProxy **this)
{
  int RectangleGeometry; // edi
  __int64 v3; // rdx
  char v5; // cl
  struct CRectangleGeometryProxy *v6; // rdx
  int v7; // edi
  FLOAT v8; // ecx
  int v9; // eax
  FLOAT v10; // ecx
  CDesktopThumbnailCVI *v11; // rcx
  int v12; // r15d
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  int v16; // edx
  int v17; // edx
  __m128i v18; // xmm4
  int v19; // eax
  double v20; // xmm4_8
  double v21; // xmm4_8
  int v22; // eax
  CRectResourceProxy *v23; // rcx
  FLOAT v24; // xmm3_4
  float v25; // xmm1_4
  int v26; // [rsp+20h] [rbp-50h]
  __int128 v27; // [rsp+30h] [rbp-40h] BYREF
  int v28[4]; // [rsp+40h] [rbp-30h] BYREF
  struct D2D_RECT_F v29; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  RectangleGeometry = CRenderDataVisual::ValidateVisual((CRenderDataVisual *)this);
  if ( RectangleGeometry < 0 )
  {
    v3 = 407LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)RectangleGeometry,
      v26);
    return (unsigned int)RectangleGeometry;
  }
  if ( ((_DWORD)this[4] & 0x1000) != 0 )
  {
    if ( *((_BYTE *)this + 297) || (v5 = 1, (*((_DWORD *)this + 75) & 0x100000) != 0) )
      v5 = 0;
    if ( this[30] )
    {
      if ( this[31] )
      {
        v6 = this[34];
        if ( v6 )
        {
          v7 = *((_DWORD *)this + 18);
          *((_QWORD *)&v27 + 1) = __PAIR64__(*((_DWORD *)this + 19), v7);
          *(_QWORD *)&v27 = 0LL;
          *(_OWORD *)v28 = v27;
          v29 = 0LL;
          if ( v5 )
          {
            v8 = 0.0;
            LODWORD(v29.left) = -*((_DWORD *)this + 16);
            LODWORD(v29.top) = -*((_DWORD *)this + 17);
            if ( *((_DWORD *)v6 + 57) - *((_DWORD *)v6 + 55) >= 0 )
              LODWORD(v8) = *((_DWORD *)v6 + 57) - *((_DWORD *)v6 + 55);
            v9 = *((_DWORD *)v6 + 58) - *((_DWORD *)v6 + 56);
            v29.right = v8;
            v10 = 0.0;
            if ( v9 >= 0 )
              v10 = *(float *)&v9;
            v29.bottom = v10;
            IntersectRectT<D2D_POINTANDSIZE_L>(v28, &v29, &v27);
          }
          CDesktopThumbnailCVI::GetCVIRect(this[33], &v27);
          CDesktopThumbnailCVI::GetRealizationSize(v11);
          v12 = *((_DWORD *)this + 70);
          v15 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Width(&v27, *((unsigned int *)this + 72), v13, v14);
          v17 = v16 - v12;
          v18 = _mm_cvtsi32_si128(v15);
          v19 = 0;
          *(_QWORD *)&v20 = *(_OWORD *)&_mm_cvtepi32_pd(v18);
          if ( v17 >= 0 )
            v19 = v17;
          v21 = v20 * (double)v7 / ((double)v19 * (double)SLODWORD(v29.left));
          if ( (*((_DWORD *)this + 75) & 0x100000) == 0 )
            goto LABEL_22;
          if ( !*((_BYTE *)this + 298) )
          {
            *(_QWORD *)&v29.left = 0LL;
            LODWORD(v29.right) = (int)((double)(DWORD2(v27) - (int)v27) / v21);
            LODWORD(v29.bottom) = (int)((double)(HIDWORD(v27) - DWORD1(v27)) / v21);
            IntersectRectT<D2D_POINTANDSIZE_L>(v28, &v29, v28);
LABEL_22:
            v22 = *((_DWORD *)this + 71) - DWORD1(v27);
            v23 = this[31];
            v24 = (double)(v12 - (int)v27) + (double)v28[0] / v21;
            v29.left = v24;
            v29.top = (double)v22 + (double)v28[1] / v21;
            v25 = (double)v28[2] / v21;
            v29.right = v25 + v24;
            v29.bottom = (float)((double)v28[3] / v21) + v29.top;
            RectangleGeometry = CRectResourceProxy::Update(v23, &v29);
            if ( RectangleGeometry < 0 )
            {
              v3 = 458LL;
              goto LABEL_3;
            }
            RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v28[0], v28[1], v28[2], v28[3], this + 30);
            if ( RectangleGeometry < 0 )
            {
              v3 = 460LL;
              goto LABEL_3;
            }
            *((_BYTE *)this + 298) = 1;
          }
        }
      }
    }
    *((_DWORD *)this + 8) &= ~0x1000u;
  }
  return 0LL;
}
