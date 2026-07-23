/*
 * XREFs of PoTraceForceIdleReset @ 0x140531818
 * Callers:
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     KiResetForceIdle @ 0x1403389B4 (KiResetForceIdle.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v2 = v1;
    v6 = &v2;
    v7 = 4LL;
    v8 = &v3;
    v3 = 0x1000000LL;
    v9 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004B85B, 0LL, 0LL, 4u, &v5);
  }
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_FORCEIDLE_RESET) )
    {
      UserData.Ptr = (ULONGLONG)&v10;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWriteEx(PopDiagHandle, &POP_ETW_FORCEIDLE_RESET, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
