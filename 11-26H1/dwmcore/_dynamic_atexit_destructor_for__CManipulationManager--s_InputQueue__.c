/*
 * XREFs of _dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__ @ 0x1802B9F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__()
{
  CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::~CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>((__int64 *)&CManipulationManager::s_InputQueue);
}
