/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___::Run @ 0x180226B10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0_::operator() @ 0x180226B38 (_lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
