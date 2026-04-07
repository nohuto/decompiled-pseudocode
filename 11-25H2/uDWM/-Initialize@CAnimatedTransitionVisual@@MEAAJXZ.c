/*
 * XREFs of ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180022F80
 * Callers:
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180022CD4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180010EF0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Initialize(struct CContainerVisualProxy **this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CContainerVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x84u, 0LL);
  return v2;
}
