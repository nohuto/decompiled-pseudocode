/*
 * XREFs of SetErrorInfo_0 @ 0x18009C93D
 * Callers:
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18009FCF4 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SetErrorInfo_0(ULONG dwReserved, IErrorInfo *perrinfo)
{
  return SetErrorInfo(dwReserved, perrinfo);
}
