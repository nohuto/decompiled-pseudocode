/*
 * XREFs of ?ValidateVisual@CWindowBorder@@UEAAJXZ @ 0x18006F900
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z @ 0x18000BAA4 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

__int64 __fastcall CWindowBorder::ValidateVisual(struct CBorderSprite **this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v7; // rdx
  struct CBorderSprite *v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+38h] [rbp+10h] BYREF

  v5 = CVisual::ValidateVisual((CVisual *)this, a2, a3, a4);
  if ( v5 < 0 )
  {
    v7 = 35LL;
  }
  else
  {
    if ( (*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v11) & (_DWORD)this[4]) == 0 )
      return 0LL;
    v8 = this[26];
    if ( !v8 || (v5 = CWindowBorder::CreateAndAttachBorderBrush((CWindowBorder *)this, v8), v5 >= 0) )
    {
      *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v11);
      return 0LL;
    }
    v7 = 41LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v5,
    v9);
  return (unsigned int)v5;
}
