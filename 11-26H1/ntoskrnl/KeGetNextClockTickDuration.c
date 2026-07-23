/*
 * XREFs of KeGetNextClockTickDuration @ 0x1405EFB60
 * Callers:
 *     HalpTimerClockPowerChange @ 0x1405836F0 (HalpTimerClockPowerChange.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

LONGLONG __fastcall KeGetNextClockTickDuration(bool *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 ClockActive; // dl
  LARGE_INTEGER NextTickDueTime; // rdi
  LONGLONG v5; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  bool v7; // zf
  bool v9; // [rsp+38h] [rbp-39h] BYREF
  bool v10; // [rsp+39h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-31h] BYREF
  LONGLONG v12; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+58h] [rbp-19h] BYREF
  bool *v14; // [rsp+78h] [rbp+7h]
  __int64 v15; // [rsp+80h] [rbp+Fh]
  LONGLONG *v16; // [rsp+88h] [rbp+17h]
  __int64 v17; // [rsp+90h] [rbp+1Fh]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+98h] [rbp+27h]
  __int64 v19; // [rsp+A0h] [rbp+2Fh]
  bool *v20; // [rsp+A8h] [rbp+37h]
  __int64 v21; // [rsp+B0h] [rbp+3Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( KiClockTimerPerCpuTickScheduling )
  {
    ClockActive = CurrentPrcb->ClockTimerState.ClockActive;
    if ( ClockActive )
      NextTickDueTime = (LARGE_INTEGER)CurrentPrcb->ClockTimerState.NextTickDueTime;
    else
      NextTickDueTime.QuadPart = 0LL;
    v5 = 0LL;
    *a1 = ClockActive == 0;
    if ( !ClockActive )
      goto LABEL_10;
  }
  else
  {
    NextTickDueTime.QuadPart = KiClockTimerNextTickTime;
    v5 = 0LL;
    *a1 = 0;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  if ( NextTickDueTime.QuadPart > (unsigned __int64)InterruptTimePrecise.QuadPart )
    v5 = NextTickDueTime.QuadPart - InterruptTimePrecise.QuadPart;
LABEL_10:
  if ( (unsigned int)dword_140E06F90 > 5 )
  {
    v9 = *a1;
    v15 = 1LL;
    v14 = &v9;
    v16 = &v12;
    p_PerformanceCounter = &PerformanceCounter;
    v12 = v5;
    v17 = 8LL;
    PerformanceCounter = NextTickDueTime;
    v19 = 8LL;
    v7 = (_DWORD)KiClockTimerOwner == KeGetPcr()->Prcb.Number;
    v20 = &v10;
    v10 = v7;
    v21 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06F90, (unsigned __int8 *)word_1400494BA, 0LL, 0LL, 6u, &v13);
  }
  return v5;
}
