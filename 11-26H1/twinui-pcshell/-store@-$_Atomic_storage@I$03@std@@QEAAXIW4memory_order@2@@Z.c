/*
 * XREFs of ?store@?$_Atomic_storage@I$03@std@@QEAAXIW4memory_order@2@@Z @ 0x18036F55C
 * Callers:
 *     ?Release@?$produce_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAIXZ @ 0x18036E0B0 (-Release@-$produce_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collectio.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18036F56C (-unconditional_release_ref@-$com_ptr@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Atomic_storage<unsigned int,4>::store(_DWORD *a1)
{
  *a1 = 1;
}
