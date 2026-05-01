/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_909b11586af9f9b22b39a9a889554953___::Run @ 0x180447680
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_909b11586af9f9b22b39a9a889554953_::operator() @ 0x180445D7C (_lambda_909b11586af9f9b22b39a9a889554953_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_909b11586af9f9b22b39a9a889554953___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_909b11586af9f9b22b39a9a889554953_::operator()((__int64 **)(a1 + 16));
  *v1 = result;
  return result;
}
