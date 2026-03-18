/*
 * XREFs of ExIsSafeWorkItem @ 0x140540420
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1403F7300 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_140540BD0;
}
