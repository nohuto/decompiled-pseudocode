/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ChainInterfaces@U?$CloakedIid@UIShellPositionerViewHandoffWithShowCommand@@@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@UITopLevelAppViewSource@ComposableShell@Internal@Windows@@UITopLevelAppViewManager@789@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180403424
 * Callers:
 *     ?FillArrayWithIid@?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$ChainInterfaces@U?$CloakedIid@UIShellPositionerViewHandoffWithShowCommand@@@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@UITopLevelAppViewSource@ComposableShell@Internal@Windows@@UITopLevelAppViewManager@789@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180403378 (-FillArrayWithIid@-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$ChainInterfaces@U-$Clo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<Microsoft::WRL::CloakedIid<IShellPositionerViewHandoffWithShowCommand>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>,Windows::Internal::ComposableShell::ITopLevelAppViewSource,Windows::Internal::ComposableShell::ITopLevelAppViewManager>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // r9d
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = *a2;
  v4 = *a2 + 1;
  *(GUID *)(a3 + 16LL * *a2) = GUID_3d8e39c2_c7b7_4b58_90b1_6bac0b0d4fe6;
  result = (unsigned int)(v3 + 2);
  *a2 = result;
  *(GUID *)(a3 + 16 * v4) = GUID_8f5608d2_f9be_457f_bcb5_789270f3b7e9;
  return result;
}
