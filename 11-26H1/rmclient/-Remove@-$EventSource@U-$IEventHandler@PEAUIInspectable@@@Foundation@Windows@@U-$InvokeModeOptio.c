/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180017FD0
 * Callers:
 *     ?remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800184E0 (-remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180018500 (-remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::RemoveDelegate(
           a1,
           a2);
}
