/*
 * XREFs of sub_14013A898 @ 0x14013A898
 * Callers:
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     sub_140138A04 @ 0x140138A04 (sub_140138A04.c)
 * Callees:
 *     sub_140085D5C @ 0x140085D5C (sub_140085D5C.c)
 *     sub_140135DCC @ 0x140135DCC (sub_140135DCC.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_14013A76C @ 0x14013A76C (sub_14013A76C.c)
 */

__int64 __fastcall sub_14013A898(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // si
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax

  v6 = 0;
  while ( 1 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)a2 = 1;
    *(_WORD *)(a2 + 24) = *(_WORD *)(a1 + 28);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(a2 + 16) = a3;
    *(_QWORD *)(a1 + 16) = a2;
    *(_DWORD *)a2 = 2;
    v7 = sub_14013A76C((int **)a1, a2);
    v8 = v7;
    if ( v7 >= 0 )
      break;
    v9 = sub_1401361CC(a1, (volatile __int32 *)a2, v7);
    *(_QWORD *)(a1 + 16) = 0LL;
    v8 = v9;
    if ( v9 == -1073741309 )
      goto LABEL_6;
    if ( v9 == -2147483631 )
    {
      sub_140085D5C(*(int **)a1, "TcglibpOpenSession-failed with device busy", a3, v6 == 0, 0LL, 0LL);
      sub_140135DCC(a1, a2);
LABEL_6:
      if ( v6 )
        return v8;
      v6 = 1;
    }
    else if ( !v6 )
    {
      return v8;
    }
  }
  _InterlockedIncrement(&dword_140168E20);
  return v8;
}
