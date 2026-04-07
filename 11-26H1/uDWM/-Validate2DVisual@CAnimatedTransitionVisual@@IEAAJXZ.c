/*
 * XREFs of ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089430
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000A220 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@04$00@@YA?AVDirtyFlags@@XZ @ 0x1800164EC (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@04$00@@YA-AVDirtyFlags@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180050EEC (-UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180077748 (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096DCC (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2D@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096EB8 (-UpdateGeometry2D@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009734C (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Validate2DVisual(CAnimatedTransitionVisual *this)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rax
  int v4; // edx
  _DWORD *v5; // rax
  int v6; // edx
  _DWORD *v7; // rax
  int v8; // edx
  int updated; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // rax
  int v17; // edx
  int v19; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v19);
  if ( (v4 & *v3) != 0
    || (v5 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v19),
        (v6 & *v5) != 0)
    || (v7 = ___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__04_00__YA_AVDirtyFlags__XZ(&v19), (v8 & *v7) != 0) )
  {
    if ( *((_BYTE *)this + 922) )
    {
      updated = CAnimatedTransitionVisual::UpdateGeometry2DWithClip(this);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x3ABu, 0LL);
        return v2;
      }
    }
    else if ( *((_BYTE *)this + 923) )
    {
      v12 = CAnimatedTransitionVisual::UpdateBackgroundWithClip(this);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x3AFu, 0LL);
        return v2;
      }
    }
    else if ( *((_BYTE *)this + 911) )
    {
      v13 = CAnimatedTransitionVisual::UpdateGeometry2DForClonedStagedVisual(this);
      v2 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3B3u, 0LL);
        return v2;
      }
    }
    else
    {
      v14 = CAnimatedTransitionVisual::UpdateGeometry2D(this);
      v2 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x3B7u, 0LL);
        return v2;
      }
    }
    v15 = CAnimatedTransitionVisual::UpdateVisualOpacity(this, v10, v11);
    v2 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x3B9u, 0LL);
    }
    else
    {
      *((_DWORD *)this + 10) &= ~*___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v19);
      *((_DWORD *)this + 10) &= ~*___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v19);
      v16 = ___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__04_00__YA_AVDirtyFlags__XZ(&v19);
      *((_DWORD *)this + 10) = v17 & ~*v16;
    }
  }
  return v2;
}
