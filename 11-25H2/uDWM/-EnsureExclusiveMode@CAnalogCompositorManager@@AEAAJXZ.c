/*
 * XREFs of ?EnsureExclusiveMode@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A2314
 * Callers:
 *     ?SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z @ 0x1800A32E0 (-SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnalogCompositorManager::EnsureExclusiveMode(CAnalogCompositorManager *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64, GUID *, __int64); // r9
  __int64 v5; // r10
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v10 = 0LL;
  if ( !*(_QWORD *)this )
  {
    v3 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v10);
    v6 = v4(v5, &GUID_ad9a1415_d7c0_48fe_810f_2cf1efa8f436, v3);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x71u, 0LL);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, CAnalogCompositorManager *))(*(_QWORD *)v10 + 32LL))(v10, this);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x73u, 0LL);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL)
                                               + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 6)
                                                                  + 32LL));
        v1 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x75u, 0LL);
      }
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v1;
}
