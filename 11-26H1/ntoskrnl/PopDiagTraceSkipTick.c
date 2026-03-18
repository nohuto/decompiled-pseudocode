/*
 * XREFs of PopDiagTraceSkipTick @ 0x1407D4C10
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSkipTick(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+34h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v2 = a2;
  v3 = a1;
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], &POP_ETW_EVENT_SKIP_TICK) )
    {
      UserData.Ptr = (ULONGLONG)&v4;
      v4 = v3;
      v7 = &v5;
      v5 = v2;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = 4LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_SKIP_TICK,
        0LL,
        2u,
        &UserData);
    }
  }
}
