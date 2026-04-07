/*
 * XREFs of ?UpdateRealizationSize@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B6538
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B6610 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18008CF94 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18008CFB0 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?SetRealizationSize@CVisualBrush@@QEAAJAEBUtagSIZE@@@Z @ 0x18009BAE8 (-SetRealizationSize@CVisualBrush@@QEAAJAEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateRealizationSize(CSecondaryWindowRepresentation **this)
{
  CSecondaryWindowRepresentation *v1; // rcx
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagSIZE v7; // [rsp+30h] [rbp+8h] BYREF

  v7.cx = CSecondaryWindowRepresentation::GetIconicWidth(this[27]);
  v7.cy = CSecondaryWindowRepresentation::GetIconicHeight(v1);
  v3 = CVisualBrush::SetRealizationSize((CVisualBrush *)(v2 + 232), &v7);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x78,
    (int)"clientcore\\windows\\dwm\\udwm\\iconicanimatedvisual.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
