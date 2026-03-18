/*
 * XREFs of KeGetNextClockTickDuration @ 0x1405ED1F0
 * Callers:
 *     HalpTimerClockPowerChange @ 0x1405811D0 (HalpTimerClockPowerChange.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KeGetNextClockTickDuration(bool *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 ClockActive; // dl
  unsigned __int64 NextTickDueTime; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 InterruptTimePrecise; // rax
  bool v7; // zf
  bool v9; // [rsp+38h] [rbp-39h] BYREF
  bool v10; // [rsp+39h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+58h] [rbp-19h] BYREF
  bool *v14; // [rsp+78h] [rbp+7h]
  __int64 v15; // [rsp+80h] [rbp+Fh]
  unsigned __int64 *v16; // [rsp+88h] [rbp+17h]
  __int64 v17; // [rsp+90h] [rbp+1Fh]
  unsigned __int64 *v18; // [rsp+98h] [rbp+27h]
  __int64 v19; // [rsp+A0h] [rbp+2Fh]
  bool *v20; // [rsp+A8h] [rbp+37h]
  __int64 v21; // [rsp+B0h] [rbp+3Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( KiClockTimerPerCpuTickScheduling )
  {
    ClockActive = CurrentPrcb->ClockTimerState.ClockActive;
    if ( ClockActive )
      NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
    else
      NextTickDueTime = 0LL;
    v5 = 0LL;
    *a1 = ClockActive == 0;
    if ( !ClockActive )
      goto LABEL_10;
  }
  else
  {
    NextTickDueTime = KiClockTimerNextTickTime;
    v5 = 0LL;
    *a1 = 0;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v11);
  if ( NextTickDueTime > InterruptTimePrecise )
    v5 = NextTickDueTime - InterruptTimePrecise;
LABEL_10:
  if ( (unsigned int)dword_140E06F58 > 5 )
  {
    v9 = *a1;
    v15 = 1LL;
    v14 = &v9;
    v16 = &v12;
    v18 = &v11;
    v12 = v5;
    v17 = 8LL;
    v11 = NextTickDueTime;
    v19 = 8LL;
    v7 = (_DWORD)KiClockTimerOwner == KeGetPcr()->Prcb.Number;
    v20 = &v10;
    v10 = v7;
    v21 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06F58, (unsigned __int8 *)&word_140048DF6, 0LL, 0LL, 6u, &v13);
  }
  return v5;
}
