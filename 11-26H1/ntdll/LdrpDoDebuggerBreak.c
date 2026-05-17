/*
 * XREFs of LdrpDoDebuggerBreak @ 0x180122678
 * Callers:
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 */

__int64 LdrpDoDebuggerBreak()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  result = ZwQueryInformationThread(-2LL, 17LL, &v1, 1LL, 0LL);
  if ( (int)result >= 0 && !v1 )
    __debugbreak();
  return result;
}
