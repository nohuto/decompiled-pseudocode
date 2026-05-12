/*
 * XREFs of sub_1400E4E9C @ 0x1400E4E9C
 * Callers:
 *     sub_1400DCEE0 @ 0x1400DCEE0 (sub_1400DCEE0.c)
 *     sub_1400DD3F0 @ 0x1400DD3F0 (sub_1400DD3F0.c)
 *     sub_1400E22C0 @ 0x1400E22C0 (sub_1400E22C0.c)
 *     sub_1400E5FA4 @ 0x1400E5FA4 (sub_1400E5FA4.c)
 * Callees:
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400E3E6C @ 0x1400E3E6C (sub_1400E3E6C.c)
 */

__int64 __fastcall sub_1400E4E9C(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v5; // r8d
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // r14d
  const char *v10; // rbx
  int v12; // [rsp+C8h] [rbp-60h]
  int v13; // [rsp+D8h] [rbp-50h]
  int v14; // [rsp+E8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 128);
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
  *(_BYTE *)(a2 + 3) = 0;
  v9 = sub_1400E3E6C(*(_QWORD *)(a1 + 712), a2, 1, 1, 1, 0LL, 0LL, 0, (__int64)sub_1400DCEE0, 0LL);
  if ( v9 < 0 )
  {
    if ( (byte_1401694FA & 1) != 0 )
    {
      v10 = (const char *)&dword_140149108;
      if ( *(_QWORD *)(a1 + 752) )
        v10 = *(const char **)(a1 + 752);
      sub_1400DBC50(
        (*(_WORD *)(v8 + 86) >> 9) & 7,
        *(unsigned int *)(v8 + 96),
        a1 + 841,
        *(_DWORD *)(v2 + 56),
        v2 + 1032,
        *(const wchar_t **)(v2 + 1016),
        *(const char **)(a1 + 792),
        *(_WORD *)(a1 + 4),
        0,
        *(_BYTE *)(a1 + 744),
        v10,
        (const char *)(a1 + 800),
        (const char *)(a1 + 841),
        "Async Event Request Command",
        "DW0",
        *(_DWORD *)(v8 + 96),
        byte_1401489C4,
        0,
        byte_1401489C4,
        0,
        byte_1401489C4,
        0,
        byte_1401489C4,
        0,
        byte_1401489C4,
        v12,
        byte_1401489C4,
        v13,
        byte_1401489C4,
        v14,
        v9,
        *(_BYTE *)(a2 + 3),
        (*(_WORD *)(v8 + 86) >> 9) & 7,
        *(_WORD *)(v8 + 86) >> 1);
    }
    *(_BYTE *)(a2 + 3) = 48;
  }
  return (unsigned int)v9;
}
