/*
 * XREFs of sub_1400A47BC @ 0x1400A47BC
 * Callers:
 *     sub_1400A41C0 @ 0x1400A41C0 (sub_1400A41C0.c)
 * Callees:
 *     sub_14000274C @ 0x14000274C (sub_14000274C.c)
 *     sub_1400027F8 @ 0x1400027F8 (sub_1400027F8.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009D620 @ 0x14009D620 (sub_14009D620.c)
 */

__int64 __fastcall sub_1400A47BC(__int64 a1, LARGE_INTEGER *a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 *v4; // r12
  DWORD v7; // r13d
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rcx
  float v14; // xmm6_4
  int v15; // r10d
  signed __int32 v16; // eax
  double LowPart; // xmm0_8
  double v18; // xmm0_8
  double v19; // xmm1_8
  __int64 v20; // rdi
  int v21; // eax
  int v22; // edi
  double v23; // xmm3_8
  __int64 QuadPart; // rcx
  float v25; // xmm0_4
  double v26; // xmm0_8
  double v27; // xmm1_8
  unsigned __int64 v28; // rcx
  double v29; // xmm0_8
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  LARGE_INTEGER v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v36; // [rsp+50h] [rbp-30h] BYREF
  __int64 v37; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v38[2]; // [rsp+60h] [rbp-20h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v40; // [rsp+D8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 88);
  v4 = (__int64 *)a3;
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v8 = 0;
  if ( (v7 & 4) == 0 )
  {
    v9 = 0LL;
    goto LABEL_41;
  }
  a3 = 3LL;
  do
  {
    v3 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 160LL), 0, 0);
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 40 * v3 + 32);
    v11 = *(_QWORD *)(a1 + 88);
    v36 = v10;
    v12 = *(_QWORD *)(v11 + 40 * v3 + 56);
    v13 = *(_QWORD *)(a1 + 88);
    v40 = v12;
    v14 = *(float *)(v13 + 40 * v3 + 64);
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 40 * v3 + 68);
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 160LL), 0, 0);
    if ( (_DWORD)v3 == v16 )
      break;
    a3 = (unsigned int)(a3 - 1);
  }
  while ( (_DWORD)a3 );
  if ( !v15 )
  {
    v8 = -2004287484;
LABEL_8:
    v9 = *(_QWORD *)(a1 + 200);
    goto LABEL_41;
  }
  if ( (_DWORD)v3 != v16 )
  {
    v8 = -2005139393;
    goto LABEL_8;
  }
  a2->QuadPart = v10;
  if ( (v7 & 1) != 0 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v18 = LowPart * 10000000.0;
    if ( qword_1400B7000 < 0 )
      v19 = (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1))
          + (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1));
    else
      v19 = (double)(int)qword_1400B7000;
    v20 = (unsigned int)(int)(v18 / v19);
    if ( v4 )
      *v4 = v20;
    if ( *(_BYTE *)(a1 + 416) )
    {
      v21 = sub_14009D620(&v40);
      v12 = v40;
      if ( v21 )
        *(_BYTE *)(a1 + 416) = 0;
    }
    if ( v20 < v12 )
      v22 = 0;
    else
      v22 = v20 - v12;
    v10 = v36;
    v23 = v14;
    a2->QuadPart += (unsigned int)(int)((double)v22 * v14 / 10000000.0 + 0.5);
    QuadPart = a2->QuadPart;
  }
  else
  {
    QuadPart = v10;
    v23 = v14;
  }
  v25 = *(float *)(a1 + 172);
  if ( v25 != v14 )
  {
    v26 = v25;
    if ( QuadPart < 0 )
      v27 = (double)(int)(QuadPart & 1 | ((unsigned __int64)QuadPart >> 1))
          + (double)(int)(QuadPart & 1 | ((unsigned __int64)QuadPart >> 1));
    else
      v27 = (double)(int)QuadPart;
    v28 = 0LL;
    v29 = v26 * v27 / v23 + 0.5;
    if ( v29 >= 9.223372036854776e18 )
    {
      v29 = v29 - 9.223372036854776e18;
      if ( v29 < 9.223372036854776e18 )
        v28 = 0x8000000000000000uLL;
    }
    a2->QuadPart = v28 + (unsigned int)(int)v29;
  }
  v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 24LL), 0LL, 0LL);
  v31 = *(unsigned int *)(a1 + 104);
  v32.QuadPart = v30 / v31;
  v33 = a2->QuadPart;
  if ( a2->QuadPart > (unsigned __int64)v32.QuadPart )
  {
    if ( (unsigned int)dword_1400E7428 > 5 )
    {
      v40 = a2->QuadPart;
      PerformanceCount = v32;
      v36 = v12;
      v37 = v10;
      v38[0] = a1;
      sub_14000274C(
        v31,
        (__int64)&unk_1400D3FB1,
        a3,
        v3,
        (__int64)v38,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v40,
        (__int64)&PerformanceCount);
    }
    *a2 = v32;
    v33 = v32.QuadPart;
  }
  v9 = v33 * *(unsigned int *)(a1 + 104);
LABEL_41:
  a2->QuadPart = v9;
  if ( (unsigned int)dword_1400E7428 > 5 )
  {
    if ( v4 )
      v34 = *v4;
    else
      v34 = 0LL;
    v40 = v34;
    v38[0] = v9;
    PerformanceCount.LowPart = v7;
    v37 = a1;
    sub_1400027F8(
      v9,
      (__int64)&unk_1400D3F5F,
      a3,
      v3,
      (__int64)&v37,
      (__int64)&PerformanceCount,
      (__int64)v38,
      (__int64)&v40);
  }
  if ( v8 < 0 )
    sub_140048108();
  return (unsigned int)v8;
}
