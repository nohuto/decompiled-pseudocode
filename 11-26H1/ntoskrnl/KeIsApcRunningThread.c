/*
 * XREFs of KeIsApcRunningThread @ 0x14046BB30
 * Callers:
 *     VerifierKeIsApcRunningThread @ 0x140C338F0 (VerifierKeIsApcRunningThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsApcRunningThread(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 192);
}
