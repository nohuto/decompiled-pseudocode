/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1c691449c5167e3292e0cc06d01cfa4b___::Run @ 0x18043DD20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1c691449c5167e3292e0cc06d01cfa4b_::operator() @ 0x180439300 (_lambda_1c691449c5167e3292e0cc06d01cfa4b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1c691449c5167e3292e0cc06d01cfa4b___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_1c691449c5167e3292e0cc06d01cfa4b_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
