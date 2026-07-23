/*
 * XREFs of IPT_TRACING_ENABLED @ 0x140407AE0
 * Callers:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 * Callees:
 *     <none>
 */

char __fastcall IPT_TRACING_ENABLED(__int64 a1, __int16 a2)
{
  __int64 i; // r10

  if ( (*(_DWORD *)(a1 + 816) & 0x4000000) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)(a1 + 1080) + 24LL); i = (unsigned int)(i + 1) )
    {
      if ( *(_WORD *)(*(_QWORD *)(a1 + 1080) + 2 * i + 28) == a2 )
        return 1;
    }
  }
  return 0;
}
