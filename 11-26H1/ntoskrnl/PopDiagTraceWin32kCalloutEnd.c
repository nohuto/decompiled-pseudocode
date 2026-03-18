/*
 * XREFs of PopDiagTraceWin32kCalloutEnd @ 0x140ABCDC4
 * Callers:
 *     PopInvokeWin32Callout @ 0x140ABCA7C (PopInvokeWin32Callout.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceWin32kCalloutEnd(int a1, __int64 a2, int a3)
{
  int v3; // ecx
  int v4; // ecx
  const EVENT_DESCRIPTOR *v5; // rbx
  int v6; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v8; // [rsp+48h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp-20h]
  int *v10; // [rsp+58h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp-10h]
  __int64 v12; // [rsp+88h] [rbp+18h] BYREF
  int v13; // [rsp+90h] [rbp+20h] BYREF

  if ( a2 )
  {
    v13 = a3;
    v12 = a2;
    v6 = 0;
    v3 = a1 - 3;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return;
        v5 = &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END;
      }
      else
      {
        v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_WIN32_STATE_CALLOUT_END;
      }
    }
    else
    {
      v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_WIN32_EVENT_CALLOUT_END;
    }
    if ( byte_140E67628 )
    {
      if ( EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], v5) )
      {
        UserData.Ptr = (ULONGLONG)&v12;
        *(_QWORD *)&UserData.Size = 8LL;
        v8 = &v13;
        v9 = 4LL;
        v10 = &v6;
        v11 = 4LL;
        EtwWrite(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], v5, 0LL, 3u, &UserData);
      }
    }
  }
}
