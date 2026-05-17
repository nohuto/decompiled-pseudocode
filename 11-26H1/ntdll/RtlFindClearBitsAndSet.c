/*
 * XREFs of RtlFindClearBitsAndSet @ 0x180093C70
 * Callers:
 *     RtlTlsAlloc @ 0x1800939E0 (RtlTlsAlloc.c)
 *     LdrpAcquireTlsIndex @ 0x180093AEC (LdrpAcquireTlsIndex.c)
 * Callees:
 *     RtlFindClearBits @ 0x180093D40 (RtlFindClearBits.c)
 *     RtlSetVolatileMemory @ 0x1801646A0 (RtlSetVolatileMemory.c)
 */

__int64 __fastcall RtlFindClearBitsAndSet(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int ClearBits; // ebp
  __int64 v5; // rcx
  _BYTE *v6; // rsi
  char v7; // al

  v2 = a2;
  ClearBits = RtlFindClearBits();
  if ( ClearBits != -1 && (_DWORD)v2 )
  {
    v5 = ClearBits & 7;
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 8) + ((unsigned __int64)ClearBits >> 3));
    if ( (unsigned int)(v5 + v2) <= 8 )
    {
      v7 = byte_18018B198[v2] << v5;
LABEL_5:
      *v6 |= v7;
      return ClearBits;
    }
    if ( (ClearBits & 7) != 0 )
    {
      v2 = (unsigned int)(v5 + v2 - 8);
      *v6++ |= byte_18017CAF8[v5];
    }
    if ( (unsigned int)v2 > 8 )
    {
      RtlSetVolatileMemory(v6, 255, (unsigned __int64)(unsigned int)v2 >> 3);
      v6 += (unsigned __int64)(unsigned int)v2 >> 3;
      v2 &= 7u;
    }
    if ( (_DWORD)v2 )
    {
      v7 = byte_18018B198[v2];
      goto LABEL_5;
    }
  }
  return ClearBits;
}
