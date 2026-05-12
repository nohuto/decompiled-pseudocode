/*
 * XREFs of sub_1400F56B4 @ 0x1400F56B4
 * Callers:
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 *     sub_1400F4DB8 @ 0x1400F4DB8 (sub_1400F4DB8.c)
 *     sub_1400F5264 @ 0x1400F5264 (sub_1400F5264.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     sub_1400F0F00 @ 0x1400F0F00 (sub_1400F0F00.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

int __fastcall sub_1400F56B4(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r15
  unsigned int v8; // r8d
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rbx
  char v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // eax
  char v17; // dl
  __int16 v18; // cx
  int result; // eax

  v4 = *(_QWORD *)(a1 + 88);
  if ( *(_BYTE *)(a2 + 2) == 40 && (v8 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = *(unsigned int *)(a2 + 4LL * v9 + 120);
      if ( (unsigned int)v10 >= 0x80 && (unsigned int)v10 < *(_DWORD *)(a2 + 16) )
      {
        v11 = a2 + v10;
        if ( *(_DWORD *)(a2 + v10) == 67 )
          break;
      }
      if ( ++v9 >= v8 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v11 = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 96);
  memset_0((void *)(v12 + 1577), 0, 0xFFFuLL);
  *(_WORD *)(v12 + 1576) = -4096;
  *(_WORD *)(v12 + 1580) = **(_WORD **)(a1 + 96);
  *(_BYTE *)(v12 + 1582) = 1;
  *(_BYTE *)(v12 + 1583) = a4;
  memset_0((void *)(v11 + 16), 0, 0x40uLL);
  *(_BYTE *)(v11 + 16) = 127;
  *(_DWORD *)(v11 + 60) = 8;
  *(_BYTE *)(v11 + 20) = 5;
  *(_WORD *)(v11 + 57) = 257;
  *(_BYTE *)(v11 + 59) = -23;
  v15 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 60) = 8;
  *(_QWORD *)(a2 + 64) = v15 + 1576;
  *(_DWORD *)(a2 + 24) = 128;
  *(_BYTE *)(v11 + 80) = 2;
  *(_WORD *)(v11 + 82) = 2;
  *(_WORD *)(v11 + 106) = *(_WORD *)(a1 + 136);
  if ( *(_WORD *)(a1 + 136) )
    sub_1400F0F00(a1);
  v16 = sub_1400E4050(a1, a2, v13, v14, 1, 0LL, 0LL, 0);
  v17 = v16;
  if ( v16 < 0 )
    return sub_1400A870C(
             v4,
             1,
             2,
             (__int64)L"Authentication send - failure failed",
             L"Status",
             v17,
             L"SrbStatus",
             *(_BYTE *)(a2 + 3),
             L"SCT",
             ((unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 9) & 7,
             L"SC",
             (unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 1,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0);
  if ( *(_BYTE *)(a2 + 3) != 1 )
    return sub_1400A870C(
             v4,
             1,
             2,
             (__int64)L"Authentication send - failure failed",
             L"Status",
             v17,
             L"SrbStatus",
             *(_BYTE *)(a2 + 3),
             L"SCT",
             ((unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 9) & 7,
             L"SC",
             (unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 1,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0);
  v18 = *(_WORD *)(v11 + 86);
  if ( (v18 & 0xE00) != 0 )
    return sub_1400A870C(
             v4,
             1,
             2,
             (__int64)L"Authentication send - failure failed",
             L"Status",
             v17,
             L"SrbStatus",
             *(_BYTE *)(a2 + 3),
             L"SCT",
             ((unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 9) & 7,
             L"SC",
             (unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 1,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0);
  result = 510;
  if ( (v18 & 0x1FE) != 0 )
    return sub_1400A870C(
             v4,
             1,
             2,
             (__int64)L"Authentication send - failure failed",
             L"Status",
             v17,
             L"SrbStatus",
             *(_BYTE *)(a2 + 3),
             L"SCT",
             ((unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 9) & 7,
             L"SC",
             (unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 1,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0,
             (void *)&dword_140149108,
             0);
  return result;
}
