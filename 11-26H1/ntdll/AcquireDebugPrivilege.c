/*
 * XREFs of AcquireDebugPrivilege @ 0x18015A818
 * Callers:
 *     GetProcessIptTrace @ 0x18015A84C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015A95C (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x1800D2850 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(_QWORD *a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 20;
  return (int)RtlAcquirePrivilege(&v2, 1u, 0, a1) >= 0;
}
