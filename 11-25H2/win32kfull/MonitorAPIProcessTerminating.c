/*
 * XREFs of MonitorAPIProcessTerminating @ 0x1401B7F40
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyPhysicalMonitorsOwnedByProcess@CMonitorAPI@@QEAAXPEAX@Z @ 0x1401B7F78 (-DestroyPhysicalMonitorsOwnedByProcess@CMonitorAPI@@QEAAXPEAX@Z.c)
 */

void __fastcall MonitorAPIProcessTerminating(void *a1, __int64 a2)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  CMonitorAPI::DestroyPhysicalMonitorsOwnedByProcess(*(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL), a1);
}
