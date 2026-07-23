/*
 * XREFs of RtlClearBits @ 0x1800733C0
 * Callers:
 *     LdrpAcquireTlsIndex @ 0x180072CBC (LdrpAcquireTlsIndex.c)
 *     RtlTlsFree @ 0x1800732F0 (RtlTlsFree.c)
 *     LdrpInitializeTls @ 0x180073B08 (LdrpInitializeTls.c)
 *     RtlFindSetBitsAndClear @ 0x180140EA0 (RtlFindSetBitsAndClear.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x1801645A0 (RtlSetVolatileMemory.c)
 */

void __cdecl RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  _BYTE *v5; // rdi
  __int64 v6; // rsi

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear > 8 )
    {
      if ( (_DWORD)v4 )
      {
        v6 = (unsigned int)v4 + NumberToClear - 8;
        *v5++ &= byte_18018A108[v4];
      }
      if ( (unsigned int)v6 > 8 )
      {
        RtlSetVolatileMemory(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
        v5 += (unsigned __int64)(unsigned int)v6 >> 3;
        v6 &= 7u;
      }
      if ( (_DWORD)v6 )
        *v5 &= byte_18017B818[v6];
    }
    else
    {
      *v5 &= ~(byte_18018A108[NumberToClear] << v4);
    }
  }
}
