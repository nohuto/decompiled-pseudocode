/*
 * XREFs of ??$ActivateInstance@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@1@@Z @ 0x1800A17AC
 * Callers:
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A2B0C (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Graphics::Holographic::Internal::IHolographicDisplayMonitorManager>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, GUID *, __int64); // r9
  __int64 v7; // r10
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v3 = RoActivateInstance(a1, &v9);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)&GUID_529814a0_b7b4_43d3_a819_132b7f63d656.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_529814a0_b7b4_43d3_a819_132b7f63d656.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_529814a0_b7b4_43d3_a819_132b7f63d656.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v5 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a2);
      v3 = v6(v7, &GUID_529814a0_b7b4_43d3_a819_132b7f63d656, v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      *a2 = v9;
    }
  }
  return (unsigned int)v3;
}
