/*
 * XREFs of KiSetClockTimerKTimerDeadlines @ 0x14037BA10
 * Callers:
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14037AE50 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockInterval @ 0x14040CD6C (KiSetClockInterval.c)
 *     KiResumeClockTimer @ 0x1405262C8 (KiResumeClockTimer.c)
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 *     KiResetClockInterval @ 0x1405F0FDC (KiResetClockInterval.c)
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetClockTimer @ 0x14040D440 (KiSetClockTimer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall KiSetClockTimerKTimerDeadlines(__int64 a1, LARGE_INTEGER a2, char a3)
{
  __int64 v3; // rsi
  int v6; // r15d
  ULONG LowPart; // r14d
  LARGE_INTEGER InterruptTimePrecise; // rcx
  LARGE_INTEGER v9; // rdi
  char v10; // al
  char result; // al
  char v12; // [rsp+40h] [rbp-C0h] BYREF
  char v13; // [rsp+41h] [rbp-BFh] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  LONGLONG v19; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  __int64 *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  LONGLONG *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  char *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  char *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]

  v3 = KiLastPseudoHrTimerExpiration + (unsigned int)KePseudoHrTimeIncrement;
  v6 = KeMinimumIncrement;
  LowPart = a2.LowPart;
  InterruptTimePrecise = a2;
  if ( !KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v9.QuadPart = InterruptTimePrecise.QuadPart - v3;
  if ( v3 > 0 )
    v9.QuadPart = v3;
  if ( (unsigned int)dword_140E06F90 > 5 )
  {
    v17 = InterruptTimePrecise;
    v21 = &v17;
    v22 = 8LL;
    v23 = &v14;
    v14 = 1;
    v25 = &v18;
    v24 = 4LL;
    v18 = v3;
    v19 = v9.QuadPart - InterruptTimePrecise.QuadPart;
    v26 = 8LL;
    v27 = &v19;
    p_PerformanceCounter = &PerformanceCounter;
    v31 = &v15;
    v33 = &v12;
    v35 = &v13;
    v28 = 8LL;
    PerformanceCounter = v9;
    v30 = 8LL;
    v15 = v6;
    v32 = 4LL;
    v12 = 0;
    v34 = 1LL;
    v13 = 0;
    v36 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06F90,
      (unsigned __int8 *)word_140049432,
      0LL,
      0LL,
      0xAu,
      &v20);
  }
  v10 = *(_BYTE *)(a1 + 38388) & 0xFD;
  *(LARGE_INTEGER *)(a1 + 38376) = v9;
  result = v10 | 1;
  *(_DWORD *)(a1 + 38384) = v6;
  *(_BYTE *)(a1 + 38388) = result;
  if ( a3 )
  {
    if ( KiClockOwnerOneShotRequest )
      return KiSetClockTimer(a1, LowPart, KiClockOwnerOneShotRequest, 0, 2, 0, 0);
  }
  return result;
}
