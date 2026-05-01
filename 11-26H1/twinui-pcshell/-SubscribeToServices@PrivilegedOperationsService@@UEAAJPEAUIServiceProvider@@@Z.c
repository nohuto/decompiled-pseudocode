/*
 * XREFs of ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801786A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x180178D28 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VC.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PrivilegedOperationsService::SubscribeToServices(
        PrivilegedOperationsService *this,
        struct IServiceProvider *a2)
{
  char *i; // rdi
  unsigned __int8 (*v5)(void); // rax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  unsigned __int64 *v12; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v13; // [rsp+28h] [rbp-D8h]
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[90]; // [rsp+40h] [rbp-C0h] BYREF
  char v17; // [rsp+310h] [rbp+210h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+228h]

  v16[0] = &GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa;
  v16[1] = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v16[2] = 0LL;
  v16[3] = &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1;
  v16[4] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v16[5] = 0LL;
  v16[6] = &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1;
  v16[7] = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v16[8] = 0LL;
  v16[9] = &SID_FullScreenManager;
  v16[10] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v16[11] = 0LL;
  v16[12] = &SID_ViewEventDispatcher;
  v16[13] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v16[14] = 0LL;
  v16[15] = &SID_ViewEventDispatcher;
  v16[16] = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v16[17] = 0LL;
  v16[18] = &SID_ViewEventDispatcher;
  v16[19] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v16[20] = 0LL;
  v16[21] = &SID_ViewEventDispatcher;
  v16[22] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[23] = 0LL;
  v16[24] = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v16[25] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v16[26] = 0LL;
  v16[27] = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v16[28] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[29] = 0LL;
  v16[30] = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v16[31] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v16[32] = 0LL;
  v16[33] = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v16[34] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[35] = 0LL;
  v16[36] = &IID_ILockScreenViewManager;
  v16[37] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[38] = 0LL;
  v16[39] = &IID_IAboveLockViewManager;
  v16[40] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[41] = 0LL;
  v16[42] = &CLSID_HolographicForegroundAssistant;
  v16[43] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[44] = 0LL;
  v16[45] = &GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f;
  v16[46] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[47] = 0LL;
  v16[48] = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v16[49] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v16[50] = 0LL;
  v16[51] = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v16[52] = &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90;
  v16[53] = 0LL;
  v16[54] = &CLSID_VirtualMonitorSlateHostFactory;
  v16[55] = &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90;
  v16[56] = IsHolographicWin32SlatesFeatureEnabled;
  v16[57] = &CLSID_HolographicSlatePositionGuardian;
  v16[58] = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v16[59] = IsHolographicWin32SlatesFeatureEnabled;
  v16[60] = &GUID_7ca26eb3_f3a6_4d4e_9885_c7d2b7b34ac8;
  v16[61] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v16[62] = 0LL;
  v16[63] = &SID_AccessibilityExperienceManager;
  v16[64] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[65] = 0LL;
  v16[66] = &GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55;
  v16[67] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[68] = 0LL;
  v16[69] = &GUID_3da63696_768a_4297_9ca1_ba5ebb8c2651;
  v16[70] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v16[71] = 0LL;
  v16[72] = &GUID_1dec43b5_da90_42ad_8c2a_904640ed2091;
  v16[73] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[74] = 0LL;
  v16[75] = &SID_ImmersiveLauncher;
  v16[76] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v16[77] = wil::ExpiredFeatureBase<wil::details::FeatureTraitsBase,enum wil::details::EmptyVariant,0>::IsEnabled;
  v16[78] = &GUID_bdd61328_14f8_4dff_8b7b_92be622ae360;
  v16[79] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v16[80] = 0LL;
  v16[81] = &GUID_749f2714_937d_445e_9d22_666f49e7ff32;
  v16[82] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[83] = wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::IsEnabled;
  v16[84] = &GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986;
  v16[85] = &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90;
  v16[86] = 0LL;
  v16[87] = &GUID_e3900af7_62d2_42e3_a4c8_70a72baad63f;
  v16[88] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v16[89] = wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::IsEnabled;
  for ( i = (char *)v16; ; i += 24 )
  {
    if ( i == &v17 )
      return 0LL;
    v5 = (unsigned __int8 (*)(void))*((_QWORD *)i + 2);
    if ( !v5 || v5() )
      break;
LABEL_7:
    ;
  }
  v15 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  if ( ((int (__fastcall *)(struct IServiceProvider *, _QWORD, GUID *, __int64 *))QueryService)(
         a2,
         *(_QWORD *)i,
         &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db,
         &v15) < 0 )
    goto LABEL_5;
  v9 = PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
         (char *)this + 120,
         v15,
         *((_QWORD *)i + 1));
  v14 = v9;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v8, &v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v9 = v14;
  }
  if ( v9 >= 0 )
    goto LABEL_5;
  if ( v9 != -2147024882 && v9 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v8,
      &v14,
      L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      0x34Fu,
      v12,
      v13);
    v9 = v14;
  }
  if ( v9 >= 0 )
  {
LABEL_5:
    v7 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34F,
    (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v9);
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v9;
}
