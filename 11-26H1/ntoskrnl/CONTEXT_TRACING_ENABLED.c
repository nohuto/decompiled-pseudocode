/*
 * XREFs of CONTEXT_TRACING_ENABLED @ 0x140407B30
 * Callers:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 * Callees:
 *     <none>
 */

char __fastcall CONTEXT_TRACING_ENABLED(__int64 a1, __int16 a2)
{
  __int64 i; // r8

  if ( (*(_DWORD *)(a1 + 820) & 2) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 1284); i = (unsigned int)(i + 1) )
    {
      if ( *(_WORD *)(a1 + 2 * i + 1288) == a2 )
        return 1;
    }
  }
  return 0;
}
