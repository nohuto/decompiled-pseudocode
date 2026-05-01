/*
 * XREFs of DllCanUnloadNow @ 0x1801F07B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall DllCanUnloadNow()
{
  return WINRT_CanUnloadNow();
}
