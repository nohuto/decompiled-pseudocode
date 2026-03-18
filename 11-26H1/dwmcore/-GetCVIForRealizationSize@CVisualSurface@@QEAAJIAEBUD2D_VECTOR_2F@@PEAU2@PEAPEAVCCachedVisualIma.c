/*
 * XREFs of ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x1800D3DB0
 * Callers:
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800D38D0 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x18022F230 (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800D3F4C (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1800D410C (-UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@M.c)
 *     ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x180216868 (-GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualSurface::GetCVIForRealizationSize(
        CVisualSurface *this,
        int a2,
        struct CCachedVisualImage ***a3,
        struct D2D_VECTOR_2F *a4,
        struct CCachedVisualImage **a5)
{
  struct CCachedVisualImage **v5; // r14
  float v8; // xmm0_4
  float v9; // xmm2_4
  FLOAT *v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  char *v14; // r9
  char *v15; // r8
  struct CCachedVisualImage *v16; // rbx
  int v17; // eax
  FLOAT v18; // xmm1_4
  int ExplicitRealizationSizeCVI; // eax
  unsigned int v21; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CCachedVisualImage *v23; // [rsp+50h] [rbp+20h] BYREF

  v5 = a5;
  *a5 = 0LL;
  if ( *((_BYTE *)this + 204) )
  {
    ExplicitRealizationSizeCVI = CVisualSurface::GetExplicitRealizationSizeCVI(this, a4, v5);
    v21 = ExplicitRealizationSizeCVI;
    if ( ExplicitRealizationSizeCVI >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)ExplicitRealizationSizeCVI);
    return v21;
  }
  else
  {
    a5 = *a3;
    v8 = *(float *)&a5;
    v9 = (float)a2;
    v10 = (FLOAT *)a3 + 1;
    if ( *(float *)&a5 > (float)a2 || *v10 > v9 )
    {
      if ( *(float *)&a5 <= *v10 )
      {
        *((float *)&a5 + 1) = (float)a2;
        *(float *)&a5 = (float)(v9 / *v10) * *(float *)&a5;
      }
      else
      {
        *(float *)&a5 = (float)a2;
        *((float *)&a5 + 1) = (float)(v9 / v8) * *v10;
      }
    }
    v23 = 0LL;
    v11 = CVisualSurface::GetOrCreateCVIForRealizationSize(this, (const struct D2D_VECTOR_2F *)&a5, &v23);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19D,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
        (const char *)(unsigned int)v11);
      if ( v23 )
        (*(void (__fastcall **)(struct CCachedVisualImage *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    else
    {
      v13 = *((_QWORD *)this + 10);
      v14 = (char *)this + 184;
      v15 = (char *)this + 176;
      v16 = v23;
      v17 = CCachedVisualImage::UpdateFromVisualSurface(v23, v13, v15, v14, &a5, 1);
      v12 = v17;
      if ( v17 >= 0 )
      {
        v18 = *((float *)&a5 + 1);
        LODWORD(a4->x) = (_DWORD)a5;
        a4->y = v18;
        *v5 = v16;
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
        (const char *)(unsigned int)v17);
      if ( v16 )
        (*(void (__fastcall **)(struct CCachedVisualImage *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return v12;
  }
}
