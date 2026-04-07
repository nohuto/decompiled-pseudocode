/*
 * XREFs of ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800931A8
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x180093284 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 *     ??1hresult_error@winrt@@QEAA@XZ @ 0x1800D0B94 (--1hresult_error@winrt@@QEAA@XZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D26DC (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 * Callees:
 *     WINRT_IMPL_SysFreeString @ 0x180090009 (WINRT_IMPL_SysFreeString.c)
 */

void __fastcall winrt::handle_type<winrt::impl::bstr_traits>::close(OLECHAR **a1)
{
  OLECHAR *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    WINRT_IMPL_SysFreeString(v2);
    *a1 = 0LL;
  }
}
