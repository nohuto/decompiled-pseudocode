/*
 * XREFs of ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x18005DD70
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18005E18C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18005E6A8 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x180095924 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 */

__int64 __fastcall CAcrylicSheet::ValidateVisual(CAcrylicSheet *this)
{
  _DWORD *v2; // rax
  int v3; // edx
  int updated; // edi
  __int64 v5; // rdx
  _DWORD *v7; // rax
  int v8; // edx
  _DWORD *v9; // rax
  _DWORD *v10; // rdx
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v19; // [rsp+30h] [rbp+8h] BYREF
  char v20; // [rsp+38h] [rbp+10h] BYREF

  v2 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v19);
  if ( (v3 & *v2) != 0 )
  {
    updated = CAcrylicSheet::UpdateTransition(this);
    if ( updated < 0 )
    {
      v5 = 174LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)updated,
        v17);
      return (unsigned int)updated;
    }
    *((_DWORD *)this + 8) &= ~*___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v19);
  }
  v7 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v19);
  if ( (v8 & *v7) != 0 )
  {
    updated = CAcrylicSheet::EnsureBackgroundEffects(this);
    if ( updated < 0 )
    {
      v5 = 180LL;
      goto LABEL_4;
    }
    ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v19);
    v9 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v20);
    *((_DWORD *)this + 8) &= ~(*v10 | *v9);
  }
  v11 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v19);
  if ( ((unsigned int)v12 & *v11) != 0 )
  {
    updated = CAcrylicSheet::EnsureAcrylicAccentColor(this);
    if ( updated < 0 )
    {
      v5 = 186LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v19);
  }
  v15 = CVisual::ValidateVisual(this, v12, v13, v14);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBE,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v15,
    v17);
  return v16;
}
