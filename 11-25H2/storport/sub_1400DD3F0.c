/*
 * XREFs of sub_1400DD3F0 @ 0x1400DD3F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400E0064 @ 0x1400E0064 (sub_1400E0064.c)
 *     sub_1400E4CB8 @ 0x1400E4CB8 (sub_1400E4CB8.c)
 *     sub_1400E4E9C @ 0x1400E4E9C (sub_1400E4E9C.c)
 */

__int64 __fastcall sub_1400DD3F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  char *v9; // r14
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // r9
  __int64 v15; // rdx
  __int16 v16; // ax
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8
  const char *v20; // rdi
  __int64 result; // rax
  int v22; // [rsp+C8h] [rbp-60h]
  int v23; // [rsp+D8h] [rbp-50h]
  int v24; // [rsp+E8h] [rbp-40h]
  char v25; // [rsp+108h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 128);
  v9 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 && (v10 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = *(unsigned int *)(a2 + 4LL * v11 + 120);
      if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 < *(_DWORD *)(a2 + 16) )
      {
        v13 = v12 + a2;
        if ( *(_DWORD *)(v12 + a2) == 67 )
          break;
      }
      if ( ++v11 >= v10 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v13 = 0LL;
  }
  v14 = *(_BYTE *)(a2 + 3);
  v15 = *(unsigned __int8 *)(v13 + 56);
  if ( v14 != 1 || (v16 = *(_WORD *)(v13 + 86), (v16 & 0xE00) != 0) || (v16 & 0x1FE) != 0 )
  {
    if ( (byte_1401694FA & 1) != 0 )
    {
      v18 = *(unsigned __int16 *)(v13 + 86);
      v19 = *(unsigned int *)(v13 + 20);
      v20 = (const char *)&dword_140149108;
      if ( *(_QWORD *)(a1 + 752) )
        v20 = *(const char **)(a1 + 752);
      v25 = (unsigned __int16)v18 >> 1;
      LOWORD(v18) = (unsigned __int16)v18 >> 9;
      LOBYTE(v18) = v18 & 7;
      sub_1400DBC50(
        v18,
        v15,
        v19,
        *(_DWORD *)(v6 + 56),
        v6 + 1032,
        *(const wchar_t **)(v6 + 1016),
        *(const char **)(a1 + 792),
        *(_WORD *)(a1 + 4),
        0,
        *(_BYTE *)(a1 + 744),
        v20,
        (const char *)(a1 + 800),
        (const char *)(a1 + 841),
        "Get Log Page command",
        "NamespaceId",
        v19,
        "LogPageIdentifier",
        v15,
        byte_1401489C4,
        0,
        byte_1401489C4,
        0,
        byte_1401489C4,
        0,
        byte_1401489C4,
        v22,
        byte_1401489C4,
        v23,
        byte_1401489C4,
        v24,
        0,
        v14,
        v18,
        v25);
    }
  }
  else
  {
    v9 = *(char **)(a2 + 64);
    if ( (_BYTE)v15 != 1 )
    {
      if ( (_BYTE)v15 == 2 )
      {
        v17 = *v9;
        if ( *v9 && v17 != *(_BYTE *)(a1 + 946) )
        {
          *(_BYTE *)(a1 + 946) = v17;
          sub_1400A870C(
            a1,
            1,
            3,
            (__int64)L"Health critical warning",
            L"CriticalWarning",
            *v9,
            L"AvailableSpare",
            v9[3],
            L"AvailableSpareThreshold",
            v9[4],
            L"PercentageUsed",
            v9[5],
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0);
        }
      }
      else if ( (_BYTE)v15 == 4 )
      {
        if ( *(_DWORD *)v9 )
        {
          sub_1400E0064(a1, *(_QWORD *)(a2 + 64));
        }
        else
        {
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1072), 1u);
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1072), 2u);
        }
      }
    }
  }
  ExFreePoolWithTag(v9, 0x52436152u);
  ExFreePoolWithTag((PVOID)a2, 0x72536152u);
  result = sub_1400E4E9C(a1, a6);
  if ( (int)result < 0 )
  {
    *(_QWORD *)(a1 + 136) |= 0x40000000uLL;
    if ( *(_DWORD *)(a1 + 572) == 1 )
      return sub_1400E4CB8(a1, 5000LL);
  }
  return result;
}
