/*
 * XREFs of KiCancelClockTimer @ 0x140419334
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403EB78C (PpmIdleExecuteTransition.c)
 *     KiResetClockIntervalOneShot @ 0x140418B34 (KiResetClockIntervalOneShot.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405EE360 (KiCancelClockTimerKTimerDeadlines.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetNextClockTickDueTime @ 0x1403796D0 (KiSetNextClockTickDueTime.c)
 *     KiShouldRearmClockTimer @ 0x14041902C (KiShouldRearmClockTimer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall KiCancelClockTimer(__int64 a1, int a2, char a3)
{
  __int64 v4; // rax
  __int64 InterruptTimePrecise; // rbx
  char v8; // [rsp+30h] [rbp-9h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp+7h] BYREF
  unsigned __int64 *v11; // [rsp+60h] [rbp+27h]
  __int64 v12; // [rsp+68h] [rbp+2Fh]
  char *v13; // [rsp+70h] [rbp+37h]
  __int64 v14; // [rsp+78h] [rbp+3Fh]

  v4 = 16LL * a2;
  *(_BYTE *)(v4 + a1 + 38372) &= ~1u;
  if ( (unsigned int)dword_140E06F58 > 5 )
  {
    LODWORD(v9) = a2;
    v12 = 4LL;
    v11 = &v9;
    v8 = a3;
    v13 = &v8;
    v14 = 1LL;
    LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                   (__int64)&dword_140E06F58,
                   (unsigned __int8 *)byte_140048E4D,
                   0LL,
                   0LL,
                   4u,
                   &v10);
  }
  if ( a3 )
  {
    if ( KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v9);
    else
      InterruptTimePrecise = 0LL;
    LOBYTE(v4) = KiShouldRearmClockTimer(a1, InterruptTimePrecise, 1);
    if ( (_BYTE)v4 )
    {
      *(_DWORD *)(a1 + 38352) = 2;
      LOBYTE(v4) = KiSetNextClockTickDueTime(InterruptTimePrecise, 1);
    }
  }
  return v4;
}
