/*
 * XREFs of ExIsSafeWorkItem @ 0x1405428A0
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1403F0CB0 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_140543050;
}
