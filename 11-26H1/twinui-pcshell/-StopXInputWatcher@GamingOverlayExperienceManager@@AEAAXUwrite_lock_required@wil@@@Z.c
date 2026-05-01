/*
 * XREFs of ?StopXInputWatcher@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180355574
 * Callers:
 *     ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18035562C (-StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180136F98 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18034DD44 (-Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StopXInputWatcher(__int64 a1)
{
  wil::details **v1; // rbx
  void *v3; // rcx
  const char *v4; // r9
  void *v5; // rcx
  char *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (wil::details **)(a1 + 288);
  v3 = *(void **)(a1 + 288);
  if ( v3 )
  {
    if ( !SetEvent(v3) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1499,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        v4);
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      v1,
      0LL);
  }
  v5 = *(void **)(a1 + 280);
  if ( v5 )
  {
    LODWORD(v7) = WaitForSingleObject(v5, 0x1388u);
    wil::details::in1diag3::Log_GetLastErrorIfMsg(
      retaddr,
      (void *)0x14A0,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)((_DWORD)v7 != 0),
      (unsigned __int64)"StopXInputWatcher Wait Result: 0x%08X",
      v7);
  }
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
           (void **)(a1 + 280),
           0LL);
}
