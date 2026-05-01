/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_558037198f8876ec04dcff1824824a48___::Run @ 0x18043DE50
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_558037198f8876ec04dcff1824824a48_::operator() @ 0x180439420 (_lambda_558037198f8876ec04dcff1824824a48_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_558037198f8876ec04dcff1824824a48___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_558037198f8876ec04dcff1824824a48_::operator()((_DWORD **)(a1 + 16));
  *v1 = result;
  return result;
}
