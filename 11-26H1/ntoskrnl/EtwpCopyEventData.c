/*
 * XREFs of EtwpCopyEventData @ 0x140407380
 * Callers:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall EtwpCopyEventData(char *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int i; // ebx
  __int64 v9; // rsi

  for ( i = 0; ; ++i )
  {
    if ( i >= a3 )
      return 0LL;
    v9 = *(unsigned int *)(a2 + 16LL * i + 8);
    if ( (unsigned int)v9 > a4 )
      break;
    memmove(a1, *(const void **)(a2 + 16LL * i), (unsigned int)v9);
    a1 += v9;
    a4 -= v9;
  }
  return 3221225476LL;
}
