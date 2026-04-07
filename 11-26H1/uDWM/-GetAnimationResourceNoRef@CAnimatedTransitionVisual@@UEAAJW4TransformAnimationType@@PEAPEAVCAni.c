/*
 * XREFs of ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x180050420
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x1800504DC (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 *     ?SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x18007ACA4 (-SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::GetAnimationResourceNoRef(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  int v7; // eax
  struct CAnimationTriggerProxy *v8; // rdx
  int v9; // eax

  v3 = 0;
  v6 = a1 + 8LL * a2;
  if ( !*(_QWORD *)(v6 + 552) )
  {
    v7 = CAnimationResource::Create((struct CAnimationResource **)(v6 + 552));
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x64Cu, 0LL);
    }
    else
    {
      v8 = *(struct CAnimationTriggerProxy **)(a1 + 656);
      if ( v8 )
      {
        v9 = CAnimationResource::SetTrigger(*(CAnimationResource **)(v6 + 552), v8);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x650u, 0LL);
      }
    }
  }
  *a3 = *(_QWORD *)(v6 + 552);
  return v3;
}
