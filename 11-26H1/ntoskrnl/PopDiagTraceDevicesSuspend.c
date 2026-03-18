/*
 * XREFs of PopDiagTraceDevicesSuspend @ 0x140B360A4
 * Callers:
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDevicesSuspend(unsigned __int8 a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v6; // [rsp+48h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-20h]
  int *v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+88h] [rbp+18h] BYREF
  int v11; // [rsp+90h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a2;
  v3 = a1;
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], &POP_ETW_EVENT_DEVICESSUSPEND) )
    {
      UserData.Ptr = (ULONGLONG)&v4;
      v4 = v3;
      v6 = &v10;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = &v11;
      v7 = 4LL;
      v9 = 4LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_DEVICESSUSPEND,
        0LL,
        3u,
        &UserData);
    }
  }
}
