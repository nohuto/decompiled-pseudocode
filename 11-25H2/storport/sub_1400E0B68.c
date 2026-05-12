/*
 * XREFs of sub_1400E0B68 @ 0x1400E0B68
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400E00D0 @ 0x1400E00D0 (sub_1400E00D0.c)
 *     sub_1400E14CC @ 0x1400E14CC (sub_1400E14CC.c)
 *     sub_1400E4544 @ 0x1400E4544 (sub_1400E4544.c)
 *     sub_1400E5964 @ 0x1400E5964 (sub_1400E5964.c)
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400E0B68(__int64 a1, int a2, char a3, __int16 a4, unsigned __int8 a5, _QWORD *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int16 v9; // bp
  int v11; // r15d
  unsigned int v12; // edi
  __int64 v13; // r14
  void *v14; // r12
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r9d
  __int16 v20; // ax
  const char *v21; // rbp
  int v23; // [rsp+C8h] [rbp-A0h]
  int v24; // [rsp+D8h] [rbp-90h]
  int v25; // [rsp+E8h] [rbp-80h]
  unsigned __int16 v26; // [rsp+170h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 128);
  v7 = 0LL;
  v9 = 0;
  v26 = 0;
  if ( !a3 || a3 == 1 || a3 == 2 || a3 == 3 )
  {
LABEL_11:
    v12 = 4096;
    goto LABEL_12;
  }
  if ( a3 != 4 )
  {
    if ( a3 != 5 && a3 != 6 )
    {
      if ( a3 != 28 )
        return (unsigned int)-1073741808;
      v9 = -1;
      v26 = -1;
    }
    goto LABEL_11;
  }
  v12 = 4224;
LABEL_12:
  v13 = sub_14007B110(a1, 0);
  if ( v13 )
  {
    v14 = (void *)sub_1400143E0(64LL, v12, 1380147538LL, *(_QWORD *)(v6 + 8));
    if ( v14 )
    {
      if ( *(_BYTE *)(v13 + 2) == 40 )
      {
        v15 = *(_DWORD *)(v13 + 56);
        if ( v15 )
        {
          v16 = 0;
          while ( 1 )
          {
            v17 = *(unsigned int *)(v13 + 4LL * v16 + 120);
            if ( (unsigned int)v17 >= 0x80 && (unsigned int)v17 < *(_DWORD *)(v13 + 16) )
            {
              v7 = v13 + v17;
              if ( *(_DWORD *)(v13 + v17) == 67 )
                break;
            }
            if ( ++v16 >= v15 )
            {
              v7 = 0LL;
              break;
            }
          }
        }
      }
      memset_0((void *)(v7 + 16), 0, 0x40uLL);
      *(_DWORD *)(v7 + 20) = a2;
      *(_WORD *)(v7 + 60) = a4;
      *(_BYTE *)(v7 + 63) = a5;
      *(_BYTE *)(v7 + 16) = 6;
      *(_WORD *)(v7 + 58) = v9;
      *(_BYTE *)(v7 + 56) = a3;
      *(_DWORD *)(v13 + 60) = v12;
      *(_QWORD *)(v13 + 64) = v14;
      *(_DWORD *)(v13 + 24) = 64;
      *(_BYTE *)(v7 + 80) = 1;
      *(_WORD *)(v7 + 82) = 1;
      *(_WORD *)(v7 + 106) = 0;
      v11 = sub_1400E4050(*(_QWORD *)(a1 + 712), v13, v18, v19, 1, 0LL, 0LL, 0);
      if ( v11 < 0 || *(_BYTE *)(v13 + 3) != 1 || (v20 = *(_WORD *)(v7 + 86), (v20 & 0xE00) != 0) || (v20 & 0x1FE) != 0 )
      {
        if ( (byte_1401694FA & 1) != 0 )
        {
          v21 = (const char *)&dword_140149108;
          if ( *(_QWORD *)(a1 + 752) )
            v21 = *(const char **)(a1 + 752);
          sub_1400DBC50(
            v6,
            v26,
            a5,
            *(_DWORD *)(v6 + 56),
            v6 + 1032,
            *(const wchar_t **)(v6 + 1016),
            *(const char **)(a1 + 792),
            *(_WORD *)(a1 + 4),
            0,
            *(_BYTE *)(a1 + 744),
            v21,
            (const char *)(a1 + 800),
            (const char *)(a1 + 841),
            "Identify Command",
            "NamespaceId",
            a2,
            "IdentifyCNS",
            a3,
            "IdentifyCNSSpecificId",
            a4,
            "CommandSetId",
            a5,
            "ControllerId",
            v26,
            byte_1401489C4,
            v23,
            byte_1401489C4,
            v24,
            byte_1401489C4,
            v25,
            v11,
            *(_BYTE *)(v13 + 3),
            (*(_WORD *)(v7 + 86) >> 9) & 7,
            *(_WORD *)(v7 + 86) >> 1);
        }
        v11 = -1073741823;
        ExFreePoolWithTag(v14, 0x52436152u);
      }
      else
      {
        *a6 = v14;
      }
    }
    else
    {
      v11 = -1073741801;
    }
    ExFreePoolWithTag((PVOID)v13, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
