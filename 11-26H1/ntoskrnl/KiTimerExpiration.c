/*
 * XREFs of KiTimerExpiration @ 0x1403B5048
 * Callers:
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x1405FDA30 (KiTimerExpirationDpc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KiExpireTimerTable @ 0x1403B5450 (KiExpireTimerTable.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiTimerExpiration(__int64 a1, int a2, unsigned __int64 a3, char a4, __int64 a5)
{
  __int64 result; // rax
  int v6; // r14d
  int v10; // r12d
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // rsi
  unsigned int v14; // ebx
  int v15; // ebp
  _QWORD v17[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v18; // [rsp+60h] [rbp-58h] BYREF

  result = a5;
  v6 = 0;
  v18 = 0LL;
  if ( KiSerializeTimerExpiration )
  {
    if ( !*(_BYTE *)(a1 + 33) )
      return result;
    result = KiProcessorBlock[0];
  }
  else
  {
    result = a1;
  }
  v10 = result + 16640;
  if ( result != -16640 )
  {
    v11 = 2LL * *(unsigned int *)(a1 + 38016);
    *(_DWORD *)(a1 + 38016) = ((unsigned __int8)*(_DWORD *)(a1 + 38016) + 1) & 0xF;
    *(_QWORD *)(a1 + 8 * v11 + 38024) = a3;
    *(LARGE_INTEGER *)(a1 + 8 * v11 + 38032) = KeQueryPerformanceCounter(0LL);
    v12 = a3 >> 18;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      *(_QWORD *)&v18 = a3;
      v17[0] = &v18;
      BYTE8(v18) = 0;
      v17[1] = 16LL;
      EtwTraceKernelEvent((int)v17, 1, 0x40020000u, 3920, 1538);
    }
    v13 = 0LL;
    v14 = v12 - a2 + 1;
    if ( v14 > 0x100 )
      v13 = (v12 - v14 + 1) << 18;
    do
    {
      if ( v14 > 0x100 )
      {
        v15 = 256;
        v13 += 0x4000000LL;
      }
      else
      {
        v15 = v14;
        v6 = 256 - v14;
        v13 = a3;
        if ( 256 - v14 > 0x18 )
          v6 = 24;
      }
      KiExpireTimerTable(a1, v10, a2, v15, v6, v13, 0, a5);
      if ( a4 )
        KiExpireTimerTable(a1, v10, a2, v15, v6, v13, 1, a5);
      v6 = 0;
      a2 += v15;
      result = 24LL;
      v14 -= v15;
    }
    while ( v14 );
    if ( (*(_BYTE *)(a1 + 14524) & 8) == 0 )
    {
      *(_DWORD *)(a1 + 34404) = 0;
      result = *(unsigned int *)(a1 + 34408);
      if ( (unsigned int)result >= KePseudoHrTimeIncrement )
      {
        result = (unsigned int)(result - KePseudoHrTimeIncrement);
        *(_DWORD *)(a1 + 34408) = result;
      }
      else
      {
        *(_DWORD *)(a1 + 34408) = 0;
      }
    }
  }
  return result;
}
