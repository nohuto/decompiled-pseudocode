/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1c691449c5167e3292e0cc06d01cfa4b___::Run @ 0x1804319B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1c691449c5167e3292e0cc06d01cfa4b_::operator() @ 0x18042D0D8 (_lambda_1c691449c5167e3292e0cc06d01cfa4b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1c691449c5167e3292e0cc06d01cfa4b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1c691449c5167e3292e0cc06d01cfa4b_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
