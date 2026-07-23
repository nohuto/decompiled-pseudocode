/*
 * XREFs of KiShouldRearmClockTimer @ 0x14040D55C
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x140332658 (KeUpdatePendingQosRequest.c)
 *     KiRestoreClockTickRate @ 0x14040CECC (KiRestoreClockTickRate.c)
 *     KiSetClockIntervalOneShot @ 0x14040D19C (KiSetClockIntervalOneShot.c)
 *     KiSetClockTimer @ 0x14040D440 (KiSetClockTimer.c)
 *     KiCancelClockTimer @ 0x14040D864 (KiCancelClockTimer.c)
 *     KePrepareClockTimerForIdle @ 0x1405EFCA8 (KePrepareClockTimerForIdle.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiGetClockTimerEarliestDeadline @ 0x14040D660 (KiGetClockTimerEarliestDeadline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall KiShouldRearmClockTimer(__int64 a1, LARGE_INTEGER a2, char a3)
{
  LARGE_INTEGER InterruptTimePrecise; // r12
  unsigned int v6; // ebx
  LARGE_INTEGER v7; // rsi
  __int64 v8; // r14
  LARGE_INTEGER v9; // r15
  int v10; // eax
  LARGE_INTEGER v11; // rdx
  bool v12; // cc
  char v14; // [rsp+38h] [rbp-D0h] BYREF
  char v15; // [rsp+39h] [rbp-CFh] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-C8h] BYREF
  LARGE_INTEGER v18; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER v19; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER v20; // [rsp+58h] [rbp-B0h] BYREF
  LONGLONG v21; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  char *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  LARGE_INTEGER *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  int *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  LARGE_INTEGER *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  LONGLONG *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  char *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]

  InterruptTimePrecise = a2;
  if ( !*(_BYTE *)(a1 + 38472) )
    return 1;
  if ( !KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v6 = KeMinimumIncrement;
  LOBYTE(a2.LowPart) = a3;
  v7 = *(LARGE_INTEGER *)(a1 + 38336);
  v8 = (unsigned int)KeMinimumIncrement;
  v9.QuadPart = (unsigned int)KeMinimumIncrement + InterruptTimePrecise.QuadPart;
  v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiGetClockTimerEarliestDeadline)(a1, (LARGE_INTEGER)a2.QuadPart);
  v11 = *(LARGE_INTEGER *)(a1 + 16LL * v10 + 38360);
  if ( *(_DWORD *)(a1 + 16LL * v10 + 38368) >= v6 )
    v8 = *(unsigned int *)(a1 + 16LL * v10 + 38368);
  if ( v9.QuadPart > (unsigned __int64)(v11.QuadPart + v8) )
  {
    v12 = v7.QuadPart <= (unsigned __int64)v9.QuadPart;
  }
  else
  {
    if ( v7.QuadPart < (unsigned __int64)v11.QuadPart )
      return 1;
    v12 = v7.QuadPart <= (unsigned __int64)(v11.QuadPart + v8);
  }
  if ( !v12 )
    return 1;
  if ( (unsigned int)dword_140E06F90 > 5 )
  {
    v16 = v10;
    v23 = &v18;
    v14 = *(_BYTE *)(a1 + 33);
    v25 = &v14;
    v27 = &v19;
    v29 = &v16;
    v31 = &v20;
    v33 = &v21;
    p_PerformanceCounter = &PerformanceCounter;
    v37 = &v15;
    v20 = v11;
    v21 = v11.QuadPart + v8;
    v18 = InterruptTimePrecise;
    v24 = 8LL;
    v26 = 1LL;
    v19 = v9;
    v28 = 8LL;
    v30 = 4LL;
    v32 = 8LL;
    v34 = 8LL;
    PerformanceCounter = v7;
    v36 = 8LL;
    v15 = a3;
    v38 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06F90,
      (unsigned __int8 *)&byte_140049087,
      0LL,
      0LL,
      0xAu,
      &v22);
  }
  return 0;
}
