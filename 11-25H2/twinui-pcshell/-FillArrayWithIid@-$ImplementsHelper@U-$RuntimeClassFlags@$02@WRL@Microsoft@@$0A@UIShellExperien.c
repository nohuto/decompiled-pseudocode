/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@VICortanaDesktopNotifications@Cortana@TwinUI@@VICortanaExperienceView@Cortana@TwinUI@@UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803C8C28
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VICortanaDesktopNotifications@Cortana@TwinUI@@VICortanaExperienceView@Cortana@TwinUI@@UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803C94B0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShe_ea_1803C94B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,IWeakReferenceSource,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax

  v3 = *a2 + 1;
  *(GUID *)(a3 + 16LL * (unsigned int)*a2) = GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7;
  v4 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v4) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  v5 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v5) = GUID_99f6b4c8_3fa6_4b31_b246_6527a04e1086;
  v6 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v6) = GUID_c2f00e7e_94c0_4da2_8530_103a4f231f12;
  v7 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v7) = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
  v8 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v8) = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  v9 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v9) = GUID_a24745fc_7a2e_4b7c_b092_8cb224694bbf;
  v10 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v10) = GUID_2754a354_56cd_4a4a_a0ed_ec256a88d6b7;
  v11 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v11) = GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e;
  v12 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v12) = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
  *(GUID *)(a3 + 16LL * v3) = GUID_e6e2291b_f74e_407c_b9d6_6dc4c69cacf9;
  result = v3 + 1;
  *a2 = result;
  return result;
}
