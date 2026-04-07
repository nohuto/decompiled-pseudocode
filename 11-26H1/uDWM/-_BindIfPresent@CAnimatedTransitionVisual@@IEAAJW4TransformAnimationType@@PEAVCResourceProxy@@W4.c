/*
 * XREFs of ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x18004F94C
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18004F520 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x1800505FC (-AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_BindIfPresent(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 552);
  if ( v5 )
  {
    v6 = CAnimationResource::AddBinding(v5, a3, a4);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6C5u, 0LL);
  }
  return v4;
}
