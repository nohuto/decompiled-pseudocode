/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f67690370c1e799c9f4a06aed1e0e595___::Run @ 0x18043E310
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f67690370c1e799c9f4a06aed1e0e595_::operator() @ 0x18043B2F8 (_lambda_f67690370c1e799c9f4a06aed1e0e595_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f67690370c1e799c9f4a06aed1e0e595___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_f67690370c1e799c9f4a06aed1e0e595_::operator()((_DWORD **)(a1 + 16));
  *v1 = result;
  return result;
}
