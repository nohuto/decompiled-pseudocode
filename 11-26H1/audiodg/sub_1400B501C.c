/*
 * XREFs of sub_1400B501C @ 0x1400B501C
 * Callers:
 *     sub_140070EE0 @ 0x140070EE0 (sub_140070EE0.c)
 *     sub_140072820 @ 0x140072820 (sub_140072820.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_1400B501C(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  _QWORD v5[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1400B7008 >= 4 )
  {
    memset(v5, 0, 80);
    HIDWORD(v5[5]) = 0x20000;
    LOWORD(v5[0]) = 80;
    v5[6] = 0LL;
    LODWORD(v5[7]) = 0;
    *(_OWORD *)&v5[3] = xmmword_1400F7020;
    BYTE5(v5[0]) = 4;
    BYTE4(v5[0]) = a4;
    return EtwLogTraceEvent(TraceHandle, v5);
  }
  return result;
}
