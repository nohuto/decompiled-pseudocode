/*
 * XREFs of ?AddRef@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@QEAAIXZ @ 0x18002EA98
 * Callers:
 *     ?QueryInterface@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@QEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E4D4 (-QueryInterface@-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt.c)
 *     ?query_interface@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E7A8 (-query_interface@-$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345.c)
 *     ?query_interface_common@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E978 (-query_interface_common@-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Ud.c)
 *     ?AddRef@?$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEAAKXZ @ 0x18002EA40 (-AddRef@-$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITra.c)
 *     ?AddRef@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAKXZ @ 0x1800D8B80 (-AddRef@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionS.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x18002F670 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18002F680 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::AddRef(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r10
  volatile signed __int64 *v5; // rax
  unsigned int v6; // r9d
  signed __int64 v7; // rdx
  signed __int64 v8; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
  v2 = v1;
  v3 = v1;
  while ( 1 )
  {
    v10 = v1;
    if ( v1 < 0 )
      break;
    v11 = v2 + 1;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v10);
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v11);
    v5 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v4);
    v1 = _InterlockedCompareExchange64(v5, v7, v8);
    v3 = v1;
    v2 = v1;
    if ( v8 == v1 )
      return v6;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v3 + 24));
}
