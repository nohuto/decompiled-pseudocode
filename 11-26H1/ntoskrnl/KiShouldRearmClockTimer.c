/*
 * XREFs of KiShouldRearmClockTimer @ 0x14041902C
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x140330628 (KeUpdatePendingQosRequest.c)
 *     KiRestoreClockTickRate @ 0x140418994 (KiRestoreClockTickRate.c)
 *     KiSetClockIntervalOneShot @ 0x140418C6C (KiSetClockIntervalOneShot.c)
 *     KiSetClockTimer @ 0x140418F10 (KiSetClockTimer.c)
 *     KiCancelClockTimer @ 0x140419334 (KiCancelClockTimer.c)
 *     KePrepareClockTimerForIdle @ 0x1405ED338 (KePrepareClockTimerForIdle.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiGetClockTimerEarliestDeadline @ 0x140419130 (KiGetClockTimerEarliestDeadline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall KiShouldRearmClockTimer(__int64 a1, __int64 a2, char a3)
{
  __int64 InterruptTimePrecise; // r12
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  int ClockTimerEarliestDeadline; // eax
  unsigned __int64 v11; // rdx
  bool v12; // cc
  char v14; // [rsp+38h] [rbp-D0h] BYREF
  char v15; // [rsp+39h] [rbp-CFh] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  char *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  int *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  unsigned __int64 *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  __int64 *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  unsigned __int64 *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  char *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]

  InterruptTimePrecise = a2;
  if ( !*(_BYTE *)(a1 + 38472) )
    return 1;
  if ( !KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v17);
  v6 = KeMinimumIncrement;
  LOBYTE(a2) = a3;
  v7 = *(_QWORD *)(a1 + 38336);
  v8 = (unsigned int)KeMinimumIncrement;
  v9 = (unsigned int)KeMinimumIncrement + InterruptTimePrecise;
  ClockTimerEarliestDeadline = KiGetClockTimerEarliestDeadline(a1, a2);
  v11 = *(_QWORD *)(a1 + 16LL * ClockTimerEarliestDeadline + 38360);
  if ( *(_DWORD *)(a1 + 16LL * ClockTimerEarliestDeadline + 38368) >= v6 )
    v8 = *(unsigned int *)(a1 + 16LL * ClockTimerEarliestDeadline + 38368);
  if ( v9 > v11 + v8 )
  {
    v12 = v7 <= v9;
  }
  else
  {
    if ( v7 < v11 )
      return 1;
    v12 = v7 <= v11 + v8;
  }
  if ( !v12 )
    return 1;
  if ( (unsigned int)dword_140E06F58 > 5 )
  {
    v16 = ClockTimerEarliestDeadline;
    v23 = &v18;
    v14 = *(_BYTE *)(a1 + 33);
    v25 = &v14;
    v27 = &v19;
    v29 = &v16;
    v31 = &v20;
    v33 = &v21;
    v35 = &v17;
    v37 = &v15;
    v20 = v11;
    v21 = v11 + v8;
    v18 = InterruptTimePrecise;
    v24 = 8LL;
    v26 = 1LL;
    v19 = v9;
    v28 = 8LL;
    v30 = 4LL;
    v32 = 8LL;
    v34 = 8LL;
    v17 = v7;
    v36 = 8LL;
    v15 = a3;
    v38 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06F58,
      (unsigned __int8 *)&word_140048B9E,
      0LL,
      0LL,
      0xAu,
      &v22);
  }
  return 0;
}
