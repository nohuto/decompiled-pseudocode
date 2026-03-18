/*
 * XREFs of IopLiveDumpAddProcesses @ 0x1405CC700
 * Callers:
 *     <none>
 * Callees:
 *     IoAddProcessesToDump @ 0x1405D4980 (IoAddProcessesToDump.c)
 */

__int64 __fastcall IopLiveDumpAddProcesses(__int64 a1, __int64 a2)
{
  return IoAddProcessesToDump(a2, IopLiveDumpAddProcessesCallback, a1);
}
