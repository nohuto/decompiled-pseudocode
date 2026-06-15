/*
 * XREFs of sub_1400A41C0 @ 0x1400A41C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_1400A2E00 @ 0x1400A2E00 (sub_1400A2E00.c)
 *     sub_1400A4438 @ 0x1400A4438 (sub_1400A4438.c)
 *     sub_1400A47BC @ 0x1400A47BC (sub_1400A47BC.c)
 */

__int64 __fastcall sub_1400A41C0(__int64 a1, __int64 *a2, __int64 *a3)
{
  int v6; // esi
  __int64 v7; // r14
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  double v13; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm1_8
  double v16; // xmm0_8
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a3 )
      *a3 = 0LL;
    v7 = a1 - 432;
    v8 = (*(_BYTE *)(a1 - 432 + 192) & 1) == 0;
    v9 = a1 - 432;
    if ( v8 )
      v10 = sub_1400A4438(v9);
    else
      v10 = sub_1400A47BC(v9);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v11 = *(_QWORD *)(a1 - 232);
      if ( *a2 < v11 )
      {
        if ( (byte_1400E8401 & 4) != 0 )
          sub_1400A2E00(
            *(unsigned int *)(a1 - 328),
            (v11 - *a2) % *(unsigned int *)(a1 - 328),
            v7,
            8,
            *a2,
            v11,
            (v11 - *a2) / *(unsigned int *)(a1 - 328),
            0,
            0,
            0,
            0,
            0);
        *a2 = *(_QWORD *)(a1 - 232);
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( a3 && !*a3 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v13 = PerformanceCount.QuadPart < 0
        ? (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
        + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
        : (double)(int)PerformanceCount.LowPart;
    v14 = v13 * 10000000.0;
    v15 = qword_1400B7000 < 0
        ? (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1))
        + (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1))
        : (double)(int)qword_1400B7000;
    v16 = v14 / v15;
    v17 = (unsigned int)(int)v16;
    *a3 = v17;
    if ( (byte_1400E8401 & 4) != 0 )
    {
      if ( a2 )
        v18 = *a2;
      else
        LOBYTE(v18) = 0;
      sub_1400A2E00(v17, v12, a1 - 432, 6, v18, (int)v16, 0, 0, 0, 0, 0, 0);
    }
  }
  if ( a2 )
  {
    v19 = *(_QWORD *)(a1 - 432 + 200);
    if ( *a2 < v19 && (byte_1400E8401 & 4) != 0 )
      sub_1400A2E00(v19, *a2, a1 - 432, 8, *a2, v19, *(_DWORD *)(a1 - 328), 0, 0, 0, 0, 0);
    *(_QWORD *)(a1 - 232) = *a2;
  }
  if ( v6 < 0 )
    sub_140048108();
  return (unsigned int)v6;
}
