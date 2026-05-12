/*
 * XREFs of sub_1400E1630 @ 0x1400E1630
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400E4544 @ 0x1400E4544 (sub_1400E4544.c)
 * Callees:
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400E1630(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11)
{
  __int64 v13; // rax
  char *v14; // rsi
  int v15; // r14d
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rbp
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int16 v24; // ax
  const char *v25; // rdi
  int v27; // [rsp+C8h] [rbp-70h]
  int v28; // [rsp+D8h] [rbp-60h]
  int v29; // [rsp+E8h] [rbp-50h]
  __int64 v30; // [rsp+140h] [rbp+8h]

  v30 = *(_QWORD *)(a1 + 128);
  v13 = sub_14007B110(a1, 0);
  v14 = (char *)v13;
  if ( v13 )
  {
    if ( *(_BYTE *)(v13 + 2) == 40 && (v16 = *(_DWORD *)(v13 + 56)) != 0 )
    {
      v17 = 0;
      while ( 1 )
      {
        v18 = *(unsigned int *)(v13 + 4LL * v17 + 120);
        if ( (unsigned int)v18 >= 0x80 && (unsigned int)v18 < *(_DWORD *)(v13 + 16) )
        {
          v19 = v13 + v18;
          if ( *(_DWORD *)(v13 + v18) == 67 )
            break;
        }
        if ( ++v17 >= v16 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v19 = 0LL;
    }
    memset_0((void *)(v19 + 16), 0, 0x40uLL);
    *(_BYTE *)(v19 + 56) = a3;
    *(_DWORD *)(v19 + 56) &= 0xFFFFF8FF;
    *(_DWORD *)(v19 + 60) = a5;
    *(_BYTE *)(v19 + 16) = 10;
    *(_DWORD *)(v19 + 20) = 0;
    *(_QWORD *)(v19 + 64) = 0LL;
    *(_QWORD *)(v19 + 72) = 0LL;
    *(_BYTE *)(v19 + 80) = 1;
    *(_WORD *)(v19 + 106) = 0;
    v15 = sub_1400E4050(*(_QWORD *)(a1 + 712), (_DWORD)v14, v20, v21, 1, 0LL, 0LL, 0);
    if ( v15 < 0 || v14[3] != 1 || (v24 = *(_WORD *)(v19 + 86), (v24 & 0xE00) != 0) || (v24 & 0x1FE) != 0 )
    {
      if ( (byte_1401694FA & 1) != 0 )
      {
        v25 = (const char *)&dword_140149108;
        if ( *(_QWORD *)(a1 + 752) )
          v25 = *(const char **)(a1 + 752);
        sub_1400DBC50(
          0LL,
          v22,
          v23,
          *(_DWORD *)(v30 + 56),
          v30 + 1032,
          *(const wchar_t **)(v30 + 1016),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          0,
          *(_BYTE *)(a1 + 744),
          v25,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          "Get Feature Command",
          "NamespaceId",
          0,
          "FeatureId",
          a3,
          "Select",
          0,
          "Dword11",
          a5,
          "Dword12",
          0,
          "Dword13",
          v27,
          "Dword14",
          v28,
          "Dword15",
          v29,
          v15,
          v14[3],
          (*(_WORD *)(v19 + 86) >> 9) & 7,
          *(_WORD *)(v19 + 86) >> 1);
      }
      v15 = -1073741823;
    }
    else
    {
      *a11 = *(_DWORD *)(v19 + 96);
    }
    ExFreePoolWithTag(v14, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v15;
}
