/*
 * XREFs of KiSetClockTimer @ 0x140418F10
 * Callers:
 *     KiUpdateRunTime @ 0x14021F420 (KiUpdateRunTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140379C60 (KiSetClockTimerKTimerDeadlines.c)
 *     PpmIdleExecuteTransition @ 0x1403EB78C (PpmIdleExecuteTransition.c)
 *     KiResumeClockTimer @ 0x140523C58 (KiResumeClockTimer.c)
 *     KePrepareClockTimerForIdle @ 0x1405ED338 (KePrepareClockTimerForIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405EDA84 (KeResumeClockTimerFromIdle.c)
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetNextClockTickDueTime @ 0x1403796D0 (KiSetNextClockTickDueTime.c)
 *     KiShouldRearmClockTimer @ 0x14041902C (KiShouldRearmClockTimer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetClockTimer(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, char a6, char a7)
{
  int v8; // ecx
  __int64 v9; // r14
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 result; // rax
  __int64 InterruptTimePrecise; // rax
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  int *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int64 *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  char *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]

  v18 = a4;
  v8 = a5;
  v9 = a3;
  v17 = a5;
  v11 = a1 + 16LL * a5;
  if ( !KiClockTimerReducePreciseTimeQueries )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v20);
    v8 = v17;
    a2 = InterruptTimePrecise;
    a4 = v18;
  }
  v12 = a2 - v9;
  if ( v9 > 0 )
    v12 = v9;
  if ( (unsigned int)dword_140E06F58 > 5 )
  {
    v17 = v8;
    v25 = &v21;
    v19 = a4;
    v27 = &v17;
    v21 = a2;
    v29 = &v22;
    v26 = 8LL;
    v28 = 4LL;
    v23 = v12 - a2;
    v22 = v9;
    v31 = &v23;
    v33 = &v20;
    v35 = &v19;
    v37 = &v15;
    v39 = &v16;
    v30 = 8LL;
    v32 = 8LL;
    v20 = v12;
    v34 = 8LL;
    v36 = 4LL;
    v15 = a6;
    v38 = 1LL;
    v16 = a7;
    v40 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06F58,
      (unsigned __int8 *)byte_140048E89,
      0LL,
      0LL,
      0xAu,
      &v24);
    a4 = v18;
  }
  result = *(unsigned __int8 *)(v11 + 38372);
  LOBYTE(result) = result | 1;
  *(_QWORD *)(v11 + 38360) = v12;
  *(_DWORD *)(v11 + 38368) = a4;
  *(_BYTE *)(v11 + 38372) = result ^ (result ^ (2 * a6)) & 2;
  if ( a7 )
  {
    LOBYTE(a3) = 1;
    result = KiShouldRearmClockTimer(a1, a2, a3);
    if ( (_BYTE)result )
    {
      *(_DWORD *)(a1 + 38352) = 2;
      return KiSetNextClockTickDueTime(a2, 1);
    }
  }
  return result;
}
