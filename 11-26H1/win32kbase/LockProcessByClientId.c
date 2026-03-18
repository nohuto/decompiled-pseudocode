/*
 * XREFs of LockProcessByClientId @ 0x14015E6E8
 * Callers:
 *     ProcessInfoFromPID @ 0x14015E684 (ProcessInfoFromPID.c)
 *     Win32ProcessFromPID @ 0x1401C38F8 (Win32ProcessFromPID.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall LockProcessByClientId(void *a1, PEPROCESS *a2)
{
  NTSTATUS v3; // esi
  int ProcessSessionId; // ebx
  __int64 v5; // rcx
  __int64 result; // rax

  *a2 = 0LL;
  v3 = PsLookupProcessByProcessId(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  ProcessSessionId = PsGetProcessSessionId(*a2);
  if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId(v5) )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  result = 3221225473LL;
  *a2 = 0LL;
  return result;
}
