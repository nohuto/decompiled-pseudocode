/*
 * XREFs of GetErrorInfo_0 @ 0x18009C96D
 * Callers:
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAXAEBUslim_source_location@impl@2@@Z @ 0x1800D413C (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAXAEBUslim_source_location@impl@2@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D5268 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall GetErrorInfo_0(ULONG dwReserved, IErrorInfo **pperrinfo)
{
  return GetErrorInfo(dwReserved, pperrinfo);
}
