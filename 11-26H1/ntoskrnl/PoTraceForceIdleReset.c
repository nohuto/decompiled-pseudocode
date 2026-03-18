/*
 * XREFs of PoTraceForceIdleReset @ 0x14052F2F8
 * Callers:
 *     KeClockInterruptNotify @ 0x1402216C0 (KeClockInterruptNotify.c)
 *     KiResetForceIdle @ 0x140336934 (KiResetForceIdle.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PoTraceForceIdleReset(int a1)
{
  int v1; // r8d
  int v2; // [rsp+40h] [rbp-19h] BYREF
  __int64 v3; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+60h] [rbp+7h] BYREF
  int *v6; // [rsp+80h] [rbp+27h]
  __int64 v7; // [rsp+88h] [rbp+2Fh]
  __int64 *v8; // [rsp+90h] [rbp+37h]
  __int64 v9; // [rsp+98h] [rbp+3Fh]
  int v10; // [rsp+C0h] [rbp+67h] BYREF

  v10 = a1;
  if ( (unsigned int)dword_140E07598 > 5 && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
  {
    v2 = v1;
    v6 = &v2;
    v7 = 4LL;
    v8 = &v3;
    v3 = 0x1000000LL;
    v9 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)word_14004B202, 0LL, 0LL, 4u, &v5);
  }
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], &POP_ETW_FORCEIDLE_RESET) )
    {
      UserData.Ptr = (ULONGLONG)&v10;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWriteEx(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_FORCEIDLE_RESET,
        0LL,
        0,
        0LL,
        0LL,
        1u,
        &UserData);
    }
  }
}
