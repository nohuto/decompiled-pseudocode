/*
 * XREFs of VidSchiUpdateCurrentIsrFrameTime @ 0x14002BDA0
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x14002A3F4 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiExecuteMmIoFlipAtISR @ 0x14002BD00 (VidSchiExecuteMmIoFlipAtISR.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

char __fastcall VidSchiUpdateCurrentIsrFrameTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  BOOL v7; // edi
  LARGE_INTEGER v9; // rcx
  DWORD LowPart; // edx
  __int64 v11; // rcx
  signed __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  __int128 v18; // [rsp+48h] [rbp-30h]

  v3 = 0LL;
  PerformanceCounter.LowPart = _InterlockedExchange((volatile __int32 *)(a2 + 44420), 0);
  v7 = a3 != 0;
  v9.QuadPart = 0LL;
  if ( !PerformanceCounter.LowPart )
  {
    LowPart = a3 != 0;
    if ( a3 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v9 = PerformanceCounter;
      LowPart = v7;
    }
LABEL_4:
    if ( !LowPart )
      return PerformanceCounter.LowPart;
    goto LABEL_8;
  }
  v9 = KeQueryPerformanceCounter(0LL);
  v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 44432), 0LL, 0LL);
  v13 = *(_QWORD *)(a2 + 44304);
  v14 = v12;
  LowPart = v7;
  PerformanceCounter.QuadPart = v9.QuadPart - v13;
  if ( !v14 )
    goto LABEL_4;
  if ( PerformanceCounter.QuadPart <= v14 )
    goto LABEL_4;
  PerformanceCounter.QuadPart /= v14;
  LowPart = PerformanceCounter.LowPart;
  if ( a3 || !PerformanceCounter.LowPart )
    goto LABEL_4;
  v9.QuadPart = v13 + v14 * PerformanceCounter.QuadPart;
LABEL_8:
  ++*(_DWORD *)(a2 + 44416);
  *(_QWORD *)(a2 + 44312) += LowPart;
  if ( *(_DWORD *)(a2 + 44416) < *(_DWORD *)(a2 + 83092) )
  {
    LOBYTE(PerformanceCounter.LowPart) = 1;
  }
  else
  {
    *(_DWORD *)(a2 + 44328) += LowPart;
    LOBYTE(PerformanceCounter.LowPart) = 0;
    *(_DWORD *)(a2 + 44416) = 0;
    *(LARGE_INTEGER *)(a2 + 44320) = v9;
  }
  *(_BYTE *)(a2 + 44344) = PerformanceCounter.LowPart;
  *(LARGE_INTEGER *)(a2 + 44304) = v9;
  if ( *(_BYTE *)(a2 + 8) && !*(_BYTE *)(a1 + 164) )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v17 = 0LL;
    LODWORD(v18) = 0;
    v16 = 0LL;
    PerformanceCounter.LowPart = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *))DxgCoreInterface[64])(
                                   v11,
                                   0LL,
                                   0LL,
                                   &v16);
    if ( (PerformanceCounter.LowPart & 0x80000000) == 0 )
      v3 = *((_QWORD *)&v16 + 1);
    *(_QWORD *)(a2 + 44336) = v3;
  }
  return PerformanceCounter.LowPart;
}
