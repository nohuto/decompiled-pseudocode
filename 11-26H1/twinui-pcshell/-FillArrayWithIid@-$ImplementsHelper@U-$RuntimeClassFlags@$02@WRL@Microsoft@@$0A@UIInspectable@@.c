/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UILightDismissNotification@@UIWeakReferenceSource@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@89Internal@Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803653F0
 * Callers:
 *     ?GetIids@CActionCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180365910 (-GetIids@CActionCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_df65db57_d504_456e_8bd7_004ce308d8d9;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_dec04b18_357e_41d8_9b71_b991243bea34;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 10)) = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 11)) = GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e;
  result = (unsigned int)(v3 + 12);
  *a2 = result;
  return result;
}
