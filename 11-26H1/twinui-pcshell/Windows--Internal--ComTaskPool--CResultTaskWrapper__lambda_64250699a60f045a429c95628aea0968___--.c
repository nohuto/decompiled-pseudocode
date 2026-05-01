/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_64250699a60f045a429c95628aea0968___::Run @ 0x18043DE80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_64250699a60f045a429c95628aea0968_::operator() @ 0x1804394F4 (_lambda_64250699a60f045a429c95628aea0968_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_64250699a60f045a429c95628aea0968___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 40);
  result = lambda_64250699a60f045a429c95628aea0968_::operator()((_QWORD **)(a1 + 16));
  *v1 = result;
  return result;
}
