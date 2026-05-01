/*
 * XREFs of ?RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z @ 0x1805F9D94
 * Callers:
 *     ??0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z @ 0x1805FB598 (--0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z.c)
 *     ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1805FB87C (-CloseNoLock@WindowRegistration@@AEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800CA0BC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1802B7828 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl_ea_1802B7828.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Utils::RegisterFlyoutWindow(HWND hWnd, HWND a2)
{
  void *v3; // rdx
  const char *v4; // r9
  void *v5; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil::details *v8; // [rsp+50h] [rbp+18h] BYREF

  if ( (_BYTE)a2 )
  {
    v8 = 0LL;
    _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
      &v8,
      1,
      L"MeetAndChatFlyoutShown");
    if ( !SetPropW(hWnd, L"MeetAndChatFlyout", HANDLE_FLAG_INHERIT) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x170,
        (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
        v4);
    wil::details::SetEvent(v8, v3);
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
      &v8,
      v5);
  }
  else if ( IsWindow(hWnd) )
  {
    if ( !RemovePropW(hWnd, L"MeetAndChatFlyout") )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x177,
        (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
        v6);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x17C,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)0x80070578LL);
  }
}
