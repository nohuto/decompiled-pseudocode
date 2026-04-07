/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800634B0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x18000D250 (-_UpdateClipRegion@CAccent@@IEAAXXZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18006384C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180063B98 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18008BAF0 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ @ 0x18008D5D8 (-_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x180094F78 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::ValidateVisual(CAccent *this)
{
  char *v2; // rdi
  char *v3; // rbp
  _DWORD *v4; // rax
  _DWORD *v5; // rdx
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int updated; // ebp
  unsigned int v12; // eax
  int v13; // [rsp+58h] [rbp+10h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v2 = (char *)this + 32;
  if ( CAccent::_IsAcrylicBlurEnabledAndAllowed(this) )
  {
    if ( (*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v13) & *(_DWORD *)v2) == 0 )
      goto LABEL_7;
    updated = CAccent::_UpdateAcrylicBlurBehind(this);
    if ( updated >= 0 )
      goto LABEL_7;
    v12 = 651;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v13) & *(_DWORD *)v2) != 0 )
  {
    updated = CAccent::_UpdateResources(this);
    if ( updated >= 0 )
    {
      v3 = (char *)this + 32;
      goto LABEL_4;
    }
    v12 = 658;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v12, 0LL);
    CAccent::_CleanupNonStaticsResources(this);
    return (unsigned int)updated;
  }
  v3 = v2;
LABEL_4:
  if ( (*___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v13) & *(_DWORD *)v2) != 0 )
    CAccent::_UpdateTransitionGradient(this);
  v2 = v3;
LABEL_7:
  ___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v13);
  v4 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v14);
  *(_DWORD *)v2 &= ~(*v4 | *v5);
  v6 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v13);
  if ( ((unsigned int)v7 & *v6) != 0 )
  {
    CAccent::_UpdateClipRegion((CVisualProxy **)this);
    *(_DWORD *)v2 &= ~*___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v13);
  }
  updated = CVisual::ValidateVisual(this, v7, v8, v9);
  if ( updated < 0 )
  {
    v12 = 677;
    goto LABEL_16;
  }
  return (unsigned int)updated;
}
