/*
 * XREFs of std::make_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______ @ 0x1805EDE04
 * Callers:
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1805EEFFC (_anonymous_namespace_--CreateTemporaryFile.c)
 *     _anonymous_namespace_::CreateTemporaryLogoFile @ 0x1805EF28C (_anonymous_namespace_--CreateTemporaryLogoFile.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::make_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_______(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // r9

  *a1 = *a3;
  *a3 = -1LL;
  std::wstring::wstring((__int64)(a1 + 1), a2);
  return v3;
}
