/*
 * XREFs of _DwmCheckProcessSession @ 0x1401747B0
 * Callers:
 *     NtUserCheckProcessSession @ 0x1401E2390 (NtUserCheckProcessSession.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall DwmCheckProcessSession(int a1)
{
  NTSTATUS v1; // edi
  int ProcessSessionId; // ebx
  __int64 v3; // rcx
  PEPROCESS Process; // [rsp+38h] [rbp+10h] BYREF

  Process = 0LL;
  v1 = PsLookupProcessByProcessId((HANDLE)a1, &Process);
  if ( v1 >= 0 )
  {
    ProcessSessionId = PsGetProcessSessionId(Process);
    if ( ProcessSessionId != (unsigned int)W32GetCurrentWin32kSessionId(v3) )
      v1 = -1073741823;
    ObfDereferenceObject(Process);
  }
  return (unsigned int)v1;
}
