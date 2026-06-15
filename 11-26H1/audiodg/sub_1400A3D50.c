/*
 * XREFs of sub_1400A3D50 @ 0x1400A3D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_1400A2D44 @ 0x1400A2D44 (sub_1400A2D44.c)
 */

__int64 __fastcall sub_1400A3D50(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // rbx
  int v6; // ebp
  int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // r10
  int v10; // r11d
  double LowPart; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm1_8
  __int64 v14; // rcx
  __int64 v15; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+10h] BYREF

  PerformanceCount.QuadPart = 0LL;
  v4 = (__int64 *)a2;
  if ( a2 )
  {
    if ( a3 )
      *a3 = 0LL;
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 - 352) + 164LL), 0, 0);
    v6 = 0;
    v7 = 3;
    while ( 1 )
    {
      v8 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 - 352) + 160LL), 0, 0);
      a2 = 5 * v8;
      v9 = *(_QWORD *)(*(_QWORD *)(a1 - 352) + 40 * v8 + 32);
      v10 = *(_DWORD *)(*(_QWORD *)(a1 - 352) + 40 * v8 + 68);
      if ( (_DWORD)v8 == _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 - 352) + 160LL), 0, 0) )
        break;
      if ( !--v7 )
      {
        v6 = -2005139393;
        *v4 = *(_QWORD *)(a1 - 232);
        goto LABEL_12;
      }
    }
    if ( v10 )
    {
      *v4 = v9;
    }
    else
    {
      v6 = -2005139375;
      *v4 = *(_QWORD *)(a1 - 232);
    }
  }
  else
  {
    v6 = -2147467261;
  }
LABEL_12:
  if ( a3 && !*a3 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v12 = LowPart * 10000000.0;
    if ( qword_1400B7000 < 0 )
      v13 = (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1))
          + (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1));
    else
      v13 = (double)(int)qword_1400B7000;
    *a3 = (unsigned int)(int)(v12 / v13);
  }
  if ( (byte_1400E8401 & 4) != 0 )
  {
    v14 = 0LL;
    if ( a3 )
      v14 = *a3;
    LOBYTE(v15) = 0;
    if ( v4 )
      v15 = *v4;
    sub_1400A2D44(v14, a2, a1 - 440, 7, 0, v15, 0, v14);
  }
  if ( v4 )
    *(_QWORD *)(a1 - 232) = *v4;
  if ( v6 < 0 )
    sub_140048108();
  return (unsigned int)v6;
}
