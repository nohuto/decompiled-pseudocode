/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_20c9707ab79eec934759cb2bec9fa53e___::Run @ 0x18043ADE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_20c9707ab79eec934759cb2bec9fa53e_::operator() @ 0x180438808 (_lambda_20c9707ab79eec934759cb2bec9fa53e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_20c9707ab79eec934759cb2bec9fa53e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_20c9707ab79eec934759cb2bec9fa53e_::operator()((UwpWindowWrapperBase **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
