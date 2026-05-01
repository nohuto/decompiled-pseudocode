/*
 * XREFs of ?remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180018500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::remove_AppMemoryUsageIncreased(
        Windows::System::CMemoryManager *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           (__int64)&Windows::System::CMemoryManager::s_levelIncreasedEvent,
           a2.value);
}
