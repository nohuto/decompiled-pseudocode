/*
 * XREFs of ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021C68
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180021A50 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017040 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180022258 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800869A0 (-UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180088008 (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A45BC (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Validate2DVisual(CAnimatedTransitionVisual *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v6; // eax
  int updated; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax

  v2 = 0;
  if ( (*((_DWORD *)this + 10) & 0x1000) != 0
    || (*((_DWORD *)this + 10) & 0x2000) != 0
    || (*((_BYTE *)this + 40) & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 938) )
    {
      v6 = CRenderDataVisual::ClearInstructions((CAnimatedTransitionVisual *)((char *)this + 8));
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3FAu, 0LL);
        return v2;
      }
      updated = CAnimatedTransitionVisual::UpdateGeometry2DWithClip(this);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x3FBu, 0LL);
        return v2;
      }
    }
    else if ( *((_BYTE *)this + 939) )
    {
      v8 = CRenderDataVisual::ClearInstructions((CAnimatedTransitionVisual *)((char *)this + 8));
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3FFu, 0LL);
        return v2;
      }
      v11 = CAnimatedTransitionVisual::UpdateBackgroundWithClip(this);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x400u, 0LL);
        return v2;
      }
      v12 = CAnimatedTransitionVisual::UpdateVisualOpacity(this);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x401u, 0LL);
        return v2;
      }
    }
    else if ( *((_BYTE *)this + 927) )
    {
      v9 = CAnimatedTransitionVisual::UpdateGeometry2DForClonedStagedVisual(this);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x405u, 0LL);
        return v2;
      }
      v10 = CAnimatedTransitionVisual::UpdateVisualOpacity(this);
      v2 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x406u, 0LL);
        return v2;
      }
    }
    else
    {
      v3 = CRenderDataVisual::ClearInstructions((CAnimatedTransitionVisual *)((char *)this + 8));
      v2 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x40Au, 0LL);
        return v2;
      }
      v4 = CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity(this);
      v2 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x40Bu, 0LL);
        return v2;
      }
    }
    *((_DWORD *)this + 10) &= 0xFFFFCFDF;
  }
  return v2;
}
