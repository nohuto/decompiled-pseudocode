/*
 * XREFs of ?UpdateLayout@CImage@@UEAAJ_N@Z @ 0x18006A910
 * Callers:
 *     ?UpdateLayout@CButtonVisual@@UEAAJ_N@Z @ 0x18006A900 (-UpdateLayout@CButtonVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateRectangle@CImage@@AEAAXXZ @ 0x18000A098 (-UpdateRectangle@CImage@@AEAAXXZ.c)
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x1800162D0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA?AVDirtyFlags@@XZ @ 0x18001647C (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA-AVDirtyFla.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CImage::UpdateLayout(CImage *this, bool a2)
{
  int updated; // eax
  unsigned int v4; // edi
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+18h] BYREF

  updated = CContainerVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
      (const char *)(unsigned int)updated,
      v6);
    return v4;
  }
  else
  {
    if ( (*((_DWORD *)this + 8) & *___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__02_00__YA_AVDirtyFlags__XZ(&v8)) != 0 )
    {
      if ( *((_QWORD *)this + 29) )
        CImage::UpdateRectangle(this);
    }
    return 0LL;
  }
}
