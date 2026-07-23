/*
 * XREFs of WmiTraceMessageVa @ 0x1404F3590
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x1402179E0 (EtwpTraceMessageVa.c)
 */

__int64 __fastcall WmiTraceMessageVa(__int64 a1, __int64 a2, _DWORD *a3, unsigned __int16 a4, __int64 a5)
{
  return EtwpTraceMessageVa(a1, a2, a3, a4, a5, 0);
}
