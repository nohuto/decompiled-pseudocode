/*
 * XREFs of sub_1400E1C2C @ 0x1400E1C2C
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400DE17C @ 0x1400DE17C (sub_1400DE17C.c)
 *     sub_1400E4544 @ 0x1400E4544 (sub_1400E4544.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400DB728 @ 0x1400DB728 (sub_1400DB728.c)
 *     sub_1400DBB2C @ 0x1400DBB2C (sub_1400DBB2C.c)
 *     sub_1400DBC50 @ 0x1400DBC50 (sub_1400DBC50.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     sub_1400F0F00 @ 0x1400F0F00 (sub_1400F0F00.c)
 *     sub_140114310 @ 0x140114310 (sub_140114310.c)
 *     sub_140114380 @ 0x140114380 (sub_140114380.c)
 */

__int64 __fastcall sub_1400E1C2C(__int64 a1)
{
  __int64 v1; // r14
  void *v3; // r12
  LARGE_INTEGER v4; // rax
  __int64 v5; // r15
  LARGE_INTEGER v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rbp
  int v9; // esi
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r9d
  unsigned __int16 *v15; // rax
  _BYTE *v16; // r12
  unsigned __int16 *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  const char *v23; // r11
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  int v30; // [rsp+C8h] [rbp-B0h]
  int v31; // [rsp+D8h] [rbp-A0h]
  int v32; // [rsp+E8h] [rbp-90h]
  char v33; // [rsp+108h] [rbp-70h]
  __int64 v34; // [rsp+120h] [rbp-58h]
  unsigned __int16 *v35; // [rsp+180h] [rbp+8h]
  unsigned __int16 *v36; // [rsp+188h] [rbp+10h]
  union _LARGE_INTEGER v37; // [rsp+190h] [rbp+18h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  v37.QuadPart = 0LL;
  if ( byte_140168724 )
    v4 = KeQueryPerformanceCounter(&v37);
  else
    v4.QuadPart = KeQueryUnbiasedInterruptTime();
  v5 = *(_QWORD *)(a1 + 88);
  v6 = v4;
  v7 = *(_QWORD *)(v5 + 128);
  v8 = sub_14007B110(v5, 0);
  if ( v8 && (v34 = sub_1400143E0(64LL, 1024LL, 1380147538LL, *(_QWORD *)(v7 + 8)), (v3 = (void *)v34) != 0LL) )
  {
    if ( *(_BYTE *)(v8 + 2) == 40 )
    {
      v10 = *(_DWORD *)(v8 + 56);
      if ( v10 )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = *(unsigned int *)(v8 + 4LL * v11 + 120);
          if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 < *(_DWORD *)(v8 + 16) )
          {
            v1 = v12 + v8;
            if ( *(_DWORD *)(v12 + v8) == 67 )
              break;
          }
          if ( ++v11 >= v10 )
          {
            v1 = 0LL;
            break;
          }
        }
      }
    }
    sub_140114310(a1, v1 + 16);
    v9 = sub_140114380(a1, v34);
    if ( v9 >= 0 )
    {
      *(_QWORD *)(v8 + 64) = v34;
      *(_DWORD *)(v8 + 60) = 1024;
      *(_DWORD *)(v8 + 24) = 128;
      *(_BYTE *)(v1 + 80) = 2;
      *(_WORD *)(v1 + 82) = 2;
      *(_WORD *)(v1 + 106) = *(_WORD *)(a1 + 136);
      *(_DWORD *)(a1 + 120) = 3;
      if ( *(_WORD *)(a1 + 136) )
        sub_1400F0F00(a1);
      v15 = (unsigned __int16 *)(v1 + 86);
      v36 = (unsigned __int16 *)(v1 + 86);
      v16 = (_BYTE *)(v8 + 3);
      while ( 1 )
      {
        v35 = v15;
        v9 = sub_1400E4050(a1, v8, v13, v14, 1, 0LL, 0LL, 0);
        if ( v9 >= 0 && *v16 == 1 && (*v36 & 0xE00) == 0 && (*v36 & 0x1FE) == 0 )
          break;
        if ( *(_DWORD *)(v5 + 572) != 2 || !*(_DWORD *)(v5 + 1076) )
        {
          v17 = v35;
LABEL_40:
          if ( (byte_1401694FA & 1) != 0 )
          {
            v22 = *v17;
            v23 = (const char *)&dword_140149108;
            if ( *(_QWORD *)(v5 + 752) )
              v23 = *(const char **)(v5 + 752);
            v33 = (unsigned __int16)v22 >> 1;
            LOWORD(v22) = (unsigned __int16)v22 >> 9;
            LOBYTE(v22) = v22 & 7;
            sub_1400DBC50(
              v22,
              *(unsigned int *)(v1 + 96),
              v5 + 841,
              *(_DWORD *)(v7 + 56),
              v7 + 1032,
              *(const wchar_t **)(v7 + 1016),
              *(const char **)(v5 + 792),
              *(_WORD *)(v5 + 4),
              *(_WORD *)(a1 + 136),
              *(_BYTE *)(v5 + 744),
              v23,
              (const char *)(v5 + 800),
              (const char *)(v5 + 841),
              "Connect Command",
              "DW0",
              *(_DWORD *)(v1 + 96),
              byte_1401489C4,
              0,
              byte_1401489C4,
              0,
              byte_1401489C4,
              0,
              byte_1401489C4,
              0,
              byte_1401489C4,
              v30,
              byte_1401489C4,
              v31,
              byte_1401489C4,
              v32,
              v9,
              *(_BYTE *)(v8 + 3),
              v22,
              v33);
          }
          v9 = -1073741823;
          v21 = 2;
          goto LABEL_45;
        }
        v17 = v35;
        if ( v9 < 0 )
          goto LABEL_40;
        if ( *v16 != 1 )
          goto LABEL_40;
        v36 = v35;
        if ( (*v35 & 0xE00) != 0x200 || (*v35 & 0x1FE) != 0x104 )
          goto LABEL_40;
        *(_DWORD *)(v5 + 1076) = 0;
        sub_140114310(a1, v1 + 16);
        v15 = v35;
      }
      v18 = *(_QWORD *)(a1 + 88);
      v19 = *(_DWORD *)(v1 + 96);
      if ( *(_WORD *)(v18 + 4) == 0xFFFF )
        *(_WORD *)(v18 + 4) = v19;
      if ( !*(_WORD *)(a1 + 136) )
      {
        v20 = HIWORD(v19);
        if ( (_WORD)v20 )
        {
          if ( (v20 & 2) != 0 || (v20 & 4) != 0 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 88) + 136LL) |= 0x40uLL;
            if ( (v20 & 4) != 0 )
              *(_QWORD *)(*(_QWORD *)(a1 + 88) + 136LL) |= 0x80uLL;
          }
        }
      }
      v21 = 4;
