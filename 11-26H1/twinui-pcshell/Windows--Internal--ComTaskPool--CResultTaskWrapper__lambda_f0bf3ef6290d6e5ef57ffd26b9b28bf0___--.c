/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___::Run @ 0x180218990
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0_::operator() @ 0x1802189B4 (_lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
