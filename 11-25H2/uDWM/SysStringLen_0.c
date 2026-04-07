/*
 * XREFs of SysStringLen_0 @ 0x18009C949
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x18009FA50 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D5268 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
UINT __stdcall SysStringLen_0(BSTR pbstr)
{
  return SysStringLen(pbstr);
}
