/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2b4d32ff2859258230c5ede45332d9dd___::Run @ 0x18042B470
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2b4d32ff2859258230c5ede45332d9dd_::operator() @ 0x180429274 (_lambda_2b4d32ff2859258230c5ede45332d9dd_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2b4d32ff2859258230c5ede45332d9dd___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_2b4d32ff2859258230c5ede45332d9dd_::operator()((__int64 **)(a1 + 16));
  *v1 = result;
  return result;
}
