/*
 * XREFs of ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x1804B3180
 * Callers:
 *     ??_ESwitchItemFilteredCollection@@UEAAPEAXI@Z @ 0x1804B33B0 (--_ESwitchItemFilteredCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::_EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___ @ 0x1802A3740 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotifi.c)
 *     ??1?$CWeakRefSource@VCSwitchItemElement@@@WeakReference@@QEAA@XZ @ 0x1802C76F4 (--1-$CWeakRefSource@VCSwitchItemElement@@@WeakReference@@QEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::_EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_ @ 0x1804B315C (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChangedBegi.c)
 *     ?_UnregisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x1804B4DAC (-_UnregisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SwitchItemFilteredCollection::~SwitchItemFilteredCollection(SwitchItemFilteredCollection *this)
{
  unsigned int i; // ebp
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, _QWORD, GUID *, struct IObservableItem **); // rbx
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  struct IObservableItem *v8; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)this = &SwitchItemFilteredCollection::`vftable';
  *((_QWORD *)this + 18) = &SwitchItemFilteredCollection::`vftable'{for `IObservableObjectArrayChanged'};
  *((_QWORD *)this + 19) = &SwitchItemFilteredCollection::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObservableObjectArrayChangedBeginEnd,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::ChainInterfaces<ISwitchItemFilteredCollection,IObservableObjectArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>'};
  *((_QWORD *)this + 20) = &SwitchItemFilteredCollection::`vftable'{for `VirtualDesktopNotificationBase<IVirtualDesktopNotification>'};
  *((_QWORD *)this + 21) = &SwitchItemFilteredCollection::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::ChainInterfaces<ISwitchItemFilteredCollection,IObservableObjectArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>'};
  if ( *((_BYTE *)this + 272) )
  {
    v7 = 0;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 23) + 24LL))(*((_QWORD *)this + 23), &v7) >= 0 )
    {
      for ( i = 0; i < v7; ++i )
      {
        v8 = 0LL;
        v3 = *((_QWORD *)this + 23);
        v4 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IObservableItem **))(*(_QWORD *)v3 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
        if ( v4(v3, i, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, &v8) >= 0 )
          SwitchItemFilteredCollection::_UnregisterItemForTitleChanges(this, v8);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
      }
    }
  }
  WeakReference::CWeakRefSource<CSwitchItemElement>::~CWeakRefSource<CSwitchItemElement>((__int64 *)this + 42);
  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::_EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___((__int64)this + 320);
  EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::_EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_((__int64)this + 304);
  EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::_EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_((__int64)this + 288);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 248);
  v5 = (__int64 *)*((_QWORD *)this + 27);
  if ( v5 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 28);
    while ( v5 != v6 )
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v5++);
    std::_Deallocate<16>(
      *((void **)this + 27),
      (struct std::nothrow_t *)((*((_QWORD *)this + 29) - *((_QWORD *)this + 27)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  *((_DWORD *)this + 45) = -1073741823;
  ObservableObjectArray::~ObservableObjectArray(this);
}
