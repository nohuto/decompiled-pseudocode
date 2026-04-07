/*
 * XREFs of ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x180061DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x180061E74 (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 *     ?SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x18008C080 (-SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z.c)
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
  if ( !*(_QWORD *)(v6 + 568) )
  {
    v7 = CAnimationResource::Create((struct CAnimationResource **)(v6 + 568));
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x726u, 0LL);
    }
    else
    {
      v8 = *(struct CAnimationTriggerProxy **)(a1 + 672);
      if ( v8 )
      {
        v9 = CAnimationResource::SetTrigger(*(CAnimationResource **)(v6 + 568), v8);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x72Au, 0LL);
      }
    }
  }
  *a3 = *(_QWORD *)(v6 + 568);
  return v3;
}
