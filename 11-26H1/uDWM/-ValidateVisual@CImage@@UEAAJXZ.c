/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x18000A180
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBitmap@CImage@@AEAAJXZ @ 0x180009530 (-UpdateBitmap@CImage@@AEAAJXZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?ValidateVisual@CRectangleVisual@@UEAAJXZ @ 0x18000A2F0 (-ValidateVisual@CRectangleVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CImage::ValidateVisual(CBitmapSource **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int updated; // eax
  unsigned int v6; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v9) & (_DWORD)this[4]) != 0 )
  {
    updated = CImage::UpdateBitmap(this);
    v6 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
        (const char *)(unsigned int)updated,
        v7);
      return v6;
    }
    *((_DWORD *)this + 8) &= ~*___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v9);
  }
  v2 = CRectangleVisual::ValidateVisual((CRectangleVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
    (const char *)(unsigned int)v2,
    v7);
  return v3;
}
