/*
 * XREFs of PpmEventPlatformVetoRequest @ 0x14042185C
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x140421350 (PpmUpdatePlatformIdleVeto.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventPlatformVetoRequest(int a1, int a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+80h] [rbp+8h] BYREF
  int v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = a2;
  v9 = a1;
  v3 = &PPM_ETW_PLATFORM_IDLE_VETO_INCREMENT;
  v4 = (const EVENT_DESCRIPTOR *)L"T";
  if ( a3 )
    v4 = &PPM_ETW_PLATFORM_IDLE_VETO_INCREMENT;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, v4);
    if ( (_BYTE)v3 )
    {
      UserData.Ptr = (ULONGLONG)&v9;
      *(_QWORD *)&UserData.Size = 4LL;
      v7 = &v10;
      v8 = 4LL;
      LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
