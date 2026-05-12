/*
 * XREFs of sub_1400DE5E8 @ 0x1400DE5E8
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400DE17C @ 0x1400DE17C (sub_1400DE17C.c)
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
 *     sub_140121930 @ 0x140121930 (sub_140121930.c)
 */

__int64 __fastcall sub_1400DE5E8(__int64 a1)
{
  __int64 v2; // rsi
  void *v3; // r12
  LARGE_INTEGER v4; // rax
  __int64 v5; // r15
  LARGE_INTEGER v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // edi
  unsigned int v11; // r8d
  unsigned int v12; // ecx
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
  bool v23; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rtt
  int v28; // r11d
  const char *v29; // r10
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rtt
  union _LARGE_INTEGER v34; // [rsp+B0h] [rbp+8h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+10h]

  v2 = 0LL;
  v34.QuadPart = 0LL;
  v3 = 0LL;
  if ( byte_140168724 )
    v4 = KeQueryPerformanceCounter(&v34);
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
    v12 = 0;
    while ( 1 )
    {
      v13 = *(unsigned int *)(v9 + 4LL * v12 + 120);
      if ( (unsigned int)v13 >= 0x80 && (unsigned int)v13 < *(_DWORD *)(v9 + 16) )
      {
        v14 = v13 + v9;
        if ( *(_DWORD *)(v13 + v9) == 68 )
          break;
      }
      if ( ++v12 >= v11 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v14 = 0LL;
  }
  *(_DWORD *)(v14 + 16) = 2;
  v15 = sub_1400143E0(64LL, 128LL, 1179541842LL, *(_QWORD *)(v7 + 8));
  v2 = v15;
  if ( !v15 )
    goto LABEL_5;
  *(_DWORD *)v15 = 8388609;
  *(_QWORD *)(v15 + 8) = *(_QWORD *)(v5 + 560);
  *(_WORD *)(v15 + 4) = *(_WORD *)(a1 + 136);
  *(_WORD *)(v15 + 16) = *(_WORD *)(a1 + 124);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 96) + 24LL) + 4LL) == 1 )
  {
    sub_140121930(*(unsigned int *)(v5 + 32), v15 + 24);
    sub_140121930(*(unsigned int *)(v5 + 32), v2 + 40);
  }
  v16 = 316LL;
  if ( *(_DWORD *)v7 != 1314275652 )
    v16 = 524LL;
  v17 = sub_1400CAA3C(524LL, ((*(_DWORD *)(v16 + v7) + 7) & 0xFFFFFFF8) + 1184);
  v3 = (void *)v17;
  if ( v17 )
  {
    v19 = v17 + 48;
    sub_140017C40(v17 + 48, v18, 0, 0LL);
    *(_BYTE *)(v19 + 17) |= 0x20u;
    *(_QWORD *)(v19 + 184) = v2;
    *(_QWORD *)(v19 + 168) = v9;
    *(_QWORD *)(v19 + 216) = v7;
    *(_QWORD *)(v19 + 784) = v5;
    *(_QWORD *)(v9 + 96) = v19;
    *(_QWORD *)(v9 + 64) = v2;
    *(_DWORD *)(v9 + 60) = 128;
    *(_DWORD *)(v9 + 24) = 256;
    *(_DWORD *)(v9 + 40) = 10;
    sub_1400161E0((int *)v7, v9, (__int64)v3 + 1184);
    Object = (PVOID)(v19 + 664);
    KeInitializeEvent((PRKEVENT)(v19 + 664), NotificationEvent, 0);
    *(_QWORD *)(v19 + 656) = sub_140038660;
    *(_DWORD *)(a1 + 120) = 1;
    if ( (*(_DWORD *)(v7 + 144) & 0x1000LL) != 0 )
      v21 = sub_1400D3FBC((_DWORD *)v7, v19);
    else
      v21 = sub_1400CD684((_DWORD *)v7, v19, v20);
    v10 = v21;
    if ( v21 >= 0
      && (KeWaitForSingleObject(Object, Executive, 0, 0, 0LL), v10 = sub_1400229C8(*(_BYTE *)(v9 + 3)), v10 >= 0)
      && (v22 = *(unsigned __int16 *)(v2 + 16), (_WORD)v22) )
    {
      *(_DWORD *)(a1 + 124) = v22;
      *(_DWORD *)(a1 + 120) = 2;
    }
    else
    {
      v23 = *(_WORD *)(v2 + 16) == 0;
      *(_DWORD *)(a1 + 120) = 0;
      if ( v23 )
        v10 = -1073741670;
    }
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
      if ( v2 )
      {
        v28 = *(_DWORD *)(v2 + 56);
        v29 = (const char *)(v2 + 60);
      }
      else
      {
        v29 = byte_1401489C4;
        LOBYTE(v28) = 0;
      }
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
        v30 = PerformanceCounter.QuadPart - v6.QuadPart;
      else
        v30 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
      if ( byte_140168724 )
      {
        v31 = 0LL;
        if ( v34.QuadPart && v30 )
        {
          v32 = v30;
          v30 = 1000 * (v30 % v34.QuadPart);
          v31 = 10000 * (v30 % v34.QuadPart) / v34.QuadPart + 10000 * (1000 * (v32 / v34.QuadPart) + v30 / v34.QuadPart);
        }
      }
      else
      {
        v31 = v30;
      }
      sub_1400DB9A0(
        v7 + 1032,
        &stru_14014A740,
        v30,
        *(_DWORD *)(v7 + 56),
        v7 + 1032,
        *(const wchar_t **)(v7 + 1016),
        *(const char **)(v5 + 792),
        *(_WORD *)(v5 + 4),
        *(_WORD *)(a1 + 136),
        v10,
        v28,
        v29,
        v31 / 0xA);
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
      if ( v34.QuadPart && v25 )
      {
        v27 = v25;
        v25 = 1000 * (v25 % v34.QuadPart);
        v26 = 10000 * (v25 % v34.QuadPart) / v34.QuadPart + 10000 * (1000 * (v27 / v34.QuadPart) + v25 / v34.QuadPart);
      }
    }
    else
    {
      v26 = v25;
    }
    sub_1400DBB2C(
      v7 + 1032,
      &stru_14014A400,
      v25,
      *(_DWORD *)(v7 + 56),
      v7 + 1032,
      *(const wchar_t **)(v7 + 1016),
      *(const char **)(v5 + 792),
      *(_WORD *)(v5 + 4),
      *(_WORD *)(a1 + 136),
      v26 / 0xA);
  }
  if ( v3 )
    MmFreeContiguousMemory(v3);
  if ( v2 )
    ExFreePoolWithTag((PVOID)v2, 0x464E6152u);
  if ( v9 )
    ExFreePoolWithTag((PVOID)v9, 0x72536152u);
  return (unsigned int)v10;
}
