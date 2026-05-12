/*
 * XREFs of sub_1400F5264 @ 0x1400F5264
 * Callers:
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     sub_1400F0F00 @ 0x1400F0F00 (sub_1400F0F00.c)
 *     sub_1400F56B4 @ 0x1400F56B4 (sub_1400F56B4.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400F5264(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v4; // r12
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  char v11; // r14
  char v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // edx
  __int16 v16; // ax
  __int64 v17; // rbx
  char v18; // r9
  char v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8

  v4 = *(_QWORD *)(a1 + 88);
  if ( *(_BYTE *)(a2 + 2) == 40 && (v7 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(unsigned int *)(a2 + 4 * v8 + 120);
      if ( (unsigned int)v9 >= 0x80 && (unsigned int)v9 < *(_DWORD *)(a2 + 16) )
      {
        v10 = a2 + v9;
        if ( *(_DWORD *)(a2 + v9) == 67 )
          break;
      }
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v7 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v10 = 0LL;
  }
  memset_0((void *)(*(_QWORD *)(a1 + 96) + 1576LL), 0, 0x1000uLL);
  v11 = 64;
  memset_0((void *)(v10 + 16), 0, 0x40uLL);
  *(_BYTE *)(v10 + 16) = 127;
  *(_BYTE *)(v10 + 20) = 6;
  *(_WORD *)(v10 + 57) = 257;
  *(_BYTE *)(v10 + 59) = -23;
  *(_DWORD *)(v10 + 60) = 4096;
  v14 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 60) = 4096;
  *(_QWORD *)(a2 + 64) = v14 + 1576;
  *(_DWORD *)(a2 + 24) = 64;
  *(_BYTE *)(v10 + 80) = 2;
  *(_WORD *)(v10 + 82) = 1;
  *(_WORD *)(v10 + 106) = *(_WORD *)(a1 + 136);
  if ( *(_WORD *)(a1 + 136) )
    sub_1400F0F00(a1);
  v15 = sub_1400E4050(a1, a2, v12, v13, 1, 0LL, 0LL, 0);
  if ( v15 < 0 || *(_BYTE *)(a2 + 3) != 1 || (v16 = *(_WORD *)(v10 + 86), (v16 & 0xE00) != 0) || (v16 & 0x1FE) != 0 )
  {
    sub_1400A870C(
      v4,
      1,
      2,
      (__int64)L"Authentication receive - result1 failed",
      L"Status",
      v15,
      L"SrbStatus",
      *(_BYTE *)(a2 + 3),
      L"SCT",
      ((unsigned __int64)*(unsigned __int16 *)(v10 + 86) >> 9) & 7,
      L"SC",
      (unsigned __int64)*(unsigned __int16 *)(v10 + 86) >> 1,
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
  v17 = *(_QWORD *)(a1 + 96);
  v18 = *(_BYTE *)(v17 + 1576);
  if ( v18 )
  {
    if ( v18 != 1 )
      goto LABEL_27;
    if ( *(_BYTE *)(v17 + 1577) != 3 )
      goto LABEL_27;
    if ( *(_WORD *)(v17 + 1580) != *(_WORD *)v17 )
      goto LABEL_27;
    v19 = *(_BYTE *)(v17 + 1582);
    if ( !v19 )
      goto LABEL_27;
    switch ( *(_BYTE *)(v17 + 3) )
    {
      case 1:
        v11 = 32;
        break;
      case 2:
        v11 = 48;
        break;
      case 3:
        break;
      default:
        goto LABEL_27;
    }
    if ( v19 == v11 )
    {
      *a3 = *(_BYTE *)(v17 + 1584) == 1;
      return (unsigned int)v15;
    }
    goto LABEL_27;
  }
  if ( *(_BYTE *)(v17 + 1577) != 0xF1 )
  {
LABEL_27:
    sub_1400A870C(
      v4,
      1,
      2,
      (__int64)L"Authentication receive - invalid success1",
      L"AUTH_TYPE | AUTH_ID",
      *(_BYTE *)(v17 + 1577),
      L"T_ID | ExpectedTransactionId",
      *(_WORD *)v17,
      L"HL",
      *(_BYTE *)(v17 + 1582),
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    LOBYTE(v20) = 6;
    sub_1400F56B4(a1, a2, v21, v20);
    return (unsigned int)-1073741823;
  }
  sub_1400A870C(
    v4,
    1,
    2,
    (__int64)L"Authentication receive - failure1 received",
    L"ReasonCode",
    *(_BYTE *)(v17 + 1582),
    L"ReasonExplanation",
    *(_BYTE *)(v17 + 1583),
    &dword_140149108,
    0,
    &dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0);
  if ( *(_BYTE *)(v17 + 1582) != 1 || *(_BYTE *)(v17 + 1583) != 1 )
    return (unsigned int)-1073741823;
  return (unsigned int)-1073741715;
}
