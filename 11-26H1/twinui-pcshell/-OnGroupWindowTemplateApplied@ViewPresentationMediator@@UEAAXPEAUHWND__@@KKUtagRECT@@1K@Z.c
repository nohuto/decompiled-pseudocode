/*
 * XREFs of ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z @ 0x18021C300
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180086860 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18029EED8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V-$C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall ViewPresentationMediator::OnGroupWindowTemplateApplied(
        RTL_SRWLOCK *this,
        HWND a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        unsigned int a7)
{
  struct IObjectArray *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  struct tagRECT *v14; // rsi
  struct tagRECT *v15; // r14
  __int64 v16; // rbx
  struct IObjectArray *v17; // rcx
  __int64 v18; // [rsp+48h] [rbp-51h] BYREF
  struct IObjectArray *v19; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v20[4]; // [rsp+58h] [rbp-41h] BYREF
  struct tagRECT v21; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT v22; // [rsp+78h] [rbp-21h] BYREF
  int v23; // [rsp+88h] [rbp-11h] BYREF
  __int64 v24; // [rsp+90h] [rbp-9h] BYREF
  struct IObjectArray **v25; // [rsp+98h] [rbp-1h]
  int v26; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+Fh] BYREF
  struct IObjectArray **v28; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]
  struct IObjectArray *v30; // [rsp+E8h] [rbp+4Fh] BYREF

  v30 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  if ( (int)CGITRegistrationList::GetCallbackArray(this + 15, &v30) >= 0 )
  {
    v11 = v30;
    v19 = v30;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    v20[0] = 0;
    v12 = ((__int64 (__fastcall *)(struct IObjectArray *, _DWORD *))v11->lpVtbl->GetCount)(v11, v20);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v12);
    v23 = 0;
    v24 = 0LL;
    v25 = &v19;
    details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject(&v23);
    v26 = v20[0];
    v27 = 0LL;
    v28 = &v19;
    details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject(&v26);
    v13 = a7;
    v14 = a6;
    v15 = a5;
    while ( v23 != v26 || v25 != v28 )
    {
      v16 = v24;
      v18 = v24;
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      v21 = *v14;
      v22 = *v15;
      (*(void (__fastcall **)(__int64, HWND, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, unsigned int))(*(_QWORD *)v16 + 24LL))(
        v16,
        a2,
        a3,
        a4,
        &v22,
        &v21,
        v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      ++v23;
      details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject(&v23);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  }
  v17 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v17->lpVtbl->Release)(v17);
  }
}
