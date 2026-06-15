/*
 * XREFs of sub_140016A80 @ 0x140016A80
 * Callers:
 *     sub_140015F50 @ 0x140015F50 (sub_140015F50.c)
 *     sub_14003F2C0 @ 0x14003F2C0 (sub_14003F2C0.c)
 * Callees:
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 */

__int64 __fastcall sub_140016A80(__int64 a1, void *a2, __int64 a3, char a4)
{
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm1_8
  LARGE_INTEGER v10; // rax
  unsigned __int64 v11; // rdx
  LARGE_INTEGER DueTime; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  if ( a4 )
  {
    v10.QuadPart = 0LL;
  }
  else
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v7 = PerformanceCount.QuadPart < 0
       ? (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
       + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
       : (double)(int)PerformanceCount.LowPart;
    v8 = v7 * -10000000.0;
    v9 = qword_1400B7000 < 0
       ? (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1))
       + (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1))
       : (double)(int)qword_1400B7000;
    v10.QuadPart = -a3;
    *(_QWORD *)(a1 + 304) = a3 - (unsigned int)(int)(v8 / v9);
  }
  DueTime = v10;
  v11 = (__int64)((unsigned __int128)(a3 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
  if ( SetWaitableTimer(a2, &DueTime, v11 + (v11 >> 63), 0LL, 0LL, 0) )
    return 0LL;
  else
    return sub_1400470EC(retaddr, 418LL, "avcore\\audiocore\\server\\audiodg\\exe\\AudioPump.h");
}
