/*
 * XREFs of _lambda_7c875662d6abaa9f8d1386a75bd755d7_::_lambda_7c875662d6abaa9f8d1386a75bd755d7_ @ 0x18016DE1C
 * Callers:
 *     ?GetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@6@@Z @ 0x180172AA0 (-GetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@.c)
 *     ?SetConstantToDefaultAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@6@@Z @ 0x180174F30 (-SetConstantToDefaultAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_7c875662d6abaa9f8d1386a75bd755d7_::_lambda_7c875662d6abaa9f8d1386a75bd755d7_(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = *a4;
  return a1;
}
