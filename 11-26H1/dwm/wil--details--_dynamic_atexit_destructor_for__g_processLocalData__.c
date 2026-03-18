/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x14000F920
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x14000A4D8 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

void wil::details::_dynamic_atexit_destructor_for__g_processLocalData__()
{
  if ( lpMem )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(lpMem);
}
