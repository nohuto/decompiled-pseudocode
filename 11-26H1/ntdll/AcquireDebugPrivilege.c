/*
 * XREFs of AcquireDebugPrivilege @ 0x18015A6E8
 * Callers:
 *     GetProcessIptTrace @ 0x18015A71C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015A82C (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x1800D2720 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(PVOID *ReturnedState)
{
  ULONG Privilege; // [rsp+38h] [rbp+10h] BYREF

  Privilege = 20;
  return RtlAcquirePrivilege(&Privilege, 1u, 0, ReturnedState) >= 0;
}
