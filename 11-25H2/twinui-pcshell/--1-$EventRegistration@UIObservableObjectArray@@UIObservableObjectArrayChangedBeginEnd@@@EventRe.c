/*
 * XREFs of ??1?$EventRegistration@UIObservableObjectArray@@UIObservableObjectArrayChangedBeginEnd@@@EventRegistrationHelpers@@UEAA@XZ @ 0x18049A724
 * Callers:
 *     ??_G?$EventRegistration@UIObservableObjectArray@@UIObservableObjectArrayChanged@@@EventRegistrationHelpers@@UEAAPEAXI@Z @ 0x18049A7E0 (--_G-$EventRegistration@UIObservableObjectArray@@UIObservableObjectArrayChanged@@@EventRegistrat.c)
 *     _anonymous_namespace_::MonitorEventRegistration::_scalar_deleting_destructor_ @ 0x18049A820 (_anonymous_namespace_--MonitorEventRegistration--_scalar_deleting_destructor_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventRegistration<IObservableObjectArray,IObservableObjectArrayChangedBeginEnd>::~EventRegistration<IObservableObjectArray,IObservableObjectArrayChangedBeginEnd>(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 32));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
