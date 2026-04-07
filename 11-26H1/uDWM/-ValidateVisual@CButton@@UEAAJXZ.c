/*
 * XREFs of ?ValidateVisual@CButton@@UEAAJXZ @ 0x180008940
 * Callers:
 *     <none>
 * Callees:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180008A14 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x1800682F0 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

__int64 __fastcall CButton::ValidateVisual(CButton *this)
{
  _DWORD *v2; // rax
  int v3; // edx
  _DWORD *v4; // rax
  int v5; // edx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // ebx
  _DWORD *v11; // rax
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(
                   &v15,
                   *((unsigned int *)this + 8));
  if ( (v3 & *v2) != 0 )
  {
    v11 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v15);
    if ( ((unsigned int)v12 & *v11) == 0 )
      CButton::UpdateCrossfade(this);
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(
                                           &v15,
                                           v12);
  }
  v4 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v15);
  if ( (v5 & *v4) != 0 )
  {
    v6 = CButton::RedrawVisual(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
        (const char *)(unsigned int)v6,
        v13);
      return v7;
    }
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v15);
  }
  v8 = CVisual::ValidateVisual(this);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAC,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
    (const char *)(unsigned int)v8,
    v13);
  return v9;
}
