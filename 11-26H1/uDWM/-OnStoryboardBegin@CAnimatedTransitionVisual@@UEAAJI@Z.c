/*
 * XREFs of ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x1800694E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z @ 0x180069594 (-_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180082594 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::OnStoryboardBegin(CAnimatedTransitionVisual *this, unsigned int a2)
{
  int v4; // edi
  int *v5; // rax
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x7Bu, 0LL);
  }
  else
  {
    if ( !*((_BYTE *)this + 904) && *((float *)this + 219) == 0.0 )
    {
      *((_QWORD *)this + 86) = 0LL;
      *((_DWORD *)this + 174) = 0;
      *((_DWORD *)this + 170) = *((_DWORD *)this + 216);
      v5 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v7);
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), *v5);
    }
    CAnimatedTransitionVisual::_LogVisualBeginAndEndValues(this, a2);
    *((_BYTE *)this + 921) = 1;
  }
  return (unsigned int)v4;
}
