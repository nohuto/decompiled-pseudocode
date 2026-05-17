/*
 * XREFs of DbgUiContinue @ 0x18010DA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgUiContinue(__int64 a1, unsigned int a2)
{
  return NtDebugContinue(NtCurrentTeb()->DbgSsReserved[1], a1, a2);
}
