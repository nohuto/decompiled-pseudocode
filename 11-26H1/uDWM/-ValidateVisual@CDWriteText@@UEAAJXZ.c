/*
 * XREFs of ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x180070B30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateText@CDWriteText@@AEAAJXZ @ 0x18000723C (-UpdateText@CDWriteText@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

__int64 __fastcall CDWriteText::ValidateVisual(CDWriteText *this)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // edi
  int updated; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 8) & *___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(&v12);
  v6 = CVisual::ValidateVisual(this, v3, v4, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v6,
      v10);
    return v7;
  }
  else
  {
    if ( v2
      || (*((_DWORD *)this + 8) & *(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v12)) != 0 )
    {
      updated = CDWriteText::UpdateText(this);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEA,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
          (const char *)(unsigned int)updated,
          v10);
      *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v12);
    }
    return 0LL;
  }
}
