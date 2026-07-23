/*
 * XREFs of RtlFindClearBitsAndSet @ 0x180072E40
 * Callers:
 *     RtlTlsAlloc @ 0x180072BB0 (RtlTlsAlloc.c)
 *     LdrpAcquireTlsIndex @ 0x180072CBC (LdrpAcquireTlsIndex.c)
 * Callees:
 *     RtlFindClearBits @ 0x180072F10 (RtlFindClearBits.c)
 *     RtlSetVolatileMemory @ 0x1801645A0 (RtlSetVolatileMemory.c)
 */

ULONG __cdecl RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  __int64 v3; // rbx
  ULONG ClearBits; // ebp
  __int64 v6; // rcx
  _BYTE *v7; // rsi
  char v8; // al

  v3 = NumberToFind;
  ClearBits = RtlFindClearBits(BitMapHeader, NumberToFind, HintIndex);
  if ( ClearBits != -1 && (_DWORD)v3 )
  {
    v6 = ClearBits & 7;
    v7 = (char *)BitMapHeader->Buffer + ((unsigned __int64)ClearBits >> 3);
    if ( (unsigned int)(v6 + v3) <= 8 )
    {
      v8 = byte_18018A108[v3] << v6;
LABEL_5:
      *v7 |= v8;
      return ClearBits;
    }
    if ( (ClearBits & 7) != 0 )
    {
      v3 = (unsigned int)(v6 + v3 - 8);
      *v7++ |= byte_18017B818[v6];
    }
    if ( (unsigned int)v3 > 8 )
    {
      RtlSetVolatileMemory(v7, 255, (unsigned __int64)(unsigned int)v3 >> 3);
      v7 += (unsigned __int64)(unsigned int)v3 >> 3;
      v3 &= 7u;
    }
    if ( (_DWORD)v3 )
    {
      v8 = byte_18018A108[v3];
      goto LABEL_5;
    }
  }
  return ClearBits;
}
