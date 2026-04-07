/*
 * XREFs of ?ValidateVisual@CRectangleVisual@@UEAAJXZ @ 0x18000A2F0
 * Callers:
 *     ?ValidateVisual@CButtonGlyph@@UEAAJXZ @ 0x18000A0F0 (-ValidateVisual@CButtonGlyph@@UEAAJXZ.c)
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x18000A180 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000A220 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18006D320 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800ADF80 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B6610 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x1800D0560 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateCompNode@CRectangleVisual@@AEAAJXZ @ 0x18000A608 (-UpdateCompNode@CRectangleVisual@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

__int64 __fastcall CRectangleVisual::ValidateVisual(CRectangleVisual *this)
{
  int updated; // edi
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+38h] [rbp+10h] BYREF

  updated = CVisual::ValidateVisual(this);
  if ( updated < 0 )
  {
    v4 = 9LL;
  }
  else
  {
    if ( (*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v7) & *((_DWORD *)this + 8)) == 0 )
      return 0LL;
    updated = CRectangleVisual::UpdateCompNode(this);
    if ( updated >= 0 )
    {
      *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v7);
      return 0LL;
    }
    v4 = 13LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\rectanglevisual.cpp",
    (const char *)(unsigned int)updated,
    v5);
  return (unsigned int)updated;
}
