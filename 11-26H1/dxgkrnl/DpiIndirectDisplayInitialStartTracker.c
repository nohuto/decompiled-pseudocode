/*
 * XREFs of DpiIndirectDisplayInitialStartTracker @ 0x14025062C
 * Callers:
 *     DpiInitializeGlobalState @ 0x14044C9F0 (DpiInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

void DpiIndirectDisplayInitialStartTracker()
{
  dword_140169420 = 0;
  KeInitializeEvent(&stru_140169428, NotificationEvent, 1u);
  dword_1401693E8 = 1;
  qword_1401693F0 = 0LL;
  dword_1401693F8 = 0;
  KeInitializeEvent(&stru_140169400, SynchronizationEvent, 0);
}