LABEL_45:
      v3 = (void *)v34;
      *(_DWORD *)(a1 + 120) = v21;
    }
  }
  else
  {
    v9 = -1073741801;
  }
  if ( byte_140168724 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( v9 < 0 )
  {
    if ( (byte_1401694FA & 8) != 0 )
    {
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
        v27 = PerformanceCounter.QuadPart - v6.QuadPart;
      else
        v27 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
      if ( byte_140168724 )
      {
        v28 = 0LL;
        if ( v37.QuadPart && v27 )
          v28 = 10000 * (1000 * (v27 % v37.QuadPart) % v37.QuadPart) / v37.QuadPart
              + 10000 * (1000 * (v27 / v37.QuadPart) + 1000 * (v27 % v37.QuadPart) / v37.QuadPart);
      }
      else
      {
        v28 = v27;
      }
      sub_1400DB728(
        *(_QWORD *)(a1 + 88),
        &stru_14014B1F8,
        v7 + 1032,
        *(_DWORD *)(v7 + 56),
        v7 + 1032,
        *(const wchar_t **)(v7 + 1016),
        *(const char **)(v5 + 792),
        *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
        *(_WORD *)(a1 + 136),
        v9,
        v28 / 0xA);
    }
  }
  else if ( (byte_1401694FA & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
      v25 = PerformanceCounter.QuadPart - v6.QuadPart;
    else
      v25 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
    if ( byte_140168724 )
    {
      v26 = 0LL;
      if ( v37.QuadPart && v25 )
        v26 = 10000 * (1000 * (v25 % v37.QuadPart) % v37.QuadPart) / v37.QuadPart
            + 10000 * (1000 * (v25 / v37.QuadPart) + 1000 * (v25 % v37.QuadPart) / v37.QuadPart);
    }
    else
    {
      v26 = v25;
    }
    sub_1400DBB2C(
      *(_QWORD *)(a1 + 88),
      &stru_140149A38,
      v7 + 1032,
      *(_DWORD *)(v7 + 56),
      v7 + 1032,
      *(const wchar_t **)(v7 + 1016),
      *(const char **)(v5 + 792),
      *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
      *(_WORD *)(a1 + 136),
      v26 / 0xA);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x52436152u);
  if ( v8 )
    ExFreePoolWithTag((PVOID)v8, 0x72536152u);
  return (unsigned int)v9;
}
