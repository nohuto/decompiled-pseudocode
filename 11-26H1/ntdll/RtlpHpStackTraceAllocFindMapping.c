/*
 * XREFs of RtlpHpStackTraceAllocFindMapping @ 0x18014F640
 * Callers:
 *     RtlpHpStackTraceAllocRemove @ 0x18014F6F8 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014FAD0 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlpHpStackTraceAllocFindMapping(__int64 a1, __int64 a2)
{
  int v2; // r11d
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v9; // [rsp+8h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 20) >> 5;
  v3 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v4 = 0LL;
  v5 = a2 & v3;
  if ( v2 )
  {
    v9 = a2 & v3;
    v6 = (_QWORD *)(*(_QWORD *)(a1 + 24)
                  + 8LL
                  * ((v2 - 1) & (HIBYTE(v9)
                               + 37
                               * (BYTE6(v9)
                                + 37
                                * (BYTE5(v9)
                                 + 37
                                 * (BYTE4(v9)
                                  + 37
                                  * (BYTE3(v9)
                                   + 374026047
                                   + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * (unsigned int)(unsigned __int8)v5)))))))));
    while ( 1 )
    {
      v7 = (_QWORD *)*v6;
      v6 = v7;
      if ( ((unsigned __int8)v7 & 1) != 0 )
        break;
      if ( v5 == (v3 & v7[1]) )
        return v7;
    }
  }
  return (_QWORD *)v4;
}
