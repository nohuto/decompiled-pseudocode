/*
 * XREFs of ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800B8CAC
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18007EA04 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?IsFrameExtendedIntoClientAreaLRB@CWindowData@@QEBA_NXZ @ 0x18000B1B8 (-IsFrameExtendedIntoClientAreaLRB@CWindowData@@QEBA_NXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ??9@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18004C9B4 (--9@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     ?EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x180081CD0 (-EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetBorderColor(CWindowData **this, const struct _D3DCOLORVALUE *a2)
{
  __int64 v2; // r8
  float *v3; // r9
  _OWORD *v4; // rdx
  CNineGridVisual **v5; // r8
  _OWORD *v6; // r9
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !CWindowData::IsFrameExtendedIntoClientAreaLRB(this[23]) && !CDesktopManager::IsHighContrastMode() )
    return 0LL;
  if ( !operator!=(v3, (float *)(v2 + 224)) )
    return 0LL;
  *v4 = *v6;
  v7 = CLegacyNonClientBackground::EnsureBorderSprite(v5);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43,
    (int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
