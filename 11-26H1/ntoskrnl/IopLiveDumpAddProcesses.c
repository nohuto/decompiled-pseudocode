/*
 * XREFs of IopLiveDumpAddProcesses @ 0x1405CEF10
 * Callers:
 *     <none>
 * Callees:
 *     IoAddProcessesToDump @ 0x1405D7170 (IoAddProcessesToDump.c)
 */

__int64 __fastcall IopLiveDumpAddProcesses(__int64 a1, __int64 a2)
{
  return IoAddProcessesToDump(a2, IopLiveDumpAddProcessesCallback, a1);
}
