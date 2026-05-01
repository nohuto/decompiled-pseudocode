/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__ @ 0x180009FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = Windows::System::CMemoryManager::s_levelDecreasedEvent;
  if ( Windows::System::CMemoryManager::s_levelDecreasedEvent )
  {
    Windows::System::CMemoryManager::s_levelDecreasedEvent = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v0);
  }
  return result;
}
