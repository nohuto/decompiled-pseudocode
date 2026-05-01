/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_68183e30dd74880fb14ba7e5e36f78e1___::Run @ 0x1804475C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_68183e30dd74880fb14ba7e5e36f78e1_::operator() @ 0x180445964 (_lambda_68183e30dd74880fb14ba7e5e36f78e1_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_68183e30dd74880fb14ba7e5e36f78e1___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_68183e30dd74880fb14ba7e5e36f78e1_::operator()((int **)(a1 + 16));
  *v1 = result;
  return result;
}
