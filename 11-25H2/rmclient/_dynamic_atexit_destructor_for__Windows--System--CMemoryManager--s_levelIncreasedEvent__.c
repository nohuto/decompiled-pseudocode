/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x180011400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = Windows::System::CMemoryManager::s_levelIncreasedEvent;
  if ( Windows::System::CMemoryManager::s_levelIncreasedEvent )
  {
    Windows::System::CMemoryManager::s_levelIncreasedEvent = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
             v2,
             a2);
  }
  return result;
}
