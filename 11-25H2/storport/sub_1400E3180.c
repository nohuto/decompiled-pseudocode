/*
 * XREFs of sub_1400E3180 @ 0x1400E3180
 * Callers:
 *     sub_1400DF7EC @ 0x1400DF7EC (sub_1400DF7EC.c)
 * Callees:
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400DB728 @ 0x1400DB728 (sub_1400DB728.c)
 *     sub_1400DBB2C @ 0x1400DBB2C (sub_1400DBB2C.c)
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     sub_1400F0F00 @ 0x1400F0F00 (sub_1400F0F00.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_1400E3180(__int64 a1)
{
  LARGE_INTEGER v2; // rax
  __int64 v3; // r13
  LARGE_INTEGER v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rax
  char *v7; // rsi
  int v8; // edi
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rbp
  int v13; // r8d
  int v14; // r9d
  __int16 v15; // ax
  __int64 v16; // rcx
  const char *v17; // r10
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  int v23; // [rsp+C8h] [rbp-70h]
  int v24; // [rsp+D8h] [rbp-60h]
  int v25; // [rsp+E8h] [rbp-50h]
  char v26; // [rsp+108h] [rbp-30h]
  union _LARGE_INTEGER v27; // [rsp+140h] [rbp+8h] BYREF

  v27.QuadPart = 0LL;
  if ( byte_140168724 )
    v2 = KeQueryPerformanceCounter(&v27);
  else
    v2.QuadPart = KeQueryUnbiasedInterruptTime();
  v3 = *(_QWORD *)(a1 + 88);
  v4 = v2;
  v5 = *(_QWORD *)(v3 + 128);
  v6 = sub_14007B110(v3, 0);
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
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      v12 = 0LL;
    }
    memset_0((void *)(v12 + 16), 0, 0x40uLL);
    *(_BYTE *)(v12 + 16) = 127;
    *(_BYTE *)(v12 + 20) = 8;
    *(_WORD *)(v12 + 56) = 0;
    *(_BYTE *)(v12 + 80) = 2;
    *(_WORD *)(v12 + 106) = *(_WORD *)(a1 + 136);
    *(_DWORD *)(a1 + 120) = 6;
    if ( *(_WORD *)(a1 + 136) )
      sub_1400F0F00(a1);
    v8 = sub_1400E4050(a1, (_DWORD)v7, v13, v14, 1, 0LL, 0LL, 0);
    if ( v8 < 0 || v7[3] != 1 || (v15 = *(_WORD *)(v12 + 86), (v15 & 0xE00) != 0) || (v15 & 0x1FE) != 0 )
    {
      if ( (byte_1401694FA & 1) != 0 )
      {
        v16 = *(unsigned __int16 *)(v12 + 86);
        v17 = (const char *)&dword_140149108;
        if ( *(_QWORD *)(v3 + 752) )
          v17 = *(const char **)(v3 + 752);
        v26 = (unsigned __int16)v16 >> 1;
        LOWORD(v16) = (unsigned __int16)v16 >> 9;
        LOBYTE(v16) = v16 & 7;
        sub_1400DBC50(
          v16,
          v3 + 841,
          v3 + 800,
          *(_DWORD *)(v5 + 56),
          v5 + 1032,
          *(const wchar_t **)(v5 + 1016),
          *(const char **)(v3 + 792),
          *(_WORD *)(v3 + 4),
          *(_WORD *)(a1 + 136),
          *(_BYTE *)(v3 + 744),
          v17,
          (const char *)(v3 + 800),
          (const char *)(v3 + 841),
          "Disconnect Command",
          byte_1401489C4,
          0,
          byte_1401489C4,
          0,
          byte_1401489C4,
          0,
          byte_1401489C4,
          0,
          byte_1401489C4,
          0,
          byte_1401489C4,
          v23,
          byte_1401489C4,
          v24,
          byte_1401489C4,
          v25,
          v8,
          v7[3],
          v16,
          v26);
      }
      v8 = -1073741823;
    }
  }
  else
  {
    v8 = -1073741801;
  }
  if ( byte_140168724 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( v8 < 0 )
  {
    if ( (byte_1401694FA & 8) != 0 )
    {
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v4.QuadPart )
        v21 = PerformanceCounter.QuadPart - v4.QuadPart;
      else
        v21 = PerformanceCounter.QuadPart - v4.QuadPart - 1;
      if ( byte_140168724 )
      {
        v22 = 0LL;
        if ( v27.QuadPart && v21 )
          v22 = 10000 * (1000 * (v21 % v27.QuadPart) % v27.QuadPart) / v27.QuadPart
              + 10000 * (1000 * (v21 / v27.QuadPart) + 1000 * (v21 % v27.QuadPart) / v27.QuadPart);
      }
      else
      {
        v22 = v21;
      }
      sub_1400DB728(
        *(_QWORD *)(a1 + 88),
        &stru_14014A770,
        v5 + 1032,
        *(_DWORD *)(v5 + 56),
        v5 + 1032,
        *(const wchar_t **)(v5 + 1016),
        *(const char **)(v3 + 792),
        *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
        *(_WORD *)(a1 + 136),
        v8,
        v22 / 0xA);
    }
  }
  else if ( (byte_1401694FA & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v4.QuadPart )
      v19 = PerformanceCounter.QuadPart - v4.QuadPart;
    else
      v19 = PerformanceCounter.QuadPart - v4.QuadPart - 1;
    if ( byte_140168724 )
    {
      v20 = 0LL;
      if ( v27.QuadPart && v19 )
        v20 = 10000 * (1000 * (v19 % v27.QuadPart) % v27.QuadPart) / v27.QuadPart
            + 10000 * (1000 * (v19 / v27.QuadPart) + 1000 * (v19 % v27.QuadPart) / v27.QuadPart);
    }
    else
    {
      v20 = v19;
    }
    sub_1400DBB2C(
      *(_QWORD *)(a1 + 88),
      &stru_14014A148,
      v5 + 1032,
      *(_DWORD *)(v5 + 56),
      v5 + 1032,
      *(const wchar_t **)(v5 + 1016),
      *(const char **)(v3 + 792),
      *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
      *(_WORD *)(a1 + 136),
      v20 / 0xA);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
}
