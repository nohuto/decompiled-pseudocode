/*
 * XREFs of sub_1400E1168 @ 0x1400E1168
 * Callers:
 *     sub_1400E3658 @ 0x1400E3658 (sub_1400E3658.c)
 *     sub_140112EA4 @ 0x140112EA4 (sub_140112EA4.c)
 *     sub_140112F9C @ 0x140112F9C (sub_140112F9C.c)
 *     sub_1401135B8 @ 0x1401135B8 (sub_1401135B8.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     sub_14011446C @ 0x14011446C (sub_14011446C.c)
 */

__int64 __fastcall sub_1400E1168(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        _QWORD *a8,
        _BYTE *a9,
        _BYTE *a10)
{
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  int v16; // ebp
  char v17; // r12
  __int64 v18; // rdx
  unsigned int v19; // r8d
  void *v20; // r15
  unsigned int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int16 v24; // ax
  const char *v25; // rbx
  __int64 v26; // rcx
  int v28; // [rsp+30h] [rbp-108h]
  int v29; // [rsp+C8h] [rbp-70h]
  int v30; // [rsp+D8h] [rbp-60h]
  int v31; // [rsp+E8h] [rbp-50h]
  char v32; // [rsp+108h] [rbp-30h]

  v10 = *(_QWORD *)(a1 + 128);
  v11 = a4;
  v14 = 0LL;
  v15 = sub_14007B110(a1, 0);
  if ( v15 )
  {
    v17 = v11;
    v20 = (void *)sub_1400143E0(64LL, v11, 1380147538LL, *(_QWORD *)(v10 + 8));
    if ( !v20 )
    {
      v16 = -1073741801;
LABEL_28:
      ExFreePoolWithTag((PVOID)v15, 0x72536152u);
      return (unsigned int)v16;
    }
    if ( *(_BYTE *)(v15 + 2) == 40 )
    {
      v19 = *(_DWORD *)(v15 + 56);
      if ( v19 )
      {
        v21 = 0;
        while ( 1 )
        {
          v18 = *(unsigned int *)(v15 + 4LL * v21 + 120);
          if ( (unsigned int)v18 >= 0x80 && (unsigned int)v18 < *(_DWORD *)(v15 + 16) )
          {
            v14 = v15 + v18;
            if ( *(_DWORD *)(v15 + v18) == 67 )
              break;
          }
          if ( ++v21 >= v19 )
          {
            v14 = 0LL;
            break;
          }
        }
      }
    }
    LOBYTE(v19) = a3;
    LOBYTE(v18) = (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 261LL) & 4) != 0;
    sub_14011446C(*(_DWORD *)(a1 + 576), v18, v19, v11, v18, a5, v28, a7, (void *)(v14 + 16));
    *(_DWORD *)(v15 + 60) = v11;
    *(_QWORD *)(v15 + 64) = v20;
    *(_DWORD *)(v15 + 24) = 64;
    *(_BYTE *)(v14 + 80) = 1;
    *(_WORD *)(v14 + 82) = 1;
    *(_WORD *)(v14 + 106) = 0;
    v16 = sub_1400E4050(*(_QWORD *)(a1 + 712), v15, v22, v23, 1, 0LL, 0LL, 0);
    if ( v16 >= 0 )
    {
      if ( *(_BYTE *)(v15 + 3) == 1 )
      {
        v24 = *(_WORD *)(v14 + 86);
        if ( (v24 & 0xE00) == 0 && (v24 & 0x1FE) == 0 )
        {
          *a8 = v20;
          goto LABEL_28;
        }
      }
      if ( a9 )
        *a9 = (*(_WORD *)(v14 + 86) >> 9) & 7;
      if ( a10 )
        *a10 = *(_WORD *)(v14 + 86) >> 1;
      v16 = -1073741823;
    }
    if ( (byte_1401694FA & 1) != 0 )
    {
      v25 = (const char *)&dword_140149108;
      v26 = *(unsigned __int16 *)(v14 + 86);
      if ( *(_QWORD *)(a1 + 752) )
        v25 = *(const char **)(a1 + 752);
      v32 = (unsigned __int16)v26 >> 1;
      LOWORD(v26) = (unsigned __int16)v26 >> 9;
      LOBYTE(v26) = v26 & 7;
      sub_1400DBC50(
        v26,
        a3,
        a1 + 841,
        *(_DWORD *)(v10 + 56),
        v10 + 1032,
        *(const wchar_t **)(v10 + 1016),
        *(const char **)(a1 + 792),
        *(_WORD *)(a1 + 4),
        0,
        *(_BYTE *)(a1 + 744),
        v25,
        (const char *)(a1 + 800),
        (const char *)(a1 + 841),
        "Get Log Page command",
        "NamespaceId",
        -1,
        "LogPageIdentifier",
        a3,
        "LogPageSize",
        v17,
        "LogPageOffset",
        a5,
        "LogSpecificIdentifier",
        0,
        byte_1401489C4,
        v29,
        byte_1401489C4,
        v30,
        byte_1401489C4,
        v31,
        v16,
        *(_BYTE *)(v15 + 3),
        v26,
        v32);
    }
    ExFreePoolWithTag(v20, 0x52436152u);
    goto LABEL_28;
  }
  return (unsigned int)-1073741801;
}
