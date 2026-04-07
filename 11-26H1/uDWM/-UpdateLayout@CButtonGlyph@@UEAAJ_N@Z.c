/*
 * XREFs of ?UpdateLayout@CButtonGlyph@@UEAAJ_N@Z @ 0x18006ECD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAlignment@CButtonGlyph@@AEAAJXZ @ 0x18000A374 (-UpdateAlignment@CButtonGlyph@@AEAAJXZ.c)
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x1800162D0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA?AVDirtyFlags@@XZ @ 0x18001647C (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA-AVDirtyFla.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CButtonGlyph::UpdateLayout(CButtonGlyph *this, bool a2)
{
  int updated; // eax
  unsigned int v4; // edi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF

  updated = CContainerVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E6,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)updated,
      v8);
    return v4;
  }
  else if ( (*((_DWORD *)this + 8) & *___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__02_00__YA_AVDirtyFlags__XZ(&v10)) != 0
         && (v6 = CButtonGlyph::UpdateAlignment(this), v7 = v6, v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EA,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v6,
      v8);
    return v7;
  }
  else
  {
    return 0LL;
  }
}
