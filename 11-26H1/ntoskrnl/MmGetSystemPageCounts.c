/*
 * XREFs of MmGetSystemPageCounts @ 0x1404D3070
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSystemPageCounts(__int64 a1)
{
  PVOID *p_SystemArgument2; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  p_SystemArgument2 = &stru_140E2D2D0.SchedulerApc.SystemArgument2;
  v2 = 4LL;
  v3 = a1 - (_QWORD)&stru_140E2D2D0.SchedulerApc.SystemArgument2;
  do
  {
    result = *(unsigned int *)p_SystemArgument2;
    *(_DWORD *)((char *)p_SystemArgument2 + v3) = result;
    p_SystemArgument2 = (PVOID *)((char *)p_SystemArgument2 + 4);
    --v2;
  }
  while ( v2 );
  return result;
}
