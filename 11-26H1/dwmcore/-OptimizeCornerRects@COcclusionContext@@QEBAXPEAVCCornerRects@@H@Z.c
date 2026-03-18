/*
 * XREFs of ?OptimizeCornerRects@COcclusionContext@@QEBAXPEAVCCornerRects@@H@Z @ 0x18024FBD4
 * Callers:
 *     ?HasOverlappingCornerRects@COverlayContext@@KA_NPEAVOverlayPlaneInfo@1@AEBV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023C880 (-HasOverlappingCornerRects@COverlayContext@@KA_NPEAVOverlayPlaneInfo@1@AEBV-$vector_facade@PEAVO.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18024FA50 (-CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 */

void __fastcall COcclusionContext::OptimizeCornerRects(
        COcclusionContext *this,
        const struct D2D_RECT_F *a2,
        unsigned int a3)
{
  __int128 *v6; // rcx
  unsigned int v7; // r8d
  bool v8; // r15
  char v9; // di
  bool v10; // r12
  bool v11; // r14
  char v12; // dl
  bool v13; // bp
  char CanDiscardCornerRect; // al

  v8 = IsEmpty(a2);
  v9 = 1;
  if ( !v8 && (unsigned __int8)COcclusionContext::CanDiscardCornerRect((__int64)this, v6, v7) )
  {
    *(_QWORD *)&a2->right = 0LL;
    v8 = 1;
    *(_QWORD *)&a2->left = 0LL;
  }
  v10 = IsEmpty(a2 + 1);
  if ( !v10 && (unsigned __int8)COcclusionContext::CanDiscardCornerRect((__int64)this, (__int128 *)&a2[1], a3) )
  {
    *(_QWORD *)&a2[1].right = 0LL;
    v10 = 1;
    *(_QWORD *)&a2[1].left = 0LL;
  }
  v11 = IsEmpty(a2 + 2);
  if ( !v11 && (unsigned __int8)COcclusionContext::CanDiscardCornerRect((__int64)this, (__int128 *)&a2[2], a3) )
  {
    *(_QWORD *)&a2[2].right = 0LL;
    v11 = 1;
    *(_QWORD *)&a2[2].left = 0LL;
  }
  v13 = IsEmpty(a2 + 3);
  if ( !v13 )
  {
    CanDiscardCornerRect = COcclusionContext::CanDiscardCornerRect((__int64)this, (__int128 *)&a2[3], a3);
    v12 = 0;
    if ( CanDiscardCornerRect )
    {
      *(_QWORD *)&a2[3].right = 0LL;
      v13 = 1;
      *(_QWORD *)&a2[3].left = 0LL;
    }
  }
  if ( !v8 || !v10 || !v11 || !v13 )
    v9 = v12;
  LOBYTE(a2[4].left) = v9;
}
