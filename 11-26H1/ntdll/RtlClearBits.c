/*
 * XREFs of RtlClearBits @ 0x1800941F0
 * Callers:
 *     LdrpInitializeTls @ 0x18009299C (LdrpInitializeTls.c)
 *     LdrpAcquireTlsIndex @ 0x180093AEC (LdrpAcquireTlsIndex.c)
 *     RtlTlsFree @ 0x180094120 (RtlTlsFree.c)
 *     RtlFindSetBitsAndClear @ 0x180140FA0 (RtlFindSetBitsAndClear.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x1801646A0 (RtlSetVolatileMemory.c)
 */

unsigned __int8 __fastcall RtlClearBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  unsigned __int8 *v5; // rdi
  __int64 v6; // rsi
  unsigned __int8 result; // al

  if ( a3 )
  {
    v3 = a2;
    v4 = a2 & 7;
    v5 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (v3 >> 3));
    v6 = a3;
    if ( (unsigned int)v4 + a3 > 8 )
    {
      if ( (_DWORD)v4 )
      {
        v6 = (unsigned int)v4 + a3 - 8;
        result = *v5 & byte_18018B198[v4];
        *v5++ = result;
      }
      if ( (unsigned int)v6 > 8 )
      {
        result = (unsigned __int8)RtlSetVolatileMemory(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
        v5 += (unsigned __int64)(unsigned int)v6 >> 3;
        v6 &= 7u;
      }
      if ( (_DWORD)v6 )
      {
        result = *v5 & byte_18017CAF8[v6];
        *v5 = result;
      }
    }
    else
    {
      *v5 &= ~(byte_18018B198[a3] << v4);
    }
  }
  return result;
}
