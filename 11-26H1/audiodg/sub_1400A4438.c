/*
 * XREFs of sub_1400A4438 @ 0x1400A4438
 * Callers:
 *     sub_1400A41C0 @ 0x1400A41C0 (sub_1400A41C0.c)
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009D620 @ 0x14009D620 (sub_14009D620.c)
 *     sub_1400A2E00 @ 0x1400A2E00 (sub_1400A2E00.c)
 */

__int64 __fastcall sub_1400A4438(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  char v8; // al
  __int64 v9; // rdx
  signed __int64 v10; // rax
  __int64 v11; // r11
  int v12; // r9d
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rcx
  float v17; // xmm6_4
  int v18; // r10d
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r12
  double LowPart; // xmm0_8
  double v22; // xmm0_8
  double v23; // xmm1_8
  __int64 v24; // rbp
  int v25; // eax
  int v26; // ebp
  double v27; // xmm3_8
  float v28; // xmm0_4
  __int64 v29; // rdx
  double v30; // xmm0_8
  double v31; // xmm1_8
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  double v34; // xmm0_8
  unsigned __int64 v35; // rdx
  float v36; // xmm1_4
  __int64 v37; // rax
  float v38; // xmm2_4
  unsigned __int64 v40; // [rsp+60h] [rbp-68h]
  __int64 v41; // [rsp+68h] [rbp-60h]
  __int64 v42; // [rsp+70h] [rbp-58h]
  __int64 v43; // [rsp+D0h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+E8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 88);
  v4 = 0;
  PerformanceCount.QuadPart = 0LL;
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v9 = *(_QWORD *)(a1 + 88);
  if ( (v8 & 4) == 0 )
  {
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 152), 0LL, 0LL);
LABEL_3:
    *a2 = v10;
    return v4;
  }
  if ( (v8 & 2) == 0 )
  {
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), 0LL, 0LL);
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(v9 + 112);
  v12 = 3;
  v42 = v11;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 128LL);
  v41 = v13;
  while ( 1 )
  {
    v14 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 160LL), 0, 0);
    v40 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 40 * v14 + 32);
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 40 * v14 + 56);
    v16 = *(_QWORD *)(a1 + 88);
    v43 = v15;
    v17 = *(float *)(v16 + 40 * v14 + 64);
    v18 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 40 * v14 + 68);
    if ( (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 160LL), 0, 0) )
      break;
    if ( !--v12 )
    {
      v4 = -2005139393;
LABEL_12:
      *a2 = *(_QWORD *)(a1 + 200);
      sub_140048108();
      return v4;
    }
  }
  if ( !v18 )
  {
    v4 = -2005139375;
    goto LABEL_12;
  }
  v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 152LL), 0LL, 0LL)
      / (unsigned __int64)*(unsigned int *)(a1 + 104);
  v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 24LL), 0LL, 0LL)
      / (unsigned __int64)*(unsigned int *)(a1 + 104);
  if ( v40 >= v11 + v13 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v22 = LowPart * 10000000.0;
    if ( qword_1400B7000 < 0 )
      v23 = (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1))
          + (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1));
    else
      v23 = (double)(int)qword_1400B7000;
    v24 = (unsigned int)(int)(v22 / v23);
    if ( a3 )
      *a3 = v24;
    if ( *(_BYTE *)(a1 + 416) )
    {
      v25 = sub_14009D620(&v43);
      v15 = v43;
      if ( v25 )
        *(_BYTE *)(a1 + 416) = 0;
    }
    if ( v24 < v15 )
      v26 = 0;
    else
      v26 = v24 - v15;
    v27 = v17;
    v28 = *(float *)(a1 + 172);
    v29 = v40 + (unsigned int)(int)((double)v26 * v17 / 10000000.0 + 0.5) - v41 - v42;
    if ( v28 != v17 )
    {
      v30 = v28;
      if ( v29 < 0 )
      {
        v32 = v29 & 1 | ((v40 + (unsigned int)(int)((double)v26 * v27 / 10000000.0 + 0.5) - v41 - v42) >> 1);
        v31 = (double)(int)v32 + (double)(int)v32;
      }
      else
      {
        v31 = (double)(int)v29;
      }
      v33 = 0LL;
      v34 = v30 * v31 / v27 + 0.5;
      if ( v34 >= 9.223372036854776e18 )
      {
        v34 = v34 - 9.223372036854776e18;
        if ( v34 < 9.223372036854776e18 )
          v33 = 0x8000000000000000uLL;
      }
      v29 = v33 + (unsigned int)(int)v34;
    }
    v35 = v19 + v29;
    if ( v35 < v20 )
      v20 = v35;
    *a2 = v20 * *(unsigned int *)(a1 + 104);
    if ( (byte_1400E8401 & 4) != 0 )
    {
      LOBYTE(v37) = 0;
      if ( a3 )
        v37 = *a3;
      v36 = (float)(int)*(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL);
      v38 = (float)(int)*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
      sub_1400A2E00(
        *a2,
        v35,
        a1,
        6,
        *a2,
        v37,
        v35,
        v19,
        SLOBYTE(v38),
        SLOBYTE(v36),
        SLOBYTE(v17),
        *(_DWORD *)(a1 + 172));
    }
  }
  else
  {
    *a2 = v19 * *(unsigned int *)(a1 + 104);
  }
  return v4;
}
