/*
 * XREFs of ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004C930
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18007EA04 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??9@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18004C9B4 (--9@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC (-UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetCaptionColor(
        CLegacyNonClientBackground *this,
        const struct _D3DCOLORVALUE *a2)
{
  _OWORD *v2; // rdx
  _OWORD *v3; // r8
  __int64 v4; // r9
  CSolidRectangleVisual *v6; // rcx
  int updated; // eax
  unsigned int v8; // ebx
  struct _D3DCOLORVALUE v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(unsigned __int8)operator!=(a2, (char *)this + 208, a2, this) )
    return 0LL;
  v6 = *(CSolidRectangleVisual **)(v4 + 192);
  *v2 = *v3;
  if ( !v6 )
    return 0LL;
  *(struct _D3DCOLORVALUE *)&v9.r = (struct _D3DCOLORVALUE)*v3;
  v9.a = 1.0;
  updated = CSolidRectangleVisual::UpdateColor(v6, &v9);
  v8 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)updated,
    SLODWORD(v9.r));
  return v8;
}
