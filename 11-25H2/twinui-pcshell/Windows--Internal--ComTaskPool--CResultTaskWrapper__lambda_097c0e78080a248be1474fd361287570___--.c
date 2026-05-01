/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_097c0e78080a248be1474fd361287570___::Run @ 0x180412B50
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_097c0e78080a248be1474fd361287570_::operator() @ 0x1804087C8 (_lambda_097c0e78080a248be1474fd361287570_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_097c0e78080a248be1474fd361287570___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_097c0e78080a248be1474fd361287570_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
