/*
 * XREFs of CrmStateMonitorTimeSinceBootCleanup @ 0x18007744C
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180076260 (CrmStateMonitorCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorTimeSinceBootCleanup(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 72), 1LL);
    return TpReleaseTimer(*(_QWORD *)(a1 + 72));
  }
  return result;
}
