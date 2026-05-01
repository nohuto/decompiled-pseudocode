/*
 * XREFs of GetLastError_0 @ 0x1802CA3BB
 * Callers:
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802D9744 (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetLastError_0()
{
  return GetLastError();
}
