/*
 * XREFs of ?IsManipulationThread@CManipulationManager@@SA_NXZ @ 0x1801CD9B4
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x180112DE4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     <none>
 */

bool CManipulationManager::IsManipulationThread(void)
{
  return GetCurrentThreadId() == CManipulationManager::s_dwManipulationThreadId;
}
