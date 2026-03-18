/*
 * XREFs of IopPartialDumpAddProcessesCallback @ 0x1405D5F70
 * Callers:
 *     <none>
 * Callees:
 *     IoAddProcessThreadsToDump @ 0x1405D48DC (IoAddProcessThreadsToDump.c)
 */

__int64 __fastcall IopPartialDumpAddProcessesCallback(__int64 a1, __int64 a2)
{
  return IoAddProcessThreadsToDump(a1, a2);
}
