/*
 * XREFs of ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800ADF80
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?ValidateVisual@CRectangleVisual@@UEAAJXZ @ 0x18000A2F0 (-ValidateVisual@CRectangleVisual@@UEAAJXZ.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$IntersectRectT@UD2D_POINTANDSIZE_L@@@@YAHPEAUD2D_POINTANDSIZE_L@@PEBU0@1@Z @ 0x180073F0C (--$IntersectRectT@UD2D_POINTANDSIZE_L@@@@YAHPEAUD2D_POINTANDSIZE_L@@PEBU0@1@Z.c)
 *     ?InferViewportTransform@CSurfaceBrush@@IEAAJAEBUtagRECT@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180083834 (-InferViewportTransform@CSurfaceBrush@@IEAAJAEBUtagRECT@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SetViewportTransform@CSurfaceBrush@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18009BC60 (-SetViewportTransform@CSurfaceBrush@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetVisualBrushSourceRect@CDesktopThumbnailCVI@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@XZ @ 0x1800ADDB0 (-GetVisualBrushSourceRect@CDesktopThumbnailCVI@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::ValidateVisual(CDesktopThumbnailCVIVisual *this)
{
  char v2; // al
  _DWORD *v3; // rdx
  LONG v4; // r15d
  FLOAT m21; // r12d
  LONG m22_low; // r14d
  FLOAT m11; // edi
  FLOAT m12; // esi
  FLOAT v9; // ecx
  int v10; // eax
  FLOAT v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  float v14; // xmm6_4
  const struct tagRECT *VisualBrushSourceRect; // rax
  int v16; // r15d
  __int64 v17; // rdx
  int v19; // eax
  unsigned int v20; // ebx
  struct D2D_MATRIX_3X2_F v21; // [rsp+20h] [rbp-60h] BYREF
  struct D2D_MATRIX_3X2_F v22; // [rsp+38h] [rbp-48h] BYREF
  int v23; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v24; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  if ( (*((_DWORD *)this + 8) & *___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v23)) != 0 )
  {
    if ( *((_BYTE *)this + 256) || (v2 = 1, (*((_DWORD *)this + 65) & 0x100000) != 0) )
      v2 = 0;
    if ( *((_QWORD *)this + 26) )
    {
      if ( *((_QWORD *)this + 28) )
      {
        v3 = (_DWORD *)*((_QWORD *)this + 27);
        if ( v3 )
        {
          if ( (*((_DWORD *)this + 65) & 0x100000) == 0 || !*((_BYTE *)this + 257) )
          {
            v4 = *((_DWORD *)this + 16);
            m21 = *(float *)&v4;
            m22_low = *((_DWORD *)this + 17);
            m11 = 0.0;
            v24.right = v4;
            m12 = 0.0;
            v24.bottom = m22_low;
            *(_QWORD *)&v22.m[1][0] = __PAIR64__(m22_low, v4);
            *(_QWORD *)&v24.left = 0LL;
            *(_QWORD *)&v22.m11 = 0LL;
            if ( v2 )
            {
              v9 = 0.0;
              LODWORD(v21.m11) = -*((_DWORD *)this + 14);
              LODWORD(v21.m12) = -*((_DWORD *)this + 15);
              if ( v3[57] - v3[55] >= 0 )
                LODWORD(v9) = v3[57] - v3[55];
              v10 = v3[58] - v3[56];
              v21.m21 = v9;
              v11 = 0.0;
              if ( v10 >= 0 )
                v11 = *(float *)&v10;
              v21.m22 = v11;
              IntersectRectT<D2D_POINTANDSIZE_L>(&v22, (int *)&v21, &v24.left);
              m22_low = LODWORD(v22.m22);
              m21 = v22.m21;
              m12 = v22.m12;
              m11 = v22.m11;
            }
            v12 = 0;
            if ( *((_DWORD *)this + 62) - *((_DWORD *)this + 60) >= 0 )
              v12 = *((_DWORD *)this + 62) - *((_DWORD *)this + 60);
            v13 = *((_QWORD *)this + 26);
            v24 = (struct tagRECT)*((_OWORD *)this + 15);
            v14 = (float)v4 / (float)v12;
            VisualBrushSourceRect = (const struct tagRECT *)CDesktopThumbnailCVI::GetVisualBrushSourceRect(v13);
            v16 = CSurfaceBrush::InferViewportTransform(
                    (CDesktopThumbnailCVIVisual *)((char *)this + 224),
                    VisualBrushSourceRect,
                    &v24,
                    &v21);
            if ( v16 < 0 )
            {
              v17 = 437LL;
LABEL_20:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v17,
                (int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
                (const char *)(unsigned int)v16);
              return (unsigned int)v16;
            }
            v22.m11 = (float)(v21.m11 * v14) + (float)(v21.m12 * 0.0);
            v22.m12 = (float)(v21.m12 * v14) + (float)(v21.m11 * 0.0);
            v22.m21 = (float)(v21.m21 * v14) + (float)(v21.m22 * 0.0);
            v22.m22 = (float)(v21.m22 * v14) + (float)(v21.m21 * 0.0);
            v22.dx = (float)((float)(v21.dx * v14) + (float)(v21.dy * 0.0)) - (float)SLODWORD(m11);
            v22.dy = (float)((float)(v21.dy * v14) + (float)(v21.dx * 0.0)) - (float)SLODWORD(m12);
            v16 = CSurfaceBrush::SetViewportTransform((CDesktopThumbnailCVIVisual *)((char *)this + 224), &v22);
            if ( v16 < 0 )
            {
              v17 = 447LL;
              goto LABEL_20;
            }
            *(_QWORD *)&v21.m11 = __PAIR64__(LODWORD(m12), LODWORD(m11));
            LODWORD(v21.m21) = LODWORD(m21) + LODWORD(m11);
            LODWORD(v21.m22) = m22_low + LODWORD(m12);
            CRectangleVisual::SetRect(this, (const struct tagRECT *)&v21);
            *((_BYTE *)this + 257) = 1;
          }
        }
      }
    }
    *((_DWORD *)this + 8) &= ~*___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v23);
  }
  v19 = CRectangleVisual::ValidateVisual(this);
  v20 = v19;
  if ( v19 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C9,
    (int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
    (const char *)(unsigned int)v19);
  return v20;
}
