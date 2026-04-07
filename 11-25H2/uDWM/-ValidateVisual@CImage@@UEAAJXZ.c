/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x180021510
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000A9D0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x180021594 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CImage::ValidateVisual(CImage *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int updated; // eax
  unsigned int v6; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 8) & 0x1000) != 0 )
  {
    updated = CImage::UpdateBitmap(this);
    v6 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
        (const char *)(unsigned int)updated,
        v7);
      return v6;
    }
    *((_DWORD *)this + 8) &= ~0x1000u;
  }
  v2 = CRenderDataVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
    (const char *)(unsigned int)v2,
    v7);
  return v3;
}
