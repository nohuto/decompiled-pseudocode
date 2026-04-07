/*
 * XREFs of ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z @ 0x180053740
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyAnimationCompleteAndCleanup@CAnimationEngine@@AEAAJI@Z @ 0x180053498 (-NotifyAnimationCompleteAndCleanup@CAnimationEngine@@AEAAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationEngine::OnStoryboardStatusChanged(
        CAnimationEngine *this,
        struct IUIAnimationStoryboard2 *a2,
        enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0001 a3,
        enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0001 a4)
{
  unsigned int v4; // ebx
  struct IUIAnimationStoryboard2Vtbl *lpVtbl; // rax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( a3 == UI_ANIMATION_STORYBOARD_FINISHED && ((a4 - 1) & 0xFFFFFFFD) == 0 )
  {
    lpVtbl = a2->lpVtbl;
    v10 = 0;
    v8 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, unsigned int *))lpVtbl->GetTag)(
           a2,
           0LL,
           &v10);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x5D5u, 0LL);
    }
    else
    {
      v9 = CAnimationEngine::NotifyAnimationCompleteAndCleanup(this, v10);
      v4 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x5D9u, 0LL);
    }
  }
  return v4;
}
