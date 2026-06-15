/*
 * XREFs of sub_140015930 @ 0x140015930
 * Callers:
 *     sub_1400386A0 @ 0x1400386A0 (sub_1400386A0.c)
 * Callees:
 *     sub_140015BA8 @ 0x140015BA8 (sub_140015BA8.c)
 *     sub_140015C30 @ 0x140015C30 (sub_140015C30.c)
 *     sub_140023530 @ 0x140023530 (sub_140023530.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 */

void __fastcall sub_140015930(__int64 a1)
{
  __int64 (__fastcall **v2)(__int64); // rdx
  __int64 (__fastcall *v3)(__int64); // rax
  _QWORD *v4; // rcx
  void *v5; // rdi
  __int64 v6; // rsi
  double LowPart; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm1_8
  unsigned __int64 v10; // rdx
  void *v11; // rdi
  _DWORD *v12; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER DueTime; // [rsp+60h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 312) )
    return;
  if ( *(_BYTE *)(a1 + 4752) )
  {
    ++*(_QWORD *)(a1 + 4744);
    *(_BYTE *)(a1 + 4752) = 0;
  }
  v2 = (__int64 (__fastcall **)(__int64))(a1 + 216);
  *(_QWORD *)(a1 + 376) = *(_QWORD *)(a1 + 4664);
  v3 = *(__int64 (__fastcall **)(__int64))(a1 + 216);
  v4 = (_QWORD *)(a1 + 408);
  if ( sub_140014350 == v3 )
  {
    if ( *v4 )
      goto LABEL_8;
    v2 = (__int64 (__fastcall **)(__int64))(a1 + 216);
  }
  *(_BYTE *)(a1 + 272) = 0;
LABEL_8:
  if ( sub_140014350 == v3 && *v4 )
    *(_BYTE *)(a1 + 4681) = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 0, 0) )
  {
    if ( sub_140014350 == *v2 && *v4 )
    {
      *(_BYTE *)(a1 + 272) = 0;
      *(_BYTE *)(a1 + 4681) = 1;
    }
    v5 = *(void **)(a1 + 296);
    v6 = (unsigned int)(int)((double)(int)*(_QWORD *)(a1 + 104) * 1.5);
    if ( v5 )
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      if ( PerformanceCount.QuadPart < 0 )
        LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
                + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
      else
        LowPart = (double)(int)PerformanceCount.LowPart;
      v8 = LowPart * -10000000.0;
      if ( qword_1400B7000 < 0 )
        v9 = (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1))
           + (double)(int)(qword_1400B7000 & 1 | ((unsigned __int64)qword_1400B7000 >> 1));
      else
        v9 = (double)(int)qword_1400B7000;
      *(_QWORD *)(a1 + 304) = v6 - (unsigned int)(int)(v8 / v9);
      DueTime.QuadPart = -v6;
      v10 = (__int64)((unsigned __int128)(v6 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
      if ( !SetWaitableTimer(v5, &DueTime, v10 + (v10 >> 63), 0LL, 0LL, 0) )
        sub_1400470EC(retaddr, 418LL, "avcore\\audiocore\\server\\audiodg\\exe\\AudioPump.h");
    }
  }
  else
  {
    v11 = *(void **)(a1 + 296);
    if ( v11 )
    {
      CancelWaitableTimer(*(HANDLE *)(a1 + 296));
      WaitForSingleObject(v11, 0);
    }
    sub_140015BA8(a1);
    *(_BYTE *)(a1 + 4681) = 0;
    if ( (unsigned __int8)sub_140015C30(a1) )
    {
      v12 = *(_DWORD **)(a1 + 4768);
      *(_BYTE *)(a1 + 4682) = 1;
      if ( *v12 > 5u )
        sub_140023530(v12, &unk_1400D22F7, 0LL);
    }
  }
}
