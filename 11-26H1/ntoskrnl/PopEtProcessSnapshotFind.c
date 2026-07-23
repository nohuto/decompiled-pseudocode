/*
 * XREFs of PopEtProcessSnapshotFind @ 0x1409CCB60
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1409CC994 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopEtProcessSnapshotFind(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // rsi
  __int64 v4; // r9
  int v5; // r11d
  __int64 v6; // rbx
  __int64 v7; // r10
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v11; // [rsp+8h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = *(_DWORD *)(v1 + 68) >> 5;
  v6 = -1LL << (*(_BYTE *)(v1 + 68) & 0x1F);
  v7 = v6 & v3;
  if ( v5 )
  {
    v11 = v6 & v3;
    v8 = (_QWORD *)(*(_QWORD *)(v1 + 72)
                  + 8LL
                  * ((v5 - 1) & (HIBYTE(v11)
                               - 877075889
                               + 442596621 * (unsigned __int8)v7
                               + 37
                               * (BYTE6(v11)
                                + 37
                                * (BYTE5(v11)
                                 + 37
                                 * (BYTE4(v11) + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (unsigned int)BYTE1(v11)))))))));
    while ( 1 )
    {
      v9 = (_QWORD *)*v8;
      v8 = v9;
      if ( ((unsigned __int8)v9 & 1) != 0 )
        break;
      if ( v7 == (v6 & v9[1]) )
      {
        if ( !v9 )
          break;
        return v9;
      }
    }
  }
  if ( (*(_DWORD *)(v1 + 644) & 1) == 0 && *(_DWORD *)a1 != 1 && *(_DWORD *)(*(_QWORD *)(v3 + 1640) + 476LL) > 1u )
    ++*(_DWORD *)(v1 + 616);
  return (_QWORD *)v4;
}
