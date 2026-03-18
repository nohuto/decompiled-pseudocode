/*
 * XREFs of PopDiagTraceAdaptiveBootOverride @ 0x140CD1C18
 * Callers:
 *     PopAdaptiveInitializeBootContext @ 0x140CD6684 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceAdaptiveBootOverride(int a1, char a2)
{
  char v3; // [rsp+40h] [rbp-49h] BYREF
  BOOL v4; // [rsp+44h] [rbp-45h] BYREF
  int v5; // [rsp+48h] [rbp-41h] BYREF
  __int64 v6; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-31h] BYREF
  BOOL *v8; // [rsp+68h] [rbp-21h]
  __int64 v9; // [rsp+70h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+80h] [rbp-9h] BYREF
  int *v11; // [rsp+A0h] [rbp+17h]
  __int64 v12; // [rsp+A8h] [rbp+1Fh]
  char *v13; // [rsp+B0h] [rbp+27h]
  __int64 v14; // [rsp+B8h] [rbp+2Fh]
  __int64 *v15; // [rsp+C0h] [rbp+37h]
  __int64 v16; // [rsp+C8h] [rbp+3Fh]
  int v17; // [rsp+F0h] [rbp+67h] BYREF

  v17 = a1;
  v4 = 0;
  if ( byte_140E67628
    && EtwEventEnabled(
         *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
         &POP_ETW_EVENT_ADAPTIVE_OVERRIDE_BOOT_STATE) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    v9 = 4LL;
    v4 = a2 != 0;
    UserData.Ptr = (ULONGLONG)&v17;
    v8 = &v4;
    EtwWriteEx(
      *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
      &POP_ETW_EVENT_ADAPTIVE_OVERRIDE_BOOT_STATE,
      0LL,
      0,
      0LL,
      0LL,
      2u,
      &UserData);
  }
  if ( (unsigned int)dword_140E07598 > 5 && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
  {
    v5 = v17;
    v12 = 4LL;
    v11 = &v5;
    v3 = a2;
    v13 = &v3;
    v14 = 1LL;
    v15 = &v6;
    v6 = 0x1000000LL;
    v16 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)&byte_14004D01F, 0LL, 0LL, 5u, &v10);
  }
}
