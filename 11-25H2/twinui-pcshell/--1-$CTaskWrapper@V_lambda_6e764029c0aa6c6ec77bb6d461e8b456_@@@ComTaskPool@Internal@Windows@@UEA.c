/*
 * XREFs of ??1?$CTaskWrapper@V_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1802EE280
 * Callers:
 *     ??_GCMonitorNotificationHelper@@UEAAPEAXI@Z @ 0x1802EE320 (--_GCMonitorNotificationHelper@@UEAAPEAXI@Z.c)
 *     ??_G?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@V_lambda_e70cde33cb0c7d1a2119e2b787893688_@@$0?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803A6820 (--_G-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerIntero_ea_1803A6820.c)
 *     ??_G?$CTaskWrapper@V_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18044D3C0 (--_G-$CTaskWrapper@V_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_GCAppLayoutItemEnum@@UEAAPEAXI@Z @ 0x18069DE00 (--_GCAppLayoutItemEnum@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6e764029c0aa6c6ec77bb6d461e8b456_>::~CTaskWrapper<_lambda_6e764029c0aa6c6ec77bb6d461e8b456_>(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
