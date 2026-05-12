/*
 * XREFs of sub_1400DE17C @ 0x1400DE17C
 * Callers:
 *     sub_1400DE4B4 @ 0x1400DE4B4 (sub_1400DE4B4.c)
 * Callees:
 *     sub_1400DB85C @ 0x1400DB85C (sub_1400DB85C.c)
 *     sub_1400DBB2C @ 0x1400DBB2C (sub_1400DBB2C.c)
 *     sub_1400DC2F8 @ 0x1400DC2F8 (sub_1400DC2F8.c)
 *     sub_1400DE5E8 @ 0x1400DE5E8 (sub_1400DE5E8.c)
 *     sub_1400DF7EC @ 0x1400DF7EC (sub_1400DF7EC.c)
 *     sub_1400E1C2C @ 0x1400E1C2C (sub_1400E1C2C.c)
 *     sub_1400E69E8 @ 0x1400E69E8 (sub_1400E69E8.c)
 *     sub_1400E6EA4 @ 0x1400E6EA4 (sub_1400E6EA4.c)
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 */

__int64 __fastcall sub_1400DE17C(__int64 a1)
{
  unsigned __int64 v1; // rdi
  char v3; // r15
  LARGE_INTEGER v4; // rax
  __int64 v5; // r14
  LARGE_INTEGER v6; // rbx
  __int64 v7; // r13
  int v8; // esi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v10; // rdx
  LARGE_INTEGER v11; // r8
  unsigned __int64 v12; // r8
  LONGLONG v13; // r9
  unsigned __int64 v14; // r8
  LONGLONG v15; // r9
  union _LARGE_INTEGER v17; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = 0;
  v17.QuadPart = 0LL;
  if ( byte_140168724 )
    v4 = KeQueryPerformanceCounter(&v17);
  else
    v4.QuadPart = KeQueryUnbiasedInterruptTime();
  v5 = *(_QWORD *)(a1 + 88);
  v6 = v4;
  v7 = *(_QWORD *)(v5 + 128);
  if ( (*(_DWORD *)(v5 + 136) & 0x1000LL) != 0 )
  {
    v8 = sub_1400DE5E8(a1);
    if ( v8 < 0 )
    {
      v3 = 1;
      goto LABEL_17;
    }
    v8 = sub_1400DC2F8(a1);
    if ( v8 < 0 )
    {
      v3 = 2;
      goto LABEL_17;
    }
  }
  else
  {
    v8 = sub_1400E6EA4(a1);
    if ( v8 < 0 )
    {
      v3 = 6;
      goto LABEL_17;
    }
  }
  v8 = sub_1400E1C2C(a1);
  if ( v8 >= 0 )
  {
    if ( (*(_BYTE *)(v5 + 136) & 0x40) != 0 && (v8 = sub_1400F33E4(a1), v8 < 0) )
      v3 = 4;
    else
      *(_DWORD *)(a1 + 120) = 5;
  }
  else
  {
    v3 = 3;
  }
LABEL_17:
  if ( byte_140168724 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  v11 = PerformanceCounter;
  if ( v8 < 0 )
  {
    if ( (byte_1401694FA & 4) != 0 )
    {
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
        v14 = PerformanceCounter.QuadPart - v6.QuadPart;
      else
        v14 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
      if ( byte_140168724 )
      {
        if ( v17.QuadPart && v14 )
        {
          v15 = v14 / v17.QuadPart;
          v14 = 1000 * (v14 % v17.QuadPart);
          v1 = 10000 * (v14 % v17.QuadPart) / v17.QuadPart + 10000 * (1000 * v15 + v14 / v17.QuadPart);
        }
      }
      else
      {
        v1 = v14;
      }
      sub_1400DB85C(
        v7 + 1032,
        &stru_14014A730,
        v14,
        *(_DWORD *)(v7 + 56),
        v7 + 1032,
        *(const wchar_t **)(v7 + 1016),
        *(const char **)(v5 + 792),
        *(_WORD *)(v5 + 4),
        *(_WORD *)(a1 + 136),
        v8,
        v3,
        v1 / 0xA);
    }
    if ( (*(_DWORD *)(v5 + 136) & 0x1000LL) != 0 )
      sub_1400DF7EC(a1);
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1400E69E8)(
        a1,
        (LARGE_INTEGER)v10.QuadPart,
        (LARGE_INTEGER)v11.QuadPart);
  }
  else if ( (byte_1401694FA & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
      v12 = PerformanceCounter.QuadPart - v6.QuadPart;
    else
      v12 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
    if ( byte_140168724 )
    {
      if ( v17.QuadPart && v12 )
      {
        v13 = v12 / v17.QuadPart;
        v12 = 1000 * (v12 % v17.QuadPart);
        v1 = 10000 * (v12 % v17.QuadPart) / v17.QuadPart + 10000 * (1000 * v13 + v12 / v17.QuadPart);
      }
    }
    else
    {
      v1 = v12;
    }
    sub_1400DBB2C(
      v7 + 1032,
      &stru_14014A118,
      v12,
      *(_DWORD *)(v7 + 56),
      v7 + 1032,
      *(const wchar_t **)(v7 + 1016),
      *(const char **)(v5 + 792),
      *(_WORD *)(v5 + 4),
      *(_WORD *)(a1 + 136),
      v1 / 0xA);
  }
  return (unsigned int)v8;
}
