/*
 * XREFs of _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x1805CB6B8
 * Callers:
 *     wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___ @ 0x1805CA264 (wil--details--unique_storage_wil--details--handle_invalid_resource_policy_void_(__cdecl_)(void__.c)
 *     wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____::operator_ @ 0x1805CA2B0 (wil--unique_any_t_wil--details--unique_storage_wil--details--handle_invalid_resourc_ea_1805CA2B0.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

int __fastcall anonymous_namespace_::DeleteAndCloseFileHandle(HANDLE hObject)
{
  const char *v2; // r9
  const char *v3; // r9
  HANDLE v5; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = ReOpenFile(hObject, 0x10000u, 7u, 0x4000000u);
  if ( (((unsigned __int64)v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x16,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      v2);
  if ( !CloseHandle(hObject) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x17,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      v3);
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v5);
}
