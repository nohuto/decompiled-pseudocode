/*
 * XREFs of _lambda_a408cc100a5b103155a70fabf7a2049b_::_lambda_a408cc100a5b103155a70fabf7a2049b_ @ 0x18016DE6C
 * Callers:
 *     ?SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x180174E20 (-SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_a408cc100a5b103155a70fabf7a2049b_::_lambda_a408cc100a5b103155a70fabf7a2049b_(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *a3;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a4 + 16);
  result = a1;
  *(_QWORD *)(a1 + 40) = *a5;
  return result;
}
