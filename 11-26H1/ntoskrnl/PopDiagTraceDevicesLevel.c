/*
 * XREFs of PopDiagTraceDevicesLevel @ 0x140C0C5B0
 * Callers:
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDevicesLevel(int a1, int a2, char a3, char a4)
{
  __int64 *v4; // rbx
  __int64 *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+70h] [rbp+8h] BYREF
  char v11; // [rsp+80h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a1;
  if ( a2 )
  {
    v4 = POP_ETW_EVENT_DEVICESWAKELEVEL;
    v5 = (__int64 *)&POP_ETW_EVENT_DEVICESWAKELEVEL_END;
  }
  else
  {
    v5 = POP_ETW_EVENT_DEVICESSUSPENDLEVEL_END;
    v4 = POP_ETW_EVENT_DEVICESSUSPENDLEVEL;
  }
  if ( !a4 )
    v4 = v5;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, (PCEVENT_DESCRIPTOR)v4);
    if ( (_BYTE)v5 )
    {
      UserData.Ptr = (ULONGLONG)&v10;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = &v11;
      v9 = 1LL;
      LOBYTE(v5) = EtwWrite(PopDiagHandle, (PCEVENT_DESCRIPTOR)v4, 0LL, 2u, &UserData);
    }
  }
  return (char)v5;
}
