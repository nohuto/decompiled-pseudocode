/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1968860eb9e1fd4d28dfd691bb63a717___::Run @ 0x18043DCF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1968860eb9e1fd4d28dfd691bb63a717_::operator() @ 0x180438FCC (_lambda_1968860eb9e1fd4d28dfd691bb63a717_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1968860eb9e1fd4d28dfd691bb63a717___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_1968860eb9e1fd4d28dfd691bb63a717_::operator()((_QWORD **)(a1 + 16));
  *v1 = result;
  return result;
}
