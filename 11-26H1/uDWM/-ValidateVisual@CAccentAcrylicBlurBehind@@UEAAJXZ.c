/*
 * XREFs of ?ValidateVisual@CAccentAcrylicBlurBehind@@UEAAJXZ @ 0x180078890
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800945D0 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::ValidateVisual(
        CAccentAcrylicBlurBehind *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // eax
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v5 = CVisual::ValidateVisual(this, a2, a3, a4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( (*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v10) & *((_DWORD *)this + 8)) != 0 )
    {
      CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(this);
      *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x457,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v5,
      v8);
    return v6;
  }
}
