/*
 * XREFs of ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180022FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021B3C (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z @ 0x18002306C (-_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::OnStoryboardBegin(CAnimatedTransitionVisual *this, unsigned int a2)
{
  int v4; // edi

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x8Fu, 0LL);
  }
  else
  {
    if ( !*((_BYTE *)this + 920) && *((float *)this + 223) == 0.0 )
    {
      *((_QWORD *)this + 88) = 0LL;
      *((_DWORD *)this + 178) = 0;
      *((_DWORD *)this + 174) = *((_DWORD *)this + 220);
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x2000);
    }
    CAnimatedTransitionVisual::_LogVisualBeginAndEndValues(this, a2);
    *((_BYTE *)this + 937) = 1;
  }
  return (unsigned int)v4;
}
