/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2b4d32ff2859258230c5ede45332d9dd___::Run @ 0x1804200A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2b4d32ff2859258230c5ede45332d9dd_::operator() @ 0x18041DFD8 (_lambda_2b4d32ff2859258230c5ede45332d9dd_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2b4d32ff2859258230c5ede45332d9dd___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_2b4d32ff2859258230c5ede45332d9dd_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
