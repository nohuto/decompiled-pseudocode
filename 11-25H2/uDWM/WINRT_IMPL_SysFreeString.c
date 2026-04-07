/*
 * XREFs of WINRT_IMPL_SysFreeString @ 0x18009C955
 * Callers:
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009F978 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall WINRT_IMPL_SysFreeString(BSTR bstrString)
{
  SysFreeString(bstrString);
}
