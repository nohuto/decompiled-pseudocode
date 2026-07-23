/*
 * XREFs of PopDiagTraceFxPluginRegistration @ 0x140B3DE28
 * Callers:
 *     PopDiagTraceFxRundown @ 0x140422618 (PopDiagTraceFxRundown.c)
 *     PopFxRegisterPluginEx @ 0x140608104 (PopFxRegisterPluginEx.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPluginRegistration(__int64 a1, __int64 a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF

  v10 = a2;
  v9 = a1;
  v3 = &POP_ETW_EVENT_PLUGIN_REGISTRATION;
  v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PLUGIN_REGISTRATION_RUNDOWN;
  if ( !a3 )
    v4 = &POP_ETW_EVENT_PLUGIN_REGISTRATION;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, v4);
    if ( (_BYTE)v3 )
    {
      UserData.Ptr = (ULONGLONG)&v9;
      *(_QWORD *)&UserData.Size = 8LL;
      v7 = &v10;
      v8 = 8LL;
      LOBYTE(v3) = EtwWrite(PopDiagHandle, v4, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
