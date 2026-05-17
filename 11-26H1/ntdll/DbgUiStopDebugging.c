/*
 * XREFs of DbgUiStopDebugging @ 0x1801394C0
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x180139270 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgUiStopDebugging(__int64 a1)
{
  return ZwRemoveProcessDebug(a1, NtCurrentTeb()->DbgSsReserved[1]);
}
