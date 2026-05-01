/*
 * XREFs of ShouldAddEnterprisePinToOutput @ 0x180696EE8
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?CreateStringValue@JsonValue@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x180139854 (-CreateStringValue@JsonValue@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@@Z.c)
 *     ??0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ @ 0x180139A30 (--0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@XZ @ 0x1802B4228 (-Size@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJso.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Append@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x180317C74 (-Append@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJ.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstring@5@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x180317D30 (-Insert@-$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstr.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x18068C0C0 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@XZ @ 0x18068C55C (--C-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 *     ?CreateNumberValue@JsonValue@Json@Data@Windows@winrt@@SA@N@Z @ 0x18068DDC8 (-CreateNumberValue@JsonValue@Json@Data@Windows@winrt@@SA@N@Z.c)
 *     GetStoredEnterprisePinGeneration @ 0x18069248C (GetStoredEnterprisePinGeneration.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x1806994E0 (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x18069AC3C (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall ShouldAddEnterprisePinToOutput(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // eax
  const char *v8; // rdx
  tip2::details *v9; // rax
  _QWORD *v10; // r9
  wil *v11; // rcx
  char result; // al
  int v13; // ebx
  const char *v14; // rdx
  tip2::details *v15; // rax
  _QWORD *v16; // r9
  void *v17; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-A8h]
  int v19; // [rsp+78h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v18 = a7;
  v19 = -1;
  try
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x11A,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v7,
        (int)v17);
    tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
      a7,
      (__int64 *)&v17);
    v9 = tip2::details::reason_string(
           (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::no_enterprise_pin_generation",
           v8);
    tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(*v10 + 8LL, 1LL, v9);
    tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v17);
    result = 1;
  }
  catch ( ... )
  {
    v13 = wil::ResultFromCaughtException(v11);
    tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
      v18,
      (__int64 *)&v17);
    v15 = tip2::details::reason_string(
            (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::enterprise_pin_generation_eval_failure",
            v14);
    tip2::details::shared_data<0,0,1>::set_flag_value<long>(*v16 + 8LL, 7LL, (__int64)v15, v13);
    tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v17);
    return 1;
  }
  return result;
}
