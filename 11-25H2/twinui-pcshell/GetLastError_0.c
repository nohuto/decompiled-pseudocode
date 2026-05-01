/*
 * XREFs of GetLastError_0 @ 0x1802D3498
 * Callers:
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802E097C (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetLastError_0()
{
  return GetLastError();
}
