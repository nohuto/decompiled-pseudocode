/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800119B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 wil::details::_dynamic_atexit_destructor_for__g_processLocalData__()
{
  __int64 result; // rax

  if ( qword_18002F240 )
    return wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(qword_18002F240);
  return result;
}
