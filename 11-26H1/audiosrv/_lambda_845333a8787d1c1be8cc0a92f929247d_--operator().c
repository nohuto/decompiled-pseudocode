/*
 * XREFs of _lambda_845333a8787d1c1be8cc0a92f929247d_::operator() @ 0x180155298
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::UserWatcher___Windows::System::IUserWatcher____Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_845333a8787d1c1be8cc0a92f929247d___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___::Invoke @ 0x180156210 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180156210.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180065358 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EV_ea_180065358.c)
 *     ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x180157870 (-ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_845333a8787d1c1be8cc0a92f929247d_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  if ( *(_QWORD *)a1 )
  {
    v6 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)a1, &v6) >= 0 && v6 )
    {
      if ( (unsigned int)CallbackContext > 5 )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          v4,
          byte_1801AEB66);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 264LL) = 1;
      AtmosCheck::ScheduleGracePeriodTimer(*(PVOID *)(a1 + 8));
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v6);
  }
  return 0LL;
}
