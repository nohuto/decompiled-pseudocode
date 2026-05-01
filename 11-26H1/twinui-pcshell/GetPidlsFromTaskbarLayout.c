/*
 * XREFs of GetPidlsFromTaskbarLayout @ 0x180690384
 * Callers:
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068C860 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18068CB10 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068CF00 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x18068D210 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002C6F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800737A4 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801BB910 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801CD2B0 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D4C2C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A2A0 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ??0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1802A10E8 (--0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PGTBPlaceholderPinning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18031DE80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PGTBPlaceholderPinning@@@details@wil@@QEA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAA_NXZ @ 0x18031E1F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wi.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x18033ADFC (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x18035A128 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1805E688C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x18068B474 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4PinningEventType@1@AEAI$$QEAPEBG@Z @ 0x18068B4E4 (--$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTel.c)
 *     ??$set_flag_value@J@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z @ 0x18068B958 (--$set_flag_value@J@-$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18068B994 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@P.c)
 *     ??$try_create_instance@UIApplicationResolver@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x18068BA0C (--$try_create_instance@UIApplicationResolver@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??$try_create_instance@UIPinnedList@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x18068BA7C (--$try_create_instance@UIPinnedList@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18068BC64 (--0-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@.c)
 *     ??0?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18068BCD0 (--0-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18068BEF8 (--0Iterator@-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Mi.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18068C044 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_dat.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x18068C0C0 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x18068C0F8 (--1-$test_watcher@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_.c)
 *     ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x18068C358 (--6-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@G@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@XZ @ 0x18068C55C (--C-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 *     ??_D?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18068C61C (--_D-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z @ 0x18068DE48 (-CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18068FF1C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayo.c)
 *     GetEnterprisePinDataFromRegistry @ 0x18068FFBC (GetEnterprisePinDataFromRegistry.c)
 *     ?IsBrowserReplacementFeaturePresent@@YA_NXZ @ 0x180693AFC (-IsBrowserReplacementFeaturePresent@@YA_NXZ.c)
 *     ?LegacyBrowserUpgrade@TaskbarFlexibleLayoutTelemetry@@SAXXZ @ 0x18069439C (-LegacyBrowserUpgrade@TaskbarFlexibleLayoutTelemetry@@SAXXZ.c)
 *     PersistEnterprisePinDataToRegistry @ 0x180694EC8 (PersistEnterprisePinDataToRegistry.c)
 *     ?Release@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x180695A18 (-Release@-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x180696C64 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     ShouldAddEnterprisePinToOutput @ 0x180696EE8 (ShouldAddEnterprisePinToOutput.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEFAU_ITEMIDLIST@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEFAU_ITEMIDLIST@@@@V?$CSimpleArrayStandardCompareHelper@PEFAU_ITEMIDLIST@@@@V?$CSimpleArrayStandardMergeHelper@PEFAU_ITEMIDLIST@@@@@@QEAAJ_K0@Z @ 0x180699404 (-_EnsureCapacity@-$CTSimpleArray@PEFAU_ITEMIDLIST@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEFAU_ITEMIDL.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEmptyLayoutItemsFlag@@@details@wil@@QEAA_NXZ @ 0x18069A3D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEm.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags@@@details@wil@@QEAA_NXZ @ 0x18069A414 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFl.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x18069A500 (-complete_without_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x18069AC3C (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *EnterprisePinDataFromRegistry; // rax
  const char *v24; // rdx
  tip2::details *v25; // rax
  _QWORD *v26; // r9
  const char *v27; // rdx
  tip2::details *v28; // rax
  _QWORD *v29; // r9
  _QWORD *v30; // rax
  __int64 *v31; // rbx
  __int64 v32; // rax
  int v33; // eax
  HSTRING v34; // r14
  WCHAR *v35; // r14
  __int64 v36; // r8
  int v37; // eax
  wil::details::in1diag3 *v38; // rcx
  __int64 v39; // rdx
  HRESULT v40; // eax
  _QWORD *v41; // rax
  const unsigned __int16 *v42; // rax
  int (__fastcall *v43)(__int64 *, HSTRING *); // r15
  __int64 v44; // r8
  const WCHAR *StringRawBuffer; // r14
  _QWORD *v46; // rax
  const unsigned __int16 *v47; // rax
  int PlaceholderPidl; // eax
  wil::details::in1diag3 *v49; // rcx
  __int64 v50; // rdx
  HRESULT v51; // eax
  struct IShellItem **v52; // r8
  IUnknown *lpVtbl; // rcx
  int (__fastcall *v54)(__int64 *, HSTRING *); // r15
  HSTRING v55; // r14
  const WCHAR *v56; // r14
  _QWORD *v57; // rax
  const unsigned __int16 *v58; // rax
  const char *v59; // r9
  const char *v60; // rdx
  tip2::details *v61; // rax
  _QWORD *v62; // r9
  HRESULT v63; // eax
  __int64 v64; // r8
  int v65; // r14d
  const char *v66; // rdx
  tip2::details *v67; // rax
  _QWORD *v68; // r9
  __int64 *v69; // rcx
  int v70; // r14d
  __int64 lpVtbl_low; // r8
  int v72; // eax
  const char *v73; // rdx
  tip2::details *v74; // rax
  _QWORD *v75; // r10
  int v76; // eax
  int v77; // r14d
  const char *v78; // rdx
  tip2::details *v79; // rax
  _QWORD *v80; // r9
  __int64 v81; // r8
  char v82; // r14
  __int64 v83; // r8
  const char *v84; // rdx
  tip2::details *v85; // rax
  _QWORD *v86; // r9
  const char *v87; // rdx
  tip2::details *v88; // rax
  _QWORD *v89; // r9
  const char *v90; // r9
  __int64 v91; // rdx
  int v92; // eax
  LPITEMIDLIST *v93; // rdx
  const char *v94; // r9
  __int64 v95; // rdx
  int v96; // eax
  LPITEMIDLIST *v97; // rdx
  void *v98; // [rsp+40h] [rbp-4B8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-4B0h] BYREF
  IID v100; // [rsp+50h] [rbp-4A8h] BYREF
  _QWORD *v101; // [rsp+60h] [rbp-498h]
  __int64 v102; // [rsp+68h] [rbp-490h] BYREF
  __int64 v103; // [rsp+70h] [rbp-488h] BYREF
  _DWORD *v104; // [rsp+78h] [rbp-480h]
  void *v105; // [rsp+80h] [rbp-478h] BYREF
  __int64 v106; // [rsp+88h] [rbp-470h] BYREF
  __int64 v107; // [rsp+90h] [rbp-468h] BYREF
  __int64 v108; // [rsp+98h] [rbp-460h] BYREF
  void *v109; // [rsp+A0h] [rbp-458h] BYREF
  _BYTE v110[8]; // [rsp+A8h] [rbp-450h] BYREF
  _BYTE v111[8]; // [rsp+B0h] [rbp-448h] BYREF
  _DWORD *v112; // [rsp+B8h] [rbp-440h]
  _QWORD v113[7]; // [rsp+C0h] [rbp-438h] BYREF
  LPITEMIDLIST ppidl; // [rsp+F8h] [rbp-400h] BYREF
  IUnknown *punk; // [rsp+100h] [rbp-3F8h] BYREF
  struct IShellItem v116; // [rsp+108h] [rbp-3F0h] BYREF
  int v117; // [rsp+110h] [rbp-3E8h]
  int v118; // [rsp+114h] [rbp-3E4h] BYREF
  char v119[8]; // [rsp+118h] [rbp-3E0h] BYREF
  LPVOID ppv; // [rsp+120h] [rbp-3D8h] BYREF
  HSTRING string; // [rsp+128h] [rbp-3D0h] BYREF
  __int64 v122; // [rsp+130h] [rbp-3C8h] BYREF
  int v123; // [rsp+138h] [rbp-3C0h]
  HSTRING v124; // [rsp+140h] [rbp-3B8h] BYREF
  __int64 v125; // [rsp+148h] [rbp-3B0h] BYREF
  __int64 v126; // [rsp+150h] [rbp-3A8h] BYREF
  _BYTE v127[8]; // [rsp+158h] [rbp-3A0h] BYREF
  __int128 v128; // [rsp+160h] [rbp-398h] BYREF
  __int64 v129; // [rsp+170h] [rbp-388h]
  __int64 v130; // [rsp+178h] [rbp-380h] BYREF
  int v131; // [rsp+180h] [rbp-378h]
  HSTRING v132; // [rsp+188h] [rbp-370h] BYREF
  __int128 v133; // [rsp+190h] [rbp-368h] BYREF
  __int64 v134; // [rsp+1A0h] [rbp-358h]
  _BYTE v135[8]; // [rsp+1B0h] [rbp-348h] BYREF
  _BYTE v136[232]; // [rsp+1B8h] [rbp-340h] BYREF
  WCHAR pszPath[264]; // [rsp+2A0h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4F8h] [rbp+0h]

  v4 = a4;
  v112 = a4;
  v104 = a3;
  v5 = a2;
  v101 = a2;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v123 = 0;
  v117 = 0;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v7 = CoCreateInstance(&CLSID_TaskbarLayoutPolicyManager, 0LL, 1u, &GUID_99846e14_d914_4eb8_97e0_5432c32b2f40, &ppv);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A5,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
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
        (void *)0x1A7,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      return v11;
    }
    v13 = v123;
    if ( !v123 )
      goto LABEL_56;
    v122 = 0LL;
    v14 = ppv;
    v15 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v122);
    v16 = v15(v14, a1, &v122);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AC,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v122);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      return v17;
    }
    memset_0(v135, 0, 0xE8uLL);
    std::basic_ostringstream<unsigned short>::basic_ostringstream<unsigned short>((__int64)v135);
    *(_DWORD *)v119 = 0;
    v118 = 1;
    if ( a1 == 3 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v122 + 24LL))(v122, v119);
    winrt::Windows::Data::Json::JsonArray::JsonArray((winrt::Windows::Data::Json::JsonArray *)&v126);
    winrt::Windows::Data::Json::JsonArray::JsonArray((winrt::Windows::Data::Json::JsonArray *)v127);
    v18 = 0LL;
    v103 = 0LL;
    v19 = 0LL;
    v102 = 0LL;
    pv = 0LL;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
      && a1 == 2 )
    {
      v20 = (volatile signed __int32 *)*((_QWORD *)tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>>((struct wil::details::IFailureCallback *)v113)
                                       + 6);
      pv = (LPVOID)v20;
      if ( v20 )
        _InterlockedIncrement(v20 + 84);
      tip2::test_watcher<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_watcher<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((__int64)v113);
      v100 = CLSID_StartMenuCacheAndAppResolver;
      v21 = (__int64 *)winrt::try_create_instance<IApplicationResolver>(&v98, &v100);
      if ( &v103 != v21 )
      {
        v18 = *v21;
        *v21 = 0LL;
        v103 = v18;
      }
      if ( v98 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v98);
      v100.Data1 = -1867892146;
      *(_DWORD *)&v100.Data2 = 1110645946;
      *(_DWORD *)v100.Data4 = 1465105336;
      *(_DWORD *)&v100.Data4[4] = 1233441907;
      v22 = (__int64 *)winrt::try_create_instance<IPinnedList>(&v98, &v100);
      if ( &v102 != v22 )
      {
        v19 = *v22;
        *v22 = 0LL;
        v102 = v19;
      }
      if ( v98 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v98);
      if ( v18 && v19 )
      {
        EnterprisePinDataFromRegistry = GetEnterprisePinDataFromRegistry(&v98, (__int64)&pv);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v126, EnterprisePinDataFromRegistry);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v98);
      }
      else
      {
        tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
          (__int64)&pv,
          (__int64 *)&v98);
        v25 = tip2::details::reason_string(
                (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::helper_instances_unavailable",
                v24);
        tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(*v26 + 8LL, 8LL, v25);
        tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v98);
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEmptyLayoutItemsFlag>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEmptyLayoutItemsFlag>::GetImpl'::`2'::impl) )
      {
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v122 + 24LL))(v122, v119);
        if ( !*(_DWORD *)v119 )
        {
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
            (__int64)&pv,
            (__int64 *)&v98);
          v28 = tip2::details::reason_string(
                  (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::layout_items_array_empty",
                  v27);
          tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(*v29 + 8LL, 16LL, v28);
          tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v98);
        }
      }
    }
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>(
      (__int64)&v130,
      v122);
    v128 = 0LL;
    v129 = 0LL;
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::Iterator(
      (__int64)&v128,
      (__int64)&v130,
      0);
    v133 = 0LL;
    v134 = 0LL;
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::Iterator(
      (__int64)&v133,
      (__int64)&v130,
      v131);
    while ( 1 )
    {
      if ( (_DWORD)v128 == (_DWORD)v133 && v129 == v134 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v133 + 1);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v128 + 1);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v130);
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          if ( v19 && v18 )
            PersistEnterprisePinDataToRegistry(v127, &pv);
          if ( pv )
            tip2::details::shared_data<0,0,1>::complete_without_lock((char *)pv + 8);
          goto LABEL_51;
        }
        if ( a1 != 3 )
          goto LABEL_51;
        if ( v5[1] > (unsigned __int64)*(unsigned int *)v119 )
        {
          LODWORD(v116.lpVtbl) = 4;
          ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>((char *)&v116);
          wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(&pv);
          if ( v19 )
            winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v102);
          if ( v18 )
            winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v103);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v127);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v126);
          std::basic_ostringstream<unsigned short>::`vbase destructor'((__int64)v135);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v122);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
          return 2147943568LL;
        }
        std::basic_stringbuf<unsigned short>::str((__int64)v136, (char *)v113);
        v30 = v113;
        if ( v113[3] > 7uLL )
          v30 = (_QWORD *)v113[0];
        v98 = v30;
        LODWORD(v116.lpVtbl) = 1;
        ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::PinningEvent<enum ProgrammableTaskbarTelemetry::PinningEventType,unsigned int &,unsigned short const *>(
          &v116,
          v119,
          &v98);
        std::wstring::_Tidy_deallocate(v113);
LABEL_51:
        wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(&pv);
        if ( v19 )
          winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v102);
        if ( v18 )
          winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v103);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v127);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v126);
        std::basic_ostringstream<unsigned short>::`vbase destructor'((__int64)v135);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v122);
        v13 = v123;
        v4 = v112;
LABEL_56:
        *v104 = v13;
        if ( v4 )
          *v4 = v117;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
        return 0LL;
      }
      v31 = (__int64 *)*((_QWORD *)&v128 + 1);
      v98 = (void *)*((_QWORD *)&v128 + 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v98);
      punk = 0LL;
      string = 0LL;
      v124 = 0LL;
      v32 = *v31;
      string = 0LL;
      v33 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v32 + 24))(v31, &string);
      v34 = string;
      if ( v33 < 0 || !string )
      {
        v43 = *(int (__fastcall **)(__int64 *, HSTRING *))(*v31 + 56);
        if ( string )
        {
          wil::last_error_context::last_error_context((wil::last_error_context *)v111);
          WindowsDeleteString(v34);
          wil::last_error_context::~last_error_context((wil::last_error_context *)v111);
        }
        string = 0LL;
        if ( v43(v31, &string) >= 0 && string )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          if ( a1 == 3 )
          {
            v46 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v135, v113);
            if ( *v46 + v46[1] )
              std::basic_ostream<unsigned short>::operator<<((__int64)v135);
            v47 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(StringRawBuffer);
            std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v135, (__int64)v47);
          }
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::ReportUsage(
            (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::GetImpl'::`2'::impl,
            1u,
            v44);
          if ( (*(int (__fastcall **)(__int64 *, int *))(*v31 + 64))(v31, &v118) < 0 || v118 )
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
                (void *)0x237,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v51);
            if ( !punk )
            {
LABEL_117:
              if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
                && a1 == 2 )
              {
                tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
                  (__int64)&pv,
                  (__int64 *)&v109);
                v61 = tip2::details::reason_string(
                        (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::shell_item_not_found",
                        v60);
                tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(*v62 + 8LL, 9LL, v61);
                tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v109);
              }
              goto LABEL_170;
            }
            v116.lpVtbl = 0LL;
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v116);
            if ( (int)TaskbarPinHelper::GetTaskbarPinnableItem((TaskbarPinHelper *)punk, &v116, v52) >= 0 )
            {
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
              lpVtbl = (IUnknown *)v116.lpVtbl;
              if ( v116.lpVtbl )
              {
                (*((void (__fastcall **)(struct IShellItemVtbl *))v116.lpVtbl->QueryInterface + 1))(v116.lpVtbl);
                lpVtbl = (IUnknown *)v116.lpVtbl;
              }
              punk = lpVtbl;
            }
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v116);
          }
          else
          {
            PlaceholderPidl = CreatePlaceholderPidl(StringRawBuffer, (struct IShellItem **)&punk);
            v49 = retaddr;
            if ( PlaceholderPidl < 0 )
            {
              v50 = 562LL;
              goto LABEL_114;
            }
          }
        }
        else
        {
          v54 = *(int (__fastcall **)(__int64 *, HSTRING *))(*v31 + 32);
          v55 = v124;
          if ( v124 )
          {
            wil::last_error_context::last_error_context((wil::last_error_context *)v110);
            WindowsDeleteString(v55);
            wil::last_error_context::~last_error_context((wil::last_error_context *)v110);
          }
          v124 = 0LL;
          if ( v54(v31, &v124) >= 0 && v124 )
          {
            v56 = WindowsGetStringRawBuffer(v124, 0LL);
            if ( a1 == 3 )
            {
              v57 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v135, v113);
              if ( *v57 + v57[1] )
                std::basic_ostream<unsigned short>::operator<<((__int64)v135);
              v58 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v56);
              std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v135, (__int64)v58);
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
                  v50 = 607LL;
LABEL_114:
                  wil::details::in1diag3::_Log_Hr(
                    v49,
                    (void *)v50,
                    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                    (const char *)(unsigned int)PlaceholderPidl);
                }
              }
              else
              {
                wil::details::in1diag3::_Log_GetLastError(
                  retaddr,
                  (void *)0x25D,
                  (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                  v59);
              }
            }
          }
        }
        v5 = v101;
        goto LABEL_116;
      }
      v35 = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
      v132 = 0LL;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::GetImpl'::`2'::impl,
        1u,
        v36);
      if ( (*(int (__fastcall **)(__int64 *, int *))(*v31 + 64))(v31, &v118) < 0 || v118 )
      {
        if ( v35 )
        {
          v37 = ParseAppUserModelId((char *)v35, 0LL, 0LL);
          v38 = retaddr;
          if ( v37 < 0 )
          {
            v39 = 501LL;
            goto LABEL_75;
          }
          if ( IsBrowserReplacementFeaturePresent()
            && CompareStringOrdinal(v35, -1, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge", -1, 1) == 2 )
          {
            TaskbarFlexibleLayoutTelemetry::LegacyBrowserUpgrade();
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
            v40 = SHCreateItemInKnownFolder(
                    &FOLDERID_CommonPrograms,
                    0x4000u,
                    L"Microsoft Edge.lnk",
                    &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                    (void **)&punk);
            if ( v40 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1FE,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v40);
            v35 = (WCHAR *)L"Microsoft Edge.lnk";
            goto LABEL_76;
          }
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
          v37 = SHCreateItemInKnownFolder(
                  &FOLDERID_AppsFolder,
                  0x4000u,
                  v35,
                  &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                  (void **)&punk);
          v38 = retaddr;
          if ( v37 < 0 )
          {
            v39 = 515LL;
            goto LABEL_75;
          }
        }
      }
      else
      {
        v37 = CreatePlaceholderPidl(v35, (struct IShellItem **)&punk);
        v38 = retaddr;
        if ( v37 < 0 )
        {
          v39 = 499LL;
LABEL_75:
          wil::details::in1diag3::_Log_Hr(
            v38,
            (void *)v39,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v37);
        }
      }
LABEL_76:
      if ( a1 == 3 )
      {
        v41 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v135, v113);
        if ( *v41 + v41[1] )
          std::basic_ostream<unsigned short>::operator<<((__int64)v135);
        v42 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v35);
        std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v135, (__int64)v42);
      }
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v132);
LABEL_116:
      if ( !punk )
        goto LABEL_117;
      ppidl = 0LL;
      v63 = SHGetIDListFromObject(punk, &ppidl);
      v65 = v63;
      if ( v63 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x272,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v63);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
            (__int64)&pv,
            &v108);
          v67 = tip2::details::reason_string(
                  (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::get_object_id_list_failed",
                  v66);
          tip2::details::shared_data<0,0,1>::set_flag_value<long>(*v68 + 8LL, 13LL, (__int64)v67, v65);
          v69 = &v108;
          goto LABEL_133;
        }
        goto LABEL_134;
      }
      v70 = 0;
      LODWORD(v116.lpVtbl) = -1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::GetImpl'::`2'::impl,
        1u,
        v64);
      if ( v118 )
      {
        v72 = (*(__int64 (__fastcall **)(__int64 *, struct IShellItem *))(*v31 + 40))(v31, &v116);
        v70 = v72;
        if ( v72 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x27E,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v72);
        lpVtbl_low = LODWORD(v116.lpVtbl);
      }
      else
      {
        lpVtbl_low = 9LL;
        LODWORD(v116.lpVtbl) = 9;
      }
      if ( v70 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x286,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v70);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
            (__int64)&pv,
            &v107);
          v74 = tip2::details::reason_string(
                  (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::get_pin_source_failed",
                  v73);
          tip2::details::shared_data<0,0,1>::set_flag_value<long>(*v75 + 8LL, 15LL, (__int64)v74, v70);
          v69 = &v107;
          goto LABEL_133;
        }
        goto LABEL_134;
      }
      v76 = SetPinSourceForPinnedItem(ppidl, &ppidl, lpVtbl_low);
      v77 = v76;
      if ( v76 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x288,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v76);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
            (__int64)&pv,
            &v106);
          v79 = tip2::details::reason_string(
                  (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::set_pin_source_failed",
                  v78);
          tip2::details::shared_data<0,0,1>::set_flag_value<long>(*v80 + 8LL, 14LL, (__int64)v79, v77);
          v69 = &v106;
LABEL_133:
          tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((void **)v69);
        }
LABEL_134:
        ILFree(ppidl);
        goto LABEL_170;
      }
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl) )
      {
        v82 = 1;
        v125 = 0LL;
        (*(void (__fastcall **)(__int64 *, GUID *, __int64 *))*v31)(
          v31,
          &GUID_0437407b_4598_4e99_b045_bf1f3a3d11b4,
          &v125);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl) )
        {
          if ( a1 != 2 )
            goto LABEL_150;
          if ( LODWORD(v116.lpVtbl) != 3 )
            goto LABEL_146;
          if ( !v125 )
            goto LABEL_149;
          if ( !v18 || !v19 )
          {
LABEL_146:
            if ( v125 )
            {
              if ( LODWORD(v116.lpVtbl) != 3 )
              {
                tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
                  (__int64)&pv,
                  (__int64 *)&v105);
                v85 = tip2::details::reason_string(
                        (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::unsupported_pin_source",
                        v84);
                tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(*v86 + 8LL, 11LL, v85);
                tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v105);
                goto LABEL_162;
              }
              goto LABEL_150;
            }
LABEL_149:
            tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
              (__int64)&pv,
              (__int64 *)&v100);
            v88 = tip2::details::reason_string(
                    (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::layout_item_com_query_failed",
                    v87);
            tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(*v89 + 8LL, 12LL, v88);
            tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((void **)&v100);
            goto LABEL_150;
          }
        }
        else if ( LODWORD(v116.lpVtbl) != 3 || !v125 || !v18 || !v19 )
        {
          goto LABEL_150;
        }
        v82 = ShouldAddEnterprisePinToOutput(v125, &ppidl, v18, v19, &v126, v127, &pv);
LABEL_162:
        if ( v82 )
        {
LABEL_150:
          v90 = 0LL;
          v91 = v5[1];
          if ( v91 != v5[3]
            || (v92 = CTSimpleArray<_ITEMIDLIST __unaligned *,4294967294,CTPolicyCoTaskMem<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardCompareHelper<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardMergeHelper<_ITEMIDLIST __unaligned *>>::_EnsureCapacity(
                        v5,
                        v91 + 1,
                        v83,
                        0LL),
                v90 = (const char *)(unsigned int)v92,
                v92 >= 0) )
          {
            v93 = (LPITEMIDLIST *)(*v5 + 8 * v5[1]++);
            if ( v93 )
              *v93 = ppidl;
          }
          if ( (int)v90 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2BC,
              (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
              v90);
        }
        else
        {
          ILFree(ppidl);
        }
        wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>(&v125);
        goto LABEL_170;
      }
      v94 = 0LL;
      v95 = v5[1];
      if ( v95 != v5[3]
        || (v96 = CTSimpleArray<_ITEMIDLIST __unaligned *,4294967294,CTPolicyCoTaskMem<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardCompareHelper<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardMergeHelper<_ITEMIDLIST __unaligned *>>::_EnsureCapacity(
                    v5,
                    v95 + 1,
                    v81,
                    0LL),
            v94 = (const char *)(unsigned int)v96,
            v96 >= 0) )
      {
        v97 = (LPITEMIDLIST *)(*v5 + 8 * v5[1]++);
        if ( v97 )
          *v97 = ppidl;
      }
      if ( (int)v94 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2C5,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          v94);
LABEL_170:
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v124);
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v98);
      LODWORD(v128) = v128 + 1;
      details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::GetCurrentObject((unsigned int *)&v128);
      v5 = v101;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x315,
                           (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                           v12);
  }
  return result;
}
