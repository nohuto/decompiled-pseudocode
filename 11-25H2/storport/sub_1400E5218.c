/*
 * XREFs of sub_1400E5218 @ 0x1400E5218
 * Callers:
 *     sub_1400DF70C @ 0x1400DF70C (sub_1400DF70C.c)
 *     sub_1400DFDFC @ 0x1400DFDFC (sub_1400DFDFC.c)
 *     sub_1400E51D4 @ 0x1400E51D4 (sub_1400E51D4.c)
 *     sub_1400E54E8 @ 0x1400E54E8 (sub_1400E54E8.c)
 *     sub_1400E5614 @ 0x1400E5614 (sub_1400E5614.c)
 *     sub_1401133D8 @ 0x1401133D8 (sub_1401133D8.c)
 * Callees:
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400E5218(
        __int64 a1,
        int a2,
        char a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        _DWORD *a12)
{
  __int64 v15; // rax
  char *v16; // rsi
  int v17; // r14d
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rbp
  char v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int16 v26; // ax
  const char *v27; // rdi
  int v29; // [rsp+C8h] [rbp-80h]
  int v30; // [rsp+D8h] [rbp-70h]
  int v31; // [rsp+E8h] [rbp-60h]
  __int64 v32; // [rsp+150h] [rbp+8h]
  char v33; // [rsp+158h] [rbp+10h]

  v33 = a2;
  v32 = *(_QWORD *)(a1 + 128);
  v15 = sub_14007B110(a1, 0);
  v16 = (char *)v15;
  if ( v15 )
  {
    if ( *(_BYTE *)(v15 + 2) == 40 && (v18 = *(_DWORD *)(v15 + 56)) != 0 )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = *(unsigned int *)(v15 + 4LL * v19 + 120);
        if ( (unsigned int)v20 >= 0x80 && (unsigned int)v20 < *(_DWORD *)(v15 + 16) )
        {
          v21 = v15 + v20;
          if ( *(_DWORD *)(v15 + v20) == 67 )
            break;
        }
        if ( ++v19 >= v18 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v21 = 0LL;
    }
    memset_0((void *)(v21 + 16), 0, 0x40uLL);
    *(_BYTE *)(v21 + 56) = a3;
    *(_DWORD *)(v21 + 56) &= ~0x80000000;
    *(_DWORD *)(v21 + 60) = a5;
    *(_BYTE *)(v21 + 16) = 9;
    *(_DWORD *)(v21 + 20) = a2;
    *(_QWORD *)(v21 + 64) = 0LL;
    *(_QWORD *)(v21 + 72) = 0LL;
    *(_BYTE *)(v21 + 80) = 1;
    *(_WORD *)(v21 + 106) = 0;
    v17 = sub_1400E4050(*(_QWORD *)(a1 + 712), (__int64)v16, v22, v23, 1, 0LL, 0LL, 0);
    if ( v17 < 0 || v16[3] != 1 || (v26 = *(_WORD *)(v21 + 86), (v26 & 0xE00) != 0) || (v26 & 0x1FE) != 0 )
    {
      if ( (byte_1401694FA & 1) != 0 )
      {
        v27 = (const char *)&dword_140149108;
        if ( *(_QWORD *)(a1 + 752) )
          v27 = *(const char **)(a1 + 752);
        sub_1400DBC50(
          0LL,
          v24,
          v25,
          *(_DWORD *)(v32 + 56),
          v32 + 1032,
          *(const wchar_t **)(v32 + 1016),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          0,
          *(_BYTE *)(a1 + 744),
          v27,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          "Set Feature Command",
          "NamespaceId",
          v33,
          "FeatureId",
          a3,
          "Save",
          0,
          "Dword11",
          a5,
          "Dword12",
          0,
          "Dword13",
          v29,
          "Dword14",
          v30,
          "Dword15",
          v31,
          v17,
          v16[3],
          (*(_WORD *)(v21 + 86) >> 9) & 7,
          *(_WORD *)(v21 + 86) >> 1);
      }
      v17 = -1073741823;
    }
    else
    {
      *a12 = *(_DWORD *)(v21 + 96);
    }
    ExFreePoolWithTag(v16, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v17;
}
