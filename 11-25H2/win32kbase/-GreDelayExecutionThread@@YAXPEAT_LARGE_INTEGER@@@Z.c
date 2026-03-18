/*
 * XREFs of ?GreDelayExecutionThread@@YAXPEAT_LARGE_INTEGER@@@Z @ 0x140152D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreDelayExecutionThread(PLARGE_INTEGER Interval)
{
  KeDelayExecutionThread(0, 0, Interval);
}
