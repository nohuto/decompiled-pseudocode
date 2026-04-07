/*
 * XREFs of ??$ActivateInstance@UISessionBrokerInstance@DispBrokerDesktop@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUISessionBrokerInstance@DispBrokerDesktop@@@Z @ 0x180062270
 * Callers:
 *     ?Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z @ 0x180062170 (-Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<DispBrokerDesktop::ISessionBrokerInstance>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v6 = 0LL;
  v3 = RoActivateInstance(a1, &v6);
  if ( v3 >= 0 )
  {
    if ( !memcmp_0(&GUID_4ae487a3_15f1_5a41_8381_fcd20b426364, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL) )
    {
      *a2 = v6;
    }
    else
    {
      v5 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a2);
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v6)(
             v6,
             &GUID_4ae487a3_15f1_5a41_8381_fcd20b426364,
             v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)v3;
}
