/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_73e0e46f26126a9a397983762b808847___::Run @ 0x180431B70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_73e0e46f26126a9a397983762b808847_::operator() @ 0x18042D6D4 (_lambda_73e0e46f26126a9a397983762b808847_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_73e0e46f26126a9a397983762b808847___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_73e0e46f26126a9a397983762b808847_::operator()((_BYTE **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
