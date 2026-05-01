/*
 * XREFs of ?ShownWindowHidden@ViewPresentationMediator@@UEAAXPEAUHWND__@@@Z @ 0x1804496D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180086860 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801B87B8 (--0-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationViewChangeLi.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1801BEBB4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$Com.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@XZ @ 0x180448FD4 (--DIterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowMan.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x180449840 (-begin@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowManageme.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x180449868 (-end@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowManagement.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ViewPresentationMediator::ShownWindowHidden(RTL_SRWLOCK *this, HWND a2)
{
  __int64 v4[2]; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6[2]; // [rsp+38h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+50h] [rbp-10h] BYREF
  struct IObjectArray *v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  if ( (int)CGITRegistrationList::GetCallbackArray(this + 11, &v9) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>(
      (__int64)v4,
      (__int64)v9);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::begin(
      v4,
      &v5);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::end(
      v4,
      &v7);
    while ( v5 != v7 || v6[1] != v8[1] )
    {
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::operator*(
        (__int64)&v5,
        &v10);
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v10 + 48LL))(v10, a2);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
      ++v5;
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v5);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
}
