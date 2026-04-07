/*
 * XREFs of ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B65A0
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B6610 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18008CF94 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18008CFB0 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z @ 0x18009BB20 (-SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateSourceRect(CSecondaryWindowRepresentation **this)
{
  CSecondaryWindowRepresentation *v1; // rcx
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ebx
  struct tagRECT v6; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)&v6.left = 0LL;
  v6.right = CSecondaryWindowRepresentation::GetIconicWidth(this[27]);
  v6.bottom = CSecondaryWindowRepresentation::GetIconicHeight(v1);
  v3 = CVisualBrush::SetViewbox((CVisualBrush *)(v2 + 232), &v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6B,
    (int)"clientcore\\windows\\dwm\\udwm\\iconicanimatedvisual.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
