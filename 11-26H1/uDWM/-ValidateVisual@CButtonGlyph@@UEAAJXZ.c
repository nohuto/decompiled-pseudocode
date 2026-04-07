/*
 * XREFs of ?ValidateVisual@CButtonGlyph@@UEAAJXZ @ 0x18000A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateImage@CButtonGlyph@@AEAAJXZ @ 0x180009120 (-UpdateImage@CButtonGlyph@@AEAAJXZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?ValidateVisual@CRectangleVisual@@UEAAJXZ @ 0x18000A2F0 (-ValidateVisual@CRectangleVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CButtonGlyph::ValidateVisual(CButtonGlyph *this, __int64 a2)
{
  int updated; // eax
  __int64 v4; // rdx
  unsigned int v5; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(
                     &v9,
                     a2) & *((_DWORD *)this + 8)) == 0 )
    return CRectangleVisual::ValidateVisual(this);
  updated = CButtonGlyph::UpdateImage((CBitmapSource **)this);
  v5 = updated;
  if ( updated >= 0 )
  {
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(
                                           &v9,
                                           v4);
    return CRectangleVisual::ValidateVisual(this);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DD,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
    (const char *)(unsigned int)updated,
    v7);
  return v5;
}
