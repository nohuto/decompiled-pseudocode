/*
 * XREFs of ?OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z @ 0x18043CA90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18008BF68 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801C2138 (--0-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationViewChangeLi.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1801C852C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$Com.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@XZ @ 0x18043C940 (--DIterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowMan.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x18043D190 (-begin@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowManageme.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x18043D1B8 (-end@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowManagement.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewPresentationMediator::OnMoveSizeAttempted(
        ViewPresentationMediator *this,
        HWND a2,
        struct IApplicationView *a3,
        unsigned int a4,
        unsigned int a5)
{
  RTL_SRWLOCK *v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13[2]; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15[3]; // [rsp+68h] [rbp-18h] BYREF
  struct IObjectArray *v16; // [rsp+A0h] [rbp+20h] BYREF

  v16 = 0LL;
  v8 = (RTL_SRWLOCK *)((char *)this + 88);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  if ( (int)CGITRegistrationList::GetCallbackArray(v8, &v16) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>(
      (__int64)v11,
      (__int64)v16);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::begin(
      v11,
      &v12);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::end(
      v11,
      &v14);
    v9 = a5;
    while ( v12 != v14 || v13[1] != v15[1] )
    {
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::operator*(
        (__int64)&v12,
        &v10);
      (*(void (__fastcall **)(__int64, HWND, struct IApplicationView *, _QWORD, unsigned int))(*(_QWORD *)v10 + 40LL))(
        v10,
        a2,
        a3,
        a4,
        v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
      ++v12;
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v12);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
}
