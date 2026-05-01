/*
 * XREFs of wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___ @ 0x1805EE270
 * Callers:
 *     std::tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______::_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______ @ 0x1805EE23C (std--tuple_std--filesystem--path_wil--unique_any_t_wil--details--unique_storage_wil--details--ha.c)
 *     wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____::_unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____ @ 0x1805EE264 (wil--unique_any_t_wil--details--unique_storage_wil--details--handle_invalid_resource_policy_void.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1805EEFFC (_anonymous_namespace_--CreateTemporaryFile.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805F0510 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x1805EF624 (_anonymous_namespace_--DeleteAndCloseFileHandle.c)
 */

__int64 __fastcall wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 != (void *)-1LL )
  {
    if ( v1 )
      return anonymous_namespace_::DeleteAndCloseFileHandle(v1);
  }
  return result;
}
