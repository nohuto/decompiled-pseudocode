/*
 * XREFs of ?RmpMemoryMonitorCheckPeriod@@YAEKK@Z @ 0x18005E2E0
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18008A7F0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpMemoryMonitorCheckPeriod(DWORD a1, int a2)
{
  return GetTickCount() - a2 >= a1;
}
