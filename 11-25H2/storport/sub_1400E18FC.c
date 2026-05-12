/*
 * XREFs of sub_1400E18FC @ 0x1400E18FC
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400DF484 @ 0x1400DF484 (sub_1400DF484.c)
 *     sub_1400DFC54 @ 0x1400DFC54 (sub_1400DFC54.c)
 *     sub_1400E4544 @ 0x1400E4544 (sub_1400E4544.c)
 * Callees:
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     sub_140114538 @ 0x140114538 (sub_140114538.c)
 */

__int64 __fastcall sub_1400E18FC(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // r13
  __int64 v7; // rax
  char *v8; // rdi
  int v9; // ebp
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdx
  __int16 v17; // ax
  __int64 v18; // rcx
  const char *v19; // rbx
  int v21; // [rsp+C8h] [rbp-70h]
  int v22; // [rsp+D8h] [rbp-60h]
  int v23; // [rsp+E8h] [rbp-50h]
  char v24; // [rsp+108h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 128);
  v7 = sub_14007B110(a1, 0);
  v8 = (char *)v7;
  if ( v7 )
  {
    if ( *(_BYTE *)(v7 + 2) == 40 && (v10 = *(_DWORD *)(v7 + 56)) != 0 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = *(unsigned int *)(v7 + 4LL * v11 + 120);
        if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 < *(_DWORD *)(v7 + 16) )
        {
          v13 = v7 + v12;
          if ( *(_DWORD *)(v7 + v12) == 67 )
            break;
        }
        if ( ++v11 >= v10 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v13 = 0LL;
    }
    sub_140114538(a2, v13 + 16);
    *(_BYTE *)(v13 + 80) = 2;
    *(_WORD *)(v13 + 106) = 0;
    v9 = sub_1400E4050(*(_QWORD *)(a1 + 712), (_DWORD)v8, v14, v15, 1, 0LL, 0LL, 0);
    if ( v9 < 0 || v8[3] != 1 || (v17 = *(_WORD *)(v13 + 86), (v17 & 0xE00) != 0) || (v17 & 0x1FE) != 0 )
    {
      if ( (byte_1401694FA & 1) != 0 )
      {
        v18 = *(unsigned __int16 *)(v13 + 86);
        v19 = (const char *)&dword_140149108;
        if ( *(_QWORD *)(a1 + 752) )
          v19 = *(const char **)(a1 + 752);
        v24 = (unsigned __int16)v18 >> 1;
        LOWORD(v18) = (unsigned __int16)v18 >> 9;
        LOBYTE(v18) = v18 & 7;
        sub_1400DBC50(
          v18,
          v16,
          a1 + 841,
          *(_DWORD *)(v3 + 56),
          v3 + 1032,
          *(const wchar_t **)(v3 + 1016),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          0,
          *(_BYTE *)(a1 + 744),
          v19,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          "Get Property Command",
          "PropertyOffset",
          a2,
          byte_1401489C4,
          0,
          byte_1401489C4,
          0,
          byte_1401489C4,
          0,
          byte_1401489C4,
          0,
          byte_1401489C4,
          v21,
          byte_1401489C4,
          v22,
          byte_1401489C4,
          v23,
          v9,
          v8[3],
          v18,
          v24);
      }
      v9 = -1073741823;
    }
    else
    {
      *a3 = *(_QWORD *)(v13 + 96);
    }
    ExFreePoolWithTag(v8, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
