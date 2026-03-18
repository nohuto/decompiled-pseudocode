/*
 * XREFs of ?GetBounds@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800924B0
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091390 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_RECT_F *__fastcall CTreeDirty::GetBounds(__int64 a1, struct D2D_RECT_F *a2)
{
  struct D2D_RECT_F *v2; // r8
  __int64 v3; // r10
  struct D2D_RECT_F *v4; // r9
  struct D2D_RECT_F *v5; // r10
  const struct D2D_RECT_F *v6; // r9
  bool v7; // al
  struct D2D_RECT_F *v8; // r9
  __int64 v9; // r11
  char v10; // dl
  float top; // xmm1_4
  float right; // xmm0_4
  float bottom; // xmm0_4

  v2 = a2;
  *(_QWORD *)&a2->right = 0LL;
  *(_QWORD *)&a2->left = 0LL;
  if ( *(_BYTE *)(a1 + 2324) )
  {
    v4 = (struct D2D_RECT_F *)(a1 + 2308);
    if ( a1 == -2308 )
      goto LABEL_24;
    v3 = 1LL;
  }
  else
  {
    v3 = *(unsigned int *)(a1 + 16);
    v4 = (struct D2D_RECT_F *)(a1 + 20);
    if ( a1 == -20 )
    {
      v4 = 0LL;
      if ( v3 )
LABEL_24:
        ((void (__fastcall *)(__int64, struct D2D_RECT_F *, struct D2D_RECT_F *))`gsl::details::get_terminate_handler'::`2'::handler)(
          a1,
          a2,
          a2);
    }
  }
  v5 = &v4[v3];
  while ( v4 != v5 )
  {
    IsEmpty(v2);
    v7 = IsEmpty(v6);
    if ( v10 )
    {
      if ( v7 || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues() )
      {
        *(_QWORD *)&v2->right = v9;
        *(_QWORD *)&v2->left = v9;
      }
      else
      {
        *v2 = *v8;
      }
    }
    else if ( !v7 )
    {
      if ( v2->left > v8->left )
        v2->left = v8->left;
      top = v8->top;
      if ( v2->top > top )
        v2->top = top;
      right = v8->right;
      if ( right > v2->right )
        v2->right = right;
      bottom = v8->bottom;
      if ( bottom > v2->bottom )
        v2->bottom = bottom;
    }
    v4 = v8 + 1;
  }
  return v2;
}
