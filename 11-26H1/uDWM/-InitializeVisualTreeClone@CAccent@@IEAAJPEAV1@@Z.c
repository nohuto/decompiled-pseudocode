/*
 * XREFs of ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18009444C
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180093AE0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180063098 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180089798 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800946E0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180094B30 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 */

__int64 __fastcall CAccent::InitializeVisualTreeClone(CAccent *this, struct CAccent *a2)
{
  int updated; // eax
  unsigned int v5; // esi
  int v7; // edi
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  struct _MARGINS v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  updated = CAccent::UpdateAccentPolicy(
              a2,
              (const struct tagRECT *)this + 30,
              (__m128i *)((char *)this + 184),
              *((struct CBaseGeometryProxy **)this + 35));
  v5 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B0,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)updated);
    return v5;
  }
  if ( (*((_BYTE *)this + 188) & 0xE0) == 0 )
    return 0LL;
  v11 = 0LL;
  CVisual::SetInsetFromParent(a2, &v11);
  *((_DWORD *)a2 + 47) = *((_DWORD *)this + 47);
  v7 = CAccent::_EnsureBorderShadowAtlas(a2);
  if ( v7 < 0 )
  {
    v8 = 439LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = CAccent::_UpdateBorderShadowParts(a2);
  if ( v7 < 0 )
  {
    v8 = 440LL;
    goto LABEL_6;
  }
  v9 = CAccent::_UpdateBorderShadowForAccent(a2);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B9,
    (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
