/*
 * XREFs of _lambda_b07e28b8d9a43b43078b009fd4c08247_::_lambda_b07e28b8d9a43b43078b009fd4c08247_ @ 0x18016DE08
 * Callers:
 *     ?GetConstantsForInputTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@6@@Z @ 0x180172B60 (-GetConstantsForInputTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Inter.c)
 *     ?SetAllConstantsForInputTypeToDefaultAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAPEAUIAsyncAction@Foundation@6@@Z @ 0x180174D90 (-SetAllConstantsForInputTypeToDefaultAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_b07e28b8d9a43b43078b009fd4c08247_::_lambda_b07e28b8d9a43b43078b009fd4c08247_(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *a3;
  return a1;
}
