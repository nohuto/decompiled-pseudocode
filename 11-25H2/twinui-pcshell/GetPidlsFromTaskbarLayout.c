/*
 * XREFs of GetPidlsFromTaskbarLayout @ 0x180669AEC
 * Callers:
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180666170 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180666430 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180666840 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x180666B50 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18002D87C (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x180090598 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D7858 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801E046C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180218580 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028F8E4 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180293F84 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1802A87D0 (--0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PGTBPlaceholderPinning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803216C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PGTBPlaceholderPinning@@@details@wil@@QEA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAA_NXZ @ 0x180321990 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wi.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x18033B100 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1803539B8 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1805C2B4C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x180664CB0 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4PinningEventType@1@AEAI$$QEAPEBG@Z @ 0x180664D20 (--$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTel.c)
 *     ??$set_flag_value@J@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z @ 0x18066526C (--$set_flag_value@J@-$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1806652BC (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@P.c)
 *     ??$try_create_instance@UIApplicationResolver@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180665334 (--$try_create_instance@UIApplicationResolver@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??$try_create_instance@UIPinnedList@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1806653A0 (--$try_create_instance@UIPinnedList@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18066555C (--0-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@.c)
 *     ??0?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1806655C4 (--0-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1806657E0 (--0Iterator@-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Mi.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180665924 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_dat.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806659A0 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806659D8 (--1-$test_watcher@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_.c)
 *     ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x180665C60 (--6-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@G@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@XZ @ 0x180665E64 (--C-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 *     ??_D?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180665F24 (--_D-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z @ 0x180667738 (-CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180669698 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayo.c)
 *     GetEnterprisePinDataFromRegistry @ 0x180669738 (GetEnterprisePinDataFromRegistry.c)
 *     ?IsBrowserReplacementFeaturePresent@@YA_NXZ @ 0x18066D21C (-IsBrowserReplacementFeaturePresent@@YA_NXZ.c)
 *     ?LegacyBrowserUpgrade@TaskbarFlexibleLayoutTelemetry@@SAXXZ @ 0x18066DABC (-LegacyBrowserUpgrade@TaskbarFlexibleLayoutTelemetry@@SAXXZ.c)
 *     PersistEnterprisePinDataToRegistry @ 0x18066E2A8 (PersistEnterprisePinDataToRegistry.c)
 *     ?Release@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x18066EE34 (-Release@-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18066FFA0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     ShouldAddEnterprisePinToOutput @ 0x180670224 (ShouldAddEnterprisePinToOutput.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEFAU_ITEMIDLIST@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEFAU_ITEMIDLIST@@@@V?$CSimpleArrayStandardCompareHelper@PEFAU_ITEMIDLIST@@@@V?$CSimpleArrayStandardMergeHelper@PEFAU_ITEMIDLIST@@@@@@QEAAJ_K0@Z @ 0x180672734 (-_EnsureCapacity@-$CTSimpleArray@PEFAU_ITEMIDLIST@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEFAU_ITEMIDL.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags@@@details@wil@@QEAA_NXZ @ 0x1806736EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFl.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x1806737C8 (-complete_without_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x180673F20 (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall GetPidlsFromTaskbarLayout(unsigned int a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r14
  _QWORD *v5; // r15
  HRESULT v7; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  int v10; // eax
  unsigned int v11; // ebx
  const char *v12; // r9
  int v13; // eax
  LPVOID v14; // rbx
  __int64 (__fastcall *v15)(LPVOID, _QWORD, __int64 *); // rdi
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdi
  __int64 v19; // rsi
  volatile signed __int32 *v20; // rdx
  void *v21; // rcx
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *EnterprisePinDataFromRegistry; // rax
  const char *v25; // rdx
  const char *v26; // rax
  __int64 v27; // r9
  void **v28; // rax
  __int64 *v29; // rbx
  __int64 v30; // rax
  int v31; // eax
  HSTRING v32; // r14
  WCHAR *v33; // r14
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  wil::details::in1diag3 *v37; // rcx
  __int64 v38; // rdx
  HRESULT v39; // eax
  _QWORD *v40; // rax
  const unsigned __int16 *v41; // rax
  int (__fastcall *v42)(__int64 *, IID *); // r15
  __int64 v43; // r8
  __int64 v44; // r9
  const WCHAR *StringRawBuffer; // r14
  _QWORD *v46; // rax
  const unsigned __int16 *v47; // rax
  int PlaceholderPidl; // eax
  wil::details::in1diag3 *v49; // rcx
  __int64 v50; // rdx
  HRESULT v51; // eax
  struct IShellItem **v52; // r8
  struct IShellItemVtbl *lpVtbl; // rcx
  int (__fastcall *v54)(__int64 *, HSTRING *); // r15
  HSTRING v55; // r14
  const WCHAR *v56; // r14
  _QWORD *v57; // rax
  const unsigned __int16 *v58; // rax
  const char *v59; // r9
  const char *v60; // rdx
  const char *v61; // rax
  __int64 v62; // r9
  HRESULT v63; // eax
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // r14d
  const char *v67; // rdx
  const char *v68; // rax
  __int64 v69; // r10
  __int64 *v70; // rcx
  int v71; // r14d
  __int64 lpVtbl_low; // r8
  int v73; // eax
  const char *v74; // rdx
  const char *v75; // rax
  __int64 v76; // r10
  int v77; // eax
  int v78; // r14d
  const char *v79; // rdx
  const char *v80; // rax
  __int64 v81; // r10
  __int64 v82; // r8
  char v83; // r14
  __int64 v84; // r8
  const char *v85; // rdx
  const char *v86; // rax
  __int64 v87; // r9
  const char *v88; // rdx
  const char *v89; // rax
  __int64 v90; // r9
  const char *v91; // r9
  __int64 v92; // rdx
  int v93; // eax
  __int64 v94; // rcx
  LPITEMIDLIST *v95; // rdx
  const char *v96; // r9
  __int64 v97; // rdx
  int v98; // eax
  __int64 v99; // rcx
  LPITEMIDLIST *v100; // rdx
  __int64 v102; // [rsp+48h] [rbp-4B0h] BYREF
  __int64 v103; // [rsp+50h] [rbp-4A8h] BYREF
  __int64 v104; // [rsp+58h] [rbp-4A0h] BYREF
  void *v105; // [rsp+60h] [rbp-498h] BYREF
  _BYTE v106[8]; // [rsp+68h] [rbp-490h] BYREF
  _BYTE v107[8]; // [rsp+70h] [rbp-488h] BYREF
  _DWORD *v108; // [rsp+78h] [rbp-480h]
  __int64 v109; // [rsp+80h] [rbp-478h] BYREF
  __int64 v110; // [rsp+88h] [rbp-470h] BYREF
  void *v111; // [rsp+90h] [rbp-468h] BYREF
  void *v112; // [rsp+98h] [rbp-460h] BYREF
  _DWORD *v113; // [rsp+A0h] [rbp-458h]
  void *v114[7]; // [rsp+A8h] [rbp-450h] BYREF
  LPITEMIDLIST ppidl; // [rsp+E0h] [rbp-418h] BYREF
  struct IShellItem v116; // [rsp+E8h] [rbp-410h] BYREF
  LPVOID pv; // [rsp+F0h] [rbp-408h] BYREF
  IID punk; // [rsp+F8h] [rbp-400h] BYREF
  int v119; // [rsp+108h] [rbp-3F0h] BYREF
  int v120; // [rsp+10Ch] [rbp-3ECh]
  LPVOID v121; // [rsp+110h] [rbp-3E8h] BYREF
  IID string; // [rsp+118h] [rbp-3E0h] BYREF
  HSTRING v123; // [rsp+128h] [rbp-3D0h] BYREF
  LPVOID ppv; // [rsp+130h] [rbp-3C8h] BYREF
  void **v125; // [rsp+138h] [rbp-3C0h] BYREF
  __int64 v126; // [rsp+140h] [rbp-3B8h] BYREF
  int v127; // [rsp+148h] [rbp-3B0h]
  unsigned int v128; // [rsp+14Ch] [rbp-3ACh] BYREF
  __int64 v129; // [rsp+150h] [rbp-3A8h] BYREF
  _BYTE v130[8]; // [rsp+158h] [rbp-3A0h] BYREF
  __int128 v131; // [rsp+160h] [rbp-398h] BYREF
  __int64 v132; // [rsp+170h] [rbp-388h]
  __int64 v133; // [rsp+178h] [rbp-380h] BYREF
  int v134; // [rsp+180h] [rbp-378h]
  HSTRING v135; // [rsp+188h] [rbp-370h] BYREF
  __int128 v136; // [rsp+190h] [rbp-368h] BYREF
  __int64 v137; // [rsp+1A0h] [rbp-358h]
  _BYTE v138[8]; // [rsp+1B0h] [rbp-348h] BYREF
  _BYTE v139[232]; // [rsp+1B8h] [rbp-340h] BYREF
  WCHAR pszPath[264]; // [rsp+2A0h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4F8h] [rbp+0h]

  v4 = a4;
  v108 = a4;
  v113 = a3;
  v5 = a2;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v127 = 0;
  v120 = 0;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v7 = CoCreateInstance(&CLSID_TaskbarLayoutPolicyManager, 0LL, 1u, &GUID_99846e14_d914_4eb8_97e0_5432c32b2f40, &ppv);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    return v8;
  }
  try
  {
    v10 = (*(__int64 (**)(void))(*(_QWORD *)ppv + 24LL))();
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A6,
        (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      return v11;
    }
    v13 = v127;
    if ( !v127 )
      goto LABEL_55;
    v126 = 0LL;
    v14 = ppv;
    v15 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v126);
    v16 = v15(v14, a1, &v126);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AB,
        (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v126);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      return v17;
    }
    memset_0(v138, 0, 0xE8uLL);
    std::basic_ostringstream<unsigned short>::basic_ostringstream<unsigned short>((__int64)v138);
    v128 = 0;
    v119 = 1;
    if ( a1 == 3 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v126 + 24LL))(v126, &v128);
    winrt::Windows::Data::Json::JsonArray::JsonArray((winrt::Windows::Data::Json::JsonArray *)&v129);
    winrt::Windows::Data::Json::JsonArray::JsonArray((winrt::Windows::Data::Json::JsonArray *)v130);
    v18 = 0LL;
    v103 = 0LL;
    v19 = 0LL;
    v102 = 0LL;
    pv = 0LL;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
      && a1 == 2 )
    {
      v20 = (volatile signed __int32 *)*((_QWORD *)tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>>((struct wil::details::IFailureCallback *)v114)
                                       + 6);
      v21 = pv;
      pv = (LPVOID)v20;
      if ( v20 )
      {
        _InterlockedAdd(v20 + 82, 1u);
        v18 = v103;
        v19 = v102;
      }
      if ( v21 )
        tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>::Release(v21);
      tip2::test_watcher<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_watcher<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((__int64)v114);
      string = CLSID_StartMenuCacheAndAppResolver;
      v22 = (__int64 *)winrt::try_create_instance<IApplicationResolver>((LPVOID *)&v125, &string);
      if ( &v103 != v22 )
      {
        v18 = *v22;
        *v22 = 0LL;
        v103 = v18;
      }
      if ( v125 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v125);
      *(_QWORD *)&punk.Data1 = 0x42331CBA90AA3A4ELL;
      *(_DWORD *)punk.Data4 = 1465105336;
      *(_DWORD *)&punk.Data4[4] = 1233441907;
      v23 = (__int64 *)winrt::try_create_instance<IPinnedList>(&v121, &punk);
      if ( &v102 != v23 )
      {
        v19 = *v23;
        *v23 = 0LL;
        v102 = v19;
      }
      if ( v121 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v121);
      if ( v18 && v19 )
      {
        EnterprisePinDataFromRegistry = GetEnterprisePinDataFromRegistry(&v123, (__int64)&pv);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v129, EnterprisePinDataFromRegistry);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v123);
      }
      else
      {
        tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
          (__int64)&pv,
          (__int64 *)&v123);
        v26 = tip2::details::reason_string(
                (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::helper_instances_unavailable",
                v25);
        tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v27 + 8, 8LL, v26);
        tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((void **)&v123);
      }
    }
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>(
      (__int64)&v133,
      v126);
    v131 = 0LL;
    v132 = 0LL;
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::Iterator(
      (__int64)&v131,
      (__int64)&v133,
      0);
    v136 = 0LL;
    v137 = 0LL;
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::Iterator(
      (__int64)&v136,
      (__int64)&v133,
      v134);
    while ( 1 )
    {
      if ( (_DWORD)v131 == (_DWORD)v136 && v132 == v137 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v136 + 1);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v131 + 1);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v133);
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          if ( v19 && v18 )
            PersistEnterprisePinDataToRegistry(v130, &pv);
          if ( pv )
            tip2::details::shared_data<0,0,1>::complete_without_lock((char *)pv + 8);
          goto LABEL_50;
        }
        if ( a1 != 3 )
          goto LABEL_50;
        if ( v5[1] > (unsigned __int64)v128 )
        {
          LODWORD(v116.lpVtbl) = 4;
          ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>((char *)&v116);
          wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(&pv);
          if ( v19 )
            winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v102);
          if ( v18 )
            winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v103);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v130);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v129);
          std::basic_ostringstream<unsigned short>::`vbase destructor'((__int64)v138);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v126);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
          return 2147943568LL;
        }
        std::basic_stringbuf<unsigned short>::str((__int64)v139, (__int64)v114);
        v28 = v114;
        if ( v114[3] > (void *)7 )
          v28 = (void **)v114[0];
        v125 = v28;
        LODWORD(v116.lpVtbl) = 1;
        ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::PinningEvent<enum ProgrammableTaskbarTelemetry::PinningEventType,unsigned int &,unsigned short const *>(
          &v116,
          (char *)&v128,
          &v125);
        std::wstring::_Tidy_deallocate(v114);
LABEL_50:
        wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(&pv);
        if ( v19 )
          winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v102);
        if ( v18 )
          winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v103);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v130);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v129);
        std::basic_ostringstream<unsigned short>::`vbase destructor'((__int64)v138);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v126);
        v13 = v127;
        v4 = v108;
LABEL_55:
        *v113 = v13;
        if ( v4 )
          *v4 = v120;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
        return 0LL;
      }
      v29 = (__int64 *)*((_QWORD *)&v131 + 1);
      v125 = (void **)*((_QWORD *)&v131 + 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v125);
      *(_QWORD *)&punk.Data1 = 0LL;
      *(_QWORD *)&string.Data1 = 0LL;
      v123 = 0LL;
      v30 = *v29;
      *(_QWORD *)&string.Data1 = 0LL;
      v31 = (*(__int64 (__fastcall **)(__int64 *, IID *))(v30 + 24))(v29, &string);
      v32 = *(HSTRING *)&string.Data1;
      if ( v31 < 0 || !*(_QWORD *)&string.Data1 )
      {
        v42 = *(int (__fastcall **)(__int64 *, IID *))(*v29 + 56);
        if ( *(_QWORD *)&string.Data1 )
        {
          wil::last_error_context::last_error_context((wil::last_error_context *)v107);
          WindowsDeleteString(v32);
          wil::last_error_context::~last_error_context((wil::last_error_context *)v107);
        }
        *(_QWORD *)&string.Data1 = 0LL;
        if ( v42(v29, &string) >= 0 && *(_QWORD *)&string.Data1 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)&string.Data1, 0LL);
          if ( a1 == 3 )
          {
            v46 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v138, v114);
            if ( *v46 + v46[1] )
              std::basic_ostream<unsigned short>::operator<<((__int64)v138);
            v47 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(StringRawBuffer);
            std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v138, (__int64)v47);
          }
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::ReportUsage(
            (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::GetImpl'::`2'::impl,
            1u,
            v43,
            v44);
          if ( (*(int (__fastcall **)(__int64 *, int *))(*v29 + 64))(v29, &v119) < 0 || v119 )
          {
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
            v51 = SHCreateItemInKnownFolder(
                    &FOLDERID_AppsFolder,
                    0x4000u,
                    StringRawBuffer,
                    &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                    (void **)&punk);
            if ( v51 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x22C,
                (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v51);
            if ( !*(_QWORD *)&punk.Data1 )
            {
LABEL_116:
              if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
                && a1 == 2 )
              {
                tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
                  (__int64)&pv,
                  (__int64 *)&v105);
                v61 = tip2::details::reason_string(
                        (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::shell_item_not_found",
                        v60);
                tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v62 + 8, 9LL, v61);
                tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v105);
              }
              goto LABEL_169;
            }
            v116.lpVtbl = 0LL;
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v116);
            if ( (int)TaskbarPinHelper::GetTaskbarPinnableItem(*(TaskbarPinHelper **)&punk.Data1, &v116, v52) >= 0 )
            {
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
              lpVtbl = v116.lpVtbl;
              if ( v116.lpVtbl )
              {
                (*((void (__fastcall **)(struct IShellItemVtbl *))v116.lpVtbl->QueryInterface + 1))(v116.lpVtbl);
                lpVtbl = v116.lpVtbl;
              }
              *(_QWORD *)&punk.Data1 = lpVtbl;
            }
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v116);
          }
          else
          {
            PlaceholderPidl = CreatePlaceholderPidl(StringRawBuffer, (struct IShellItem **)&punk);
            v49 = retaddr;
            if ( PlaceholderPidl < 0 )
            {
              v50 = 551LL;
              goto LABEL_113;
            }
          }
        }
        else
        {
          v54 = *(int (__fastcall **)(__int64 *, HSTRING *))(*v29 + 32);
          v55 = v123;
          if ( v123 )
          {
            wil::last_error_context::last_error_context((wil::last_error_context *)v106);
            WindowsDeleteString(v55);
            wil::last_error_context::~last_error_context((wil::last_error_context *)v106);
          }
          v123 = 0LL;
          if ( v54(v29, &v123) >= 0 && v123 )
          {
            v56 = WindowsGetStringRawBuffer(v123, 0LL);
            if ( a1 == 3 )
            {
              v57 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v138, v114);
              if ( *v57 + v57[1] )
                std::basic_ostream<unsigned short>::operator<<((__int64)v138);
              v58 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v56);
              std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v138, (__int64)v58);
            }
            if ( v56 )
            {
              if ( (unsigned int)SHExpandEnvironmentStringsW(v56, pszPath, 260LL) )
              {
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
                PlaceholderPidl = SHCreateItemFromParsingName(
                                    pszPath,
                                    0LL,
                                    &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                                    (void **)&punk);
                v49 = retaddr;
                if ( PlaceholderPidl < 0 )
                {
                  v50 = 596LL;
LABEL_113:
                  wil::details::in1diag3::_Log_Hr(
                    v49,
                    (void *)v50,
                    (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                    (const char *)(unsigned int)PlaceholderPidl);
                }
              }
              else
              {
                wil::details::in1diag3::_Log_GetLastError(
                  retaddr,
                  (void *)0x252,
                  (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                  v59);
              }
            }
          }
        }
        v5 = a2;
        goto LABEL_115;
      }
      v33 = (WCHAR *)WindowsGetStringRawBuffer(*(HSTRING *)&string.Data1, 0LL);
      v135 = 0LL;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::GetImpl'::`2'::impl,
        1u,
        v34,
        v35);
      if ( (*(int (__fastcall **)(__int64 *, int *))(*v29 + 64))(v29, &v119) < 0 || v119 )
      {
        if ( v33 )
        {
          v36 = ParseAppUserModelId((char *)v33, 0LL, 0LL);
          v37 = retaddr;
          if ( v36 < 0 )
          {
            v38 = 490LL;
            goto LABEL_74;
          }
          if ( IsBrowserReplacementFeaturePresent()
            && CompareStringOrdinal(v33, -1, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge", -1, 1) == 2 )
          {
            TaskbarFlexibleLayoutTelemetry::LegacyBrowserUpgrade();
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
            v39 = SHCreateItemInKnownFolder(
                    &FOLDERID_CommonPrograms,
                    0x4000u,
                    L"Microsoft Edge.lnk",
                    &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                    (void **)&punk);
            if ( v39 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1F3,
                (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v39);
            v33 = (WCHAR *)L"Microsoft Edge.lnk";
            goto LABEL_75;
          }
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
          v36 = SHCreateItemInKnownFolder(
                  &FOLDERID_AppsFolder,
                  0x4000u,
                  v33,
                  &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                  (void **)&punk);
          v37 = retaddr;
          if ( v36 < 0 )
          {
            v38 = 504LL;
            goto LABEL_74;
          }
        }
      }
      else
      {
        v36 = CreatePlaceholderPidl(v33, (struct IShellItem **)&punk);
        v37 = retaddr;
        if ( v36 < 0 )
        {
          v38 = 488LL;
LABEL_74:
          wil::details::in1diag3::_Log_Hr(
            v37,
            (void *)v38,
            (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v36);
        }
      }
LABEL_75:
      if ( a1 == 3 )
      {
        v40 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v138, v114);
        if ( *v40 + v40[1] )
          std::basic_ostream<unsigned short>::operator<<((__int64)v138);
        v41 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v33);
        std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v138, (__int64)v41);
      }
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v135);
LABEL_115:
      if ( !*(_QWORD *)&punk.Data1 )
        goto LABEL_116;
      ppidl = 0LL;
      v63 = SHGetIDListFromObject(*(IUnknown **)&punk.Data1, &ppidl);
      v66 = v63;
      if ( v63 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x267,
          (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v63);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
            (__int64)&pv,
            &v104);
          v68 = tip2::details::reason_string(
                  (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::get_object_id_list_failed",
                  v67);
          tip2::details::shared_data<0,0,1>::set_flag_value<long>(v69 + 8, 13LL, (__int64)v68, v66);
          v70 = &v104;
          goto LABEL_132;
        }
        goto LABEL_133;
      }
      v71 = 0;
      LODWORD(v116.lpVtbl) = -1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::GetImpl'::`2'::impl,
        1u,
        v64,
        v65);
      if ( v119 )
      {
        v73 = (*(__int64 (__fastcall **)(__int64 *, struct IShellItem *))(*v29 + 40))(v29, &v116);
        v71 = v73;
        if ( v73 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x273,
            (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v73);
        lpVtbl_low = LODWORD(v116.lpVtbl);
      }
      else
      {
        lpVtbl_low = 9LL;
        LODWORD(v116.lpVtbl) = 9;
      }
      if ( v71 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x27B,
          (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v71);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
            (__int64)&pv,
            &v109);
          v75 = tip2::details::reason_string(
                  (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::get_pin_source_failed",
                  v74);
          tip2::details::shared_data<0,0,1>::set_flag_value<long>(v76 + 8, 15LL, (__int64)v75, v71);
          v70 = &v109;
          goto LABEL_132;
        }
        goto LABEL_133;
      }
      v77 = SetPinSourceForPinnedItem(ppidl, &ppidl, lpVtbl_low);
      v78 = v77;
      if ( v77 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x27D,
          (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v77);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
            (__int64)&pv,
            &v110);
          v80 = tip2::details::reason_string(
                  (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::set_pin_source_failed",
                  v79);
          tip2::details::shared_data<0,0,1>::set_flag_value<long>(v81 + 8, 14LL, (__int64)v80, v78);
          v70 = &v110;
LABEL_132:
          tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((void **)v70);
        }
LABEL_133:
        ILFree(ppidl);
        goto LABEL_169;
      }
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl) )
      {
        v83 = 1;
        v121 = 0LL;
        (*(void (__fastcall **)(__int64 *, GUID *, LPVOID *))*v29)(
          v29,
          &GUID_0437407b_4598_4e99_b045_bf1f3a3d11b4,
          &v121);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl) )
        {
          if ( a1 != 2 )
            goto LABEL_149;
          if ( LODWORD(v116.lpVtbl) != 3 )
            goto LABEL_145;
          if ( !v121 )
            goto LABEL_148;
          if ( !v18 || !v19 )
          {
LABEL_145:
            if ( v121 )
            {
              if ( LODWORD(v116.lpVtbl) != 3 )
              {
                tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
                  (__int64)&pv,
                  (__int64 *)&v111);
                v86 = tip2::details::reason_string(
                        (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::unsupported_pin_source",
                        v85);
                tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v87 + 8, 11LL, v86);
                tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v111);
                goto LABEL_161;
              }
              goto LABEL_149;
            }
LABEL_148:
            tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
              (__int64)&pv,
              (__int64 *)&v112);
            v89 = tip2::details::reason_string(
                    (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::layout_item_com_query_failed",
                    v88);
            tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v90 + 8, 12LL, v89);
            tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v112);
            goto LABEL_149;
          }
        }
        else if ( LODWORD(v116.lpVtbl) != 3 || !v121 || !v18 || !v19 )
        {
          goto LABEL_149;
        }
        v83 = ShouldAddEnterprisePinToOutput(v121, &ppidl, v18, v19, &v129, v130, &pv);
LABEL_161:
        if ( v83 )
        {
LABEL_149:
          v91 = 0LL;
          v92 = v5[1];
          if ( v92 != v5[3]
            || (v93 = CTSimpleArray<_ITEMIDLIST __unaligned *,4294967294,CTPolicyCoTaskMem<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardCompareHelper<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardMergeHelper<_ITEMIDLIST __unaligned *>>::_EnsureCapacity(
                        v5,
                        v92 + 1,
                        v84,
                        0LL),
                v91 = (const char *)(unsigned int)v93,
                v93 >= 0) )
          {
            v94 = v5[1];
            v5[1] = v94 + 1;
            v95 = (LPITEMIDLIST *)(*v5 + 8 * v94);
            if ( v95 )
              *v95 = ppidl;
          }
          if ( (int)v91 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2B1,
              (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
              v91);
        }
        else
        {
          ILFree(ppidl);
        }
        wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v121);
        goto LABEL_169;
      }
      v96 = 0LL;
      v97 = v5[1];
      if ( v97 != v5[3]
        || (v98 = CTSimpleArray<_ITEMIDLIST __unaligned *,4294967294,CTPolicyCoTaskMem<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardCompareHelper<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardMergeHelper<_ITEMIDLIST __unaligned *>>::_EnsureCapacity(
                    v5,
                    v97 + 1,
                    v82,
                    0LL),
            v96 = (const char *)(unsigned int)v98,
            v98 >= 0) )
      {
        v99 = v5[1];
        v5[1] = v99 + 1;
        v100 = (LPITEMIDLIST *)(*v5 + 8 * v99);
        if ( v100 )
          *v100 = ppidl;
      }
      if ( (int)v96 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2BA,
          (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
          v96);
LABEL_169:
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v123);
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>((HSTRING *)&string);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v125);
      LODWORD(v131) = v131 + 1;
      details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::GetCurrentObject((unsigned int *)&v131);
      v5 = a2;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x30A,
                           (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                           v12);
  }
  return result;
}
