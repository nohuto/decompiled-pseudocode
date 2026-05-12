/*
 * XREFs of sub_1400E6EA4 @ 0x1400E6EA4
 * Callers:
 *     sub_1400DE17C @ 0x1400DE17C (sub_1400DE17C.c)
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400CAA3C @ 0x1400CAA3C (sub_1400CAA3C.c)
 *     sub_1400CD684 @ 0x1400CD684 (sub_1400CD684.c)
 *     sub_1400D3FBC @ 0x1400D3FBC (sub_1400D3FBC.c)
 *     sub_1400DB9A0 @ 0x1400DB9A0 (sub_1400DB9A0.c)
 *     sub_1400DBB2C @ 0x1400DBB2C (sub_1400DBB2C.c)
 */

__int64 __fastcall sub_1400E6EA4(__int64 a1)
{
  char *v1; // r14
  void *v2; // r12
  LARGE_INTEGER v4; // rax
  __int64 v5; // r15
  LARGE_INTEGER v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // edi
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  LONGLONG v26; // r9
  int v27; // r11d
  const char *v28; // r10
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  LONGLONG v31; // r9
  union _LARGE_INTEGER v33; // [rsp+B0h] [rbp+8h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+10h]

  v1 = 0LL;
  v2 = 0LL;
  v33.QuadPart = 0LL;
  if ( byte_140168724 )
    v4 = KeQueryPerformanceCounter(&v33);
  else
    v4.QuadPart = KeQueryUnbiasedInterruptTime();
  v5 = *(_QWORD *)(a1 + 88);
  v6 = v4;
  v7 = *(_QWORD *)(v5 + 128);
  v8 = sub_14007B110(v5, 1);
  v9 = v8;
  if ( !v8 )
    goto LABEL_5;
  if ( *(_BYTE *)(v8 + 2) == 40 && (v11 = *(_DWORD *)(v8 + 56)) != 0 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = *(unsigned int *)(v9 + 4 * v12 + 120);
      if ( (unsigned int)v13 >= 0x80 && (unsigned int)v13 < *(_DWORD *)(v9 + 16) )
      {
        v14 = v9 + v13;
        if ( *(_DWORD *)(v9 + v13) == 68 )
          break;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= v11 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v14 = 0LL;
  }
  *(_DWORD *)(v14 + 16) = 6;
  v15 = sub_1400143E0(64LL, 88LL, 1179541842LL, *(_QWORD *)(v7 + 8));
  v1 = (char *)v15;
  if ( !v15 )
    goto LABEL_5;
  *(_DWORD *)v15 = 5767169;
  *(_QWORD *)(v15 + 8) = *(_QWORD *)(v5 + 560);
  *(_WORD *)(v15 + 4) = *(_WORD *)(a1 + 136);
  v16 = 316LL;
  if ( *(_DWORD *)v7 != 1314275652 )
    v16 = 524LL;
  v17 = sub_1400CAA3C(524LL, ((*(_DWORD *)(v16 + v7) + 7) & 0xFFFFFFF8) + 1184);
  v2 = (void *)v17;
  if ( v17 )
  {
    v19 = v17 + 48;
    sub_140017C40(v17 + 48, v18, 0, 0LL);
    *(_BYTE *)(v19 + 17) |= 0x20u;
    *(_QWORD *)(v19 + 184) = v1;
    *(_QWORD *)(v19 + 168) = v9;
    *(_QWORD *)(v19 + 216) = v7;
    *(_QWORD *)(v19 + 784) = v5;
    *(_QWORD *)(v9 + 96) = v19;
    *(_QWORD *)(v9 + 64) = v1;
    *(_DWORD *)(v9 + 60) = 88;
    *(_DWORD *)(v9 + 24) = 256;
    *(_DWORD *)(v9 + 40) = 10;
    sub_1400161E0((int *)v7, v9, (__int64)v2 + 1184);
    Object = (PVOID)(v19 + 664);
    KeInitializeEvent((PRKEVENT)(v19 + 664), NotificationEvent, 0);
    *(_QWORD *)(v19 + 656) = sub_140038660;
    *(_DWORD *)(a1 + 120) = 1;
    if ( (*(_DWORD *)(v7 + 144) & 0x1000LL) != 0 )
      v21 = sub_1400D3FBC((_DWORD *)v7, v19);
    else
      v21 = sub_1400CD684((_DWORD *)v7, v19, v20);
    v10 = v21;
    if ( v21 >= 0 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      v10 = sub_1400229C8(*(_BYTE *)(v9 + 3));
    }
    v22 = 0;
    if ( v10 >= 0 )
      v22 = 2;
    *(_DWORD *)(a1 + 120) = v22;
  }
  else
  {
LABEL_5:
    v10 = -1073741801;
  }
  if ( byte_140168724 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( v10 < 0 )
  {
    if ( (byte_1401694FA & 8) != 0 )
    {
      if ( v1 )
      {
        v27 = *((_DWORD *)v1 + 4);
        v28 = v1 + 20;
      }
      else
      {
        v28 = byte_1401489C4;
        LOBYTE(v27) = 0;
      }
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
        v29 = PerformanceCounter.QuadPart - v6.QuadPart;
      else
        v29 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
      if ( byte_140168724 )
      {
        v30 = 0LL;
        if ( v33.QuadPart && v29 )
        {
          v31 = v29 / v33.QuadPart;
          v29 = 1000 * (v29 % v33.QuadPart);
          v30 = 10000 * (v29 % v33.QuadPart) / v33.QuadPart + 10000 * (1000 * v31 + v29 / v33.QuadPart);
        }
      }
      else
      {
        v30 = v29;
      }
      sub_1400DB9A0(
        v7 + 1032,
        &stru_1401499F0,
        v29,
        *(_DWORD *)(v7 + 56),
        v7 + 1032,
        *(const wchar_t **)(v7 + 1016),
        *(const char **)(v5 + 792),
        *(_WORD *)(v5 + 4),
        *(_WORD *)(a1 + 136),
        v10,
        v27,
        v28,
        v30 / 0xA);
    }
  }
  else if ( (byte_1401694FA & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
      v24 = PerformanceCounter.QuadPart - v6.QuadPart;
    else
      v24 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
    if ( byte_140168724 )
    {
      v25 = 0LL;
      if ( v33.QuadPart && v24 )
      {
        v26 = v24 / v33.QuadPart;
        v24 = 1000 * (v24 % v33.QuadPart);
        v25 = 10000 * (v24 % v33.QuadPart) / v33.QuadPart + 10000 * (1000 * v26 + v24 / v33.QuadPart);
      }
    }
    else
    {
      v25 = v24;
    }
    sub_1400DBB2C(
      v7 + 1032,
      &stru_14014A540,
      v24,
      *(_DWORD *)(v7 + 56),
      v7 + 1032,
      *(const wchar_t **)(v7 + 1016),
      *(const char **)(v5 + 792),
      *(_WORD *)(v5 + 4),
      *(_WORD *)(a1 + 136),
      v25 / 0xA);
  }
  if ( v2 )
    MmFreeContiguousMemory(v2);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x464E6152u);
  if ( v9 )
    ExFreePoolWithTag((PVOID)v9, 0x72536152u);
  return (unsigned int)v10;
}
