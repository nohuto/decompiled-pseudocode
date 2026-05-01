/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V?$ComPtr@UIObservableObjectArrayChanged@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1804AC158
 * Callers:
 *     ?_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@ZW4ObservableArrayOperation@@1@Z @ 0x1804AC524 (-_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObserva.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V?$ComPtr@UIObservableObjectArrayChanged@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1804AC214 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V-$ComPtr@UI.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IObservableObjectArrayChanged,Microsoft::WRL::ComPtr<IObservableObjectArrayChanged>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<IObservableObjectArrayChanged,Microsoft::WRL::ComPtr<IObservableObjectArrayChanged>>::Iterator::GetCurrentObject();
  return a1;
}
