/*
 * XREFs of KiQueryDpcRuntimeHistory @ 0x140411F20
 * Callers:
 *     KiTryLocalThreadSchedule @ 0x140238D30 (KiTryLocalThreadSchedule.c)
 * Callees:
 *     <none>
 */

char __fastcall KiQueryDpcRuntimeHistory(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r10
  unsigned int v5; // r11d
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned int v8; // r11d
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  char result; // al

  v3 = *(_QWORD *)(a1 + 14352);
  if ( !v3 )
    return 0;
  v5 = *(_DWORD *)(v3 + 4);
  v6 = -1LL << (v5 & 0x1F);
  v8 = v5 >> 5;
  v9 = (a2 & (unsigned __int64)v6) >> 56;
  v10 = (a2 & (unsigned __int64)v6) >> 48;
  v11 = (a2 & (unsigned __int64)v6) >> 40;
  v7 = a2 & v6;
  v12 = (a2 & (unsigned __int64)v6) >> 32;
  v13 = (a2 & (unsigned __int64)v6) >> 24;
  v14 = (a2 & (unsigned __int64)v6) >> 16;
  if ( v8 )
  {
    v15 = (_QWORD *)(*(_QWORD *)(v3 + 8)
                   + 8LL
                   * ((v8 - 1) & (442596621 * (unsigned __int8)v7
                                - 877075889
                                + (_DWORD)v9
                                + 37
                                * ((unsigned __int8)v10
                                 + 37
                                 * ((unsigned __int8)v11
                                  + 37
                                  * ((unsigned __int8)v12
                                   + 37 * ((unsigned __int8)v13 + 37 * ((unsigned __int8)v14 + 37 * BYTE1(v7)))))))));
    while ( 1 )
    {
      v16 = (_QWORD *)*v15;
      v15 = v16;
      if ( ((unsigned __int8)v16 & 1) != 0 )
        break;
      if ( v7 == (v6 & v16[1]) )
      {
        if ( !v16 )
          return 0;
        result = 1;
        *a3 = v16[2];
        return result;
      }
    }
  }
  return 0;
}
