/*
 * XREFs of NtQueueApcThread @ 0x140A80790
 * Callers:
 *     DifNtQueueApcThreadWrapper @ 0x140687280 (DifNtQueueApcThreadWrapper.c)
 * Callees:
 *     NtQueueApcThreadEx2 @ 0x140A80820 (NtQueueApcThreadEx2.c)
 */

__int64 __fastcall NtQueueApcThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return NtQueueApcThreadEx2(a1, 0LL, 0LL, a2, a3, a4, a5);
}
