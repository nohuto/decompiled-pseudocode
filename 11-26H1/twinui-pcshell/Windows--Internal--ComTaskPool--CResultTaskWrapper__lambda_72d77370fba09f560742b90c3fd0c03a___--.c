/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72d77370fba09f560742b90c3fd0c03a___::Run @ 0x1801E4B20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_72d77370fba09f560742b90c3fd0c03a_::operator() @ 0x1801E4B44 (_lambda_72d77370fba09f560742b90c3fd0c03a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72d77370fba09f560742b90c3fd0c03a___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_72d77370fba09f560742b90c3fd0c03a_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
