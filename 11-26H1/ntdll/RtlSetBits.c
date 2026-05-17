/*
 * XREFs of RtlSetBits @ 0x180092430
 * Callers:
 *     RtlpValidateRange @ 0x1800908B4 (RtlpValidateRange.c)
 *     LdrpInitializeTls @ 0x18009299C (LdrpInitializeTls.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x1801646A0 (RtlSetVolatileMemory.c)
 */

void __fastcall RtlSetBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  __int64 v6; // rdi
  char v7; // al

  if ( a3 )
  {
    v3 = a2;
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (v3 >> 3));
    v6 = a3;
    if ( (unsigned int)v4 + a3 <= 8 )
    {
      v7 = byte_18018B198[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + a3 - 8;
      *v5++ |= byte_18017CAF8[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      RtlSetVolatileMemory(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_18018B198[v6];
      goto LABEL_4;
    }
  }
}
