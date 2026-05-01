/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x180049760
 * Callers:
 *     _CClassicWindowManager::GetIntersectingMonitors_::_1_::dtor$2 @ 0x1806CEF7E (_CClassicWindowManager--GetIntersectingMonitors_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$6 @ 0x1806CF017 (_CApplicationManager--_HandleActivation2_--_1_--dtor$6.c)
 *     _NotificationDispatcher::WndProc_::_1_::dtor$1 @ 0x1806D2277 (_NotificationDispatcher--WndProc_--_1_--dtor$1.c)
 *     _NotificationDispatcher::DispatchNotifications_::_1_::dtor$0 @ 0x1806D2289 (_NotificationDispatcher--DispatchNotifications_--_1_--dtor$0.c)
 *     _CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor$0 @ 0x1806D4B1F (_CApplicationManager--_PerformDesktopActivationCallouts_--_1_--dtor$0.c)
 *     _ObservableObjectArray::ObservableObjectArray_::_1_::dtor$0 @ 0x1806F12C3 (_ObservableObjectArray--ObservableObjectArray_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8 * i));
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *v1 = 0LL;
}
