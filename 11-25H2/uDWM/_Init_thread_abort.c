/*
 * XREFs of _Init_thread_abort @ 0x18009AE10
 * Callers:
 *     _CAnalogCompositorManager::GetInstance_::_1_::dtor$0 @ 0x1800EC138 (_CAnalogCompositorManager--GetInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  *a1 = 0;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
