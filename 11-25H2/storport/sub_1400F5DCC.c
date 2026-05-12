/*
 * XREFs of sub_1400F5DCC @ 0x1400F5DCC
 * Callers:
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     sub_1400F0F00 @ 0x1400F0F00 (sub_1400F0F00.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400F5DCC(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rsi
  _WORD *v9; // rbx
  char v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // edx
  __int16 v14; // ax

  v2 = *(_QWORD *)(a1 + 88);
  if ( *(_BYTE *)(a2 + 2) == 40 && (v5 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = *(unsigned int *)(a2 + 4LL * v6 + 120);
      if ( (unsigned int)v7 >= 0x80 && (unsigned int)v7 < *(_DWORD *)(a2 + 16) )
      {
        v8 = a2 + v7;
        if ( *(_DWORD *)(a2 + v7) == 67 )
          break;
      }
      if ( ++v6 >= v5 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v8 = 0LL;
  }
  v9 = *(_WORD **)(a1 + 96);
  memset_0((char *)v9 + 1577, 0, 0xFFFuLL);
  v9[788] = 1025;
  v9[790] = **(_WORD **)(a1 + 96);
  memset_0((void *)(v8 + 16), 0, 0x40uLL);
  *(_BYTE *)(v8 + 16) = 127;
  *(_DWORD *)(v8 + 60) = 16;
  *(_BYTE *)(v8 + 20) = 5;
  *(_WORD *)(v8 + 57) = 257;
  *(_BYTE *)(v8 + 59) = -23;
  v12 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 60) = 16;
  *(_QWORD *)(a2 + 64) = v12 + 1576;
  *(_DWORD *)(a2 + 24) = 128;
  *(_BYTE *)(v8 + 80) = 2;
  *(_WORD *)(v8 + 82) = 2;
  *(_WORD *)(v8 + 106) = *(_WORD *)(a1 + 136);
  if ( *(_WORD *)(a1 + 136) )
    sub_1400F0F00(a1);
  v13 = sub_1400E4050(a1, a2, v10, v11, 1, 0LL, 0LL, 0);
  if ( v13 < 0 || *(_BYTE *)(a2 + 3) != 1 || (v14 = *(_WORD *)(v8 + 86), (v14 & 0xE00) != 0) || (v14 & 0x1FE) != 0 )
  {
    sub_1400A870C(
      v2,
      1,
      2,
      (__int64)L"Authentication send - success failed",
      L"Status",
      v13,
      L"SrbStatus",
      *(_BYTE *)(a2 + 3),
      L"SCT",
      ((unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 9) & 7,
      L"SC",
      (unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 1,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v13;
}
