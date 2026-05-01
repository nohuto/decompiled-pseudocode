/*
 * XREFs of ?GetCopilotHardwareKeyAppEnforcedByPolicy@CopilotButtonHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1805FF900
 * Callers:
 *     ?EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ @ 0x1805FEB1C (-EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180217C54 (--1-$unique_storage@U-$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1-PolicyManager_F.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805FDD74 (--1-$com_ptr_t@V-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FDF4C (--1-$test_data_control@V-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@det.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FE02C (--1-$test_watcher@V-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1806119C0 (-start@-$tip_test@V-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@.c)
 */

// Hidden C++ exception states: #wind=2
char **__fastcall CopilotButtonHelpers::GetCopilotHardwareKeyAppEnforcedByPolicy(char **a1)
{
  __int64 v2; // rbx
  WCHAR *v3; // rdx
  volatile signed __int32 *v4; // rbx
  __m128i si128; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v7[16]; // [rsp+38h] [rbp-48h] BYREF
  const int *v8; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int32 *v10; // [rsp+78h] [rbp-8h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  volatile signed __int32 *v12; // [rsp+B0h] [rbp+30h] BYREF
  volatile signed __int32 *v13; // [rsp+B8h] [rbp+38h] BYREF

  v12 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>>::start(
    &v12,
    v7);
  v8 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v9,
    (struct wil::details::IFailureCallback *)&v8,
    0LL,
    1);
  v10 = v12;
  if ( v12 )
    _InterlockedIncrement(v12 + 68);
  wil::com_ptr_t<tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>,wil::err_returncode_policy>((void **)&v12);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v11 = 0LL;
  if ( (int)PolicyManager_GetPolicy(L"WindowsAI", L"SetCopilotHardwareKey", &si128, &v11) < 0 )
    goto LABEL_11;
  v2 = v11;
  if ( *(_DWORD *)(v11 + 4) != 1 )
  {
    if ( !*(_DWORD *)(v11 + 4) )
    {
LABEL_11:
      tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v10 + 2));
      v3 = (WCHAR *)&LocaleName;
      goto LABEL_12;
    }
LABEL_8:
    v4 = v10;
    v13 = v10;
    if ( v10 )
      _InterlockedIncrement(v10 + 68);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v4 + 2));
    *((_BYTE *)v4 + 264) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>>::~test_data_control<tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>>((void **)&v13);
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v11 + 8) != 2 )
    goto LABEL_8;
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v10 + 2));
  v3 = *(WCHAR **)(v2 + 16);
LABEL_12:
  std::wstring::wstring(a1, v3);
  wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>(&v11);
  tip2::test_watcher<tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>>::~test_watcher<tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>>((__int64)&v8);
  return a1;
}
