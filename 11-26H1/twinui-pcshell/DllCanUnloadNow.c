/*
 * XREFs of DllCanUnloadNow @ 0x180161A70
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
