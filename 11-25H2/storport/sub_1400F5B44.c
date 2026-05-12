/*
 * XREFs of sub_1400F5B44 @ 0x1400F5B44
 * Callers:
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 * Callees:
 *     sub_1400865A0 @ 0x1400865A0 (sub_1400865A0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     sub_1400EB640 @ 0x1400EB640 (sub_1400EB640.c)
 *     sub_1400F0F00 @ 0x1400F0F00 (sub_1400F0F00.c)
 *     sub_1401141CC @ 0x1401141CC (sub_1401141CC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400F5B44(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v7; // rdi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rsi
  char v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // rax
  __int16 v19; // ax
  int v21; // [rsp+E0h] [rbp+18h] BYREF

  LOWORD(v21) = a3;
  v4 = *(_QWORD *)(a1 + 88);
  v5 = a1 + 96;
  v7 = a2;
  v21 = 0;
  if ( *(_QWORD *)(v4 + 1672)
    && (v9 = sub_1400EB640(v4), a2 = *(_QWORD *)v5, *(_DWORD *)(*(_QWORD *)v5 + 12LL) = v9, *(_QWORD *)(v4 + 1672))
    || *(_BYTE *)(*(_QWORD *)v5 + 2LL) )
  {
    v10 = 0LL;
    switch ( *(_BYTE *)(*(_QWORD *)v5 + 3LL) )
    {
      case 1:
        v10 = 32LL;
        break;
      case 2:
        v10 = 48LL;
        break;
      case 3:
        v10 = 64LL;
        break;
    }
    v11 = sub_1400865A0(v10, v10, (void *)(*(_QWORD *)v5 + 1320LL));
    a2 = (unsigned int)v11;
    if ( v11 < 0 )
      return (unsigned int)a2;
    *(_BYTE *)(*(_QWORD *)v5 + 5LL) |= 1u;
  }
  if ( *(_BYTE *)(v7 + 2) == 40 && (v12 = *(_DWORD *)(v7 + 56)) != 0 )
  {
    v13 = 0;
    while ( 1 )
    {
      a2 = *(unsigned int *)(v7 + 4LL * v13 + 120);
      if ( (unsigned int)a2 >= 0x80 && (unsigned int)a2 < *(_DWORD *)(v7 + 16) )
      {
        v14 = v7 + a2;
        if ( *(_DWORD *)(v7 + a2) == 67 )
          break;
      }
      if ( ++v13 >= v12 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v14 = 0LL;
  }
  sub_1401141CC(a1, a2, a4, &v21);
  memset_0((void *)(v14 + 16), 0, 0x40uLL);
  v17 = v21;
  *(_DWORD *)(v14 + 60) = v21;
  *(_BYTE *)(v14 + 16) = 127;
  *(_BYTE *)(v14 + 20) = 5;
  *(_WORD *)(v14 + 57) = 257;
  *(_BYTE *)(v14 + 59) = -23;
  v18 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(v7 + 60) = v17;
  *(_QWORD *)(v7 + 64) = v18 + 1576;
  *(_DWORD *)(v7 + 24) = 128;
  *(_BYTE *)(v14 + 80) = 2;
  *(_WORD *)(v14 + 82) = 2;
  *(_WORD *)(v14 + 106) = *(_WORD *)(a1 + 136);
  if ( *(_WORD *)(a1 + 136) )
    sub_1400F0F00(a1);
  LODWORD(a2) = sub_1400E4050(a1, v7, v15, v16, 1, 0LL, 0LL, 0);
  if ( (int)a2 < 0 || *(_BYTE *)(v7 + 3) != 1 || (v19 = *(_WORD *)(v14 + 86), (v19 & 0xE00) != 0) || (v19 & 0x1FE) != 0 )
  {
    sub_1400A870C(
      v4,
      1,
      2,
      (__int64)L"Authentication send - reply failed",
      L"Status",
      a2,
      L"SrbStatus",
      *(_BYTE *)(v7 + 3),
      L"SCT",
      ((unsigned __int64)*(unsigned __int16 *)(v14 + 86) >> 9) & 7,
      L"SC",
      (unsigned __int64)*(unsigned __int16 *)(v14 + 86) >> 1,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    LODWORD(a2) = -1073741823;
  }
  return (unsigned int)a2;
}
