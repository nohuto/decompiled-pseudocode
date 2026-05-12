/*
 * XREFs of sub_1400E56F0 @ 0x1400E56F0
 * Callers:
 *     sub_1400DD768 @ 0x1400DD768 (sub_1400DD768.c)
 *     sub_1400DF484 @ 0x1400DF484 (sub_1400DF484.c)
 *     sub_1400DFC54 @ 0x1400DFC54 (sub_1400DFC54.c)
 * Callees:
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400E56F0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v6; // rax
  char *v7; // rdi
  int v8; // ebx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rsi
  char v13; // r8
  __int64 v14; // r9
  __int16 v15; // ax
  __int64 v16; // rcx
  const char *v17; // r11
  int v19; // [rsp+C8h] [rbp-60h]
  int v20; // [rsp+D8h] [rbp-50h]
  int v21; // [rsp+E8h] [rbp-40h]
  char v22; // [rsp+108h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 128);
  v6 = sub_14007B110(a1, 0);
  v7 = (char *)v6;
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 2) == 40 && (v9 = *(_DWORD *)(v6 + 56)) != 0 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = *(unsigned int *)(v6 + 4LL * v10 + 120);
        if ( (unsigned int)v11 >= 0x80 && (unsigned int)v11 < *(_DWORD *)(v6 + 16) )
        {
          v12 = v6 + v11;
          if ( *(_DWORD *)(v6 + v11) == 67 )
            break;
        }
        if ( ++v10 >= v9 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v12 = 0LL;
    }
    memset_0((void *)(v12 + 16), 0, 0x40uLL);
    *(_BYTE *)(v12 + 56) &= 0xF8u;
    *(_BYTE *)(v12 + 16) = 127;
    *(_BYTE *)(v12 + 20) = 0;
    *(_DWORD *)(v12 + 60) = 20;
    *(_DWORD *)(v12 + 64) = a3;
    *(_BYTE *)(v12 + 80) = 2;
    *(_WORD *)(v12 + 106) = 0;
    v8 = sub_1400E4050(*(_QWORD *)(a1 + 712), (__int64)v7, v13, v14, 1, 0LL, 0LL, 0);
    if ( v8 < 0 || v7[3] != 1 || (v15 = *(_WORD *)(v12 + 86), (v15 & 0xE00) != 0) || (v15 & 0x1FE) != 0 )
    {
      if ( (byte_1401694FA & 1) != 0 )
      {
        v16 = *(unsigned __int16 *)(v12 + 86);
        v17 = (const char *)&dword_140149108;
        if ( *(_QWORD *)(a1 + 752) )
          v17 = *(const char **)(a1 + 752);
        v22 = (unsigned __int16)v16 >> 1;
        LOWORD(v16) = (unsigned __int16)v16 >> 9;
        LOBYTE(v16) = v16 & 7;
        sub_1400DBC50(
          v16,
          a1 + 841,
          a1 + 800,
          *(_DWORD *)(v3 + 56),
          v3 + 1032,
          *(const wchar_t **)(v3 + 1016),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          0,
          *(_BYTE *)(a1 + 744),
          v17,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          "Set Property Command",
          "PropertyOffset",
          20,
          byte_1401489C4,
          0,
          byte_1401489C4,
          0,
          byte_1401489C4,
          0,
          byte_1401489C4,
          0,
          byte_1401489C4,
          v19,
          byte_1401489C4,
          v20,
          byte_1401489C4,
          v21,
          v8,
          v7[3],
          v16,
          v22);
      }
      v8 = -1073741823;
    }
    ExFreePoolWithTag(v7, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
