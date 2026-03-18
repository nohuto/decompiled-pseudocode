/*
 * XREFs of KiSetClockTimerKTimerDeadlines @ 0x140379C60
 * Callers:
 *     KeClockInterruptNotify @ 0x1402216C0 (KeClockInterruptNotify.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1403790A0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockInterval @ 0x140418834 (KiSetClockInterval.c)
 *     KiResumeClockTimer @ 0x140523C58 (KiResumeClockTimer.c)
 *     KeResumeClockTimerFromIdle @ 0x1405EDA84 (KeResumeClockTimerFromIdle.c)
 *     KiResetClockInterval @ 0x1405EE66C (KiResetClockInterval.c)
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetClockTimer @ 0x140418F10 (KiSetClockTimer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall KiSetClockTimerKTimerDeadlines(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  int v6; // r15d
  int v7; // r14d
  __int64 InterruptTimePrecise; // rcx
  unsigned __int64 v9; // rdi
  char v10; // al
  char result; // al
  char v12; // [rsp+40h] [rbp-C0h] BYREF
  char v13; // [rsp+41h] [rbp-BFh] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  __int64 *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  char *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  char *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]

  v3 = KiLastPseudoHrTimerExpiration + (unsigned int)KePseudoHrTimeIncrement;
  v6 = KeMinimumIncrement;
  v7 = a2;
  InterruptTimePrecise = a2;
  if ( !KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v16);
  v9 = InterruptTimePrecise - v3;
  if ( v3 > 0 )
    v9 = v3;
  if ( (unsigned int)dword_140E06F58 > 5 )
  {
    v17 = InterruptTimePrecise;
    v21 = &v17;
    v22 = 8LL;
    v23 = &v14;
    v14 = 1;
    v25 = &v18;
    v24 = 4LL;
    v18 = v3;
    v19 = v9 - InterruptTimePrecise;
    v26 = 8LL;
    v27 = &v19;
    v29 = &v16;
    v31 = &v15;
    v33 = &v12;
    v35 = &v13;
    v28 = 8LL;
    v16 = v9;
    v30 = 8LL;
    v15 = v6;
    v32 = 4LL;
    v12 = 0;
    v34 = 1LL;
    v13 = 0;
    v36 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06F58,
      (unsigned __int8 *)byte_140048E89,
      0LL,
      0LL,
      0xAu,
      &v20);
  }
  v10 = *(_BYTE *)(a1 + 38388) & 0xFD;
  *(_QWORD *)(a1 + 38376) = v9;
  result = v10 | 1;
  *(_DWORD *)(a1 + 38384) = v6;
  *(_BYTE *)(a1 + 38388) = result;
  if ( a3 )
  {
    if ( KiClockOwnerOneShotRequest )
      return KiSetClockTimer(a1, v7, KiClockOwnerOneShotRequest, 0, 2, 0, 0);
  }
  return result;
}
