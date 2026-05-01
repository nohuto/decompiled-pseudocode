/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_68183e30dd74880fb14ba7e5e36f78e1___::Run @ 0x18043AF60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_68183e30dd74880fb14ba7e5e36f78e1_::operator() @ 0x18043939C (_lambda_68183e30dd74880fb14ba7e5e36f78e1_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_68183e30dd74880fb14ba7e5e36f78e1___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_68183e30dd74880fb14ba7e5e36f78e1_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
