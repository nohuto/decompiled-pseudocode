/*
 * XREFs of ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x1801E5830
 * Callers:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802B7410 (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x180301FEC (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001EE70 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_0615c95965e6d9b4d53728bddc2218b9___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_0615c95965e6d9b4d53728bddc2218b9___ @ 0x1801E595C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--.c)
 *     ??$AsWeak@VCTaskWindow@@@WRL@Microsoft@@YAJPEAVCTaskWindow@@PEAVWeakRef@01@@Z @ 0x1801E59F8 (--$AsWeak@VCTaskWindow@@@WRL@Microsoft@@YAJPEAVCTaskWindow@@PEAVWeakRef@01@@Z.c)
 *     _lambda_56f82e2d72bc142b92699b1566ad23a5_::_lambda_56f82e2d72bc142b92699b1566ad23a5_ @ 0x180301B20 (_lambda_56f82e2d72bc142b92699b1566ad23a5_--_lambda_56f82e2d72bc142b92699b1566ad23a5_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CTaskWindow::_RegisterForViewReadinessChanges(CTaskWindow *this)
{
  int v2; // edi
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rcx
  _BYTE v12[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v14; // [rsp+70h] [rbp+28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+30h] BYREF
  volatile signed __int32 *v16; // [rsp+80h] [rbp+38h] BYREF
  __int64 v17; // [rsp+88h] [rbp+40h] BYREF

  v2 = 0;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
  {
    v15 = 0LL;
    v14 = &v15;
    v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
    v2 = Microsoft::WRL::AsWeak<CTaskWindow>(this, v4);
    if ( v2 >= 0 )
    {
      v5 = lambda_56f82e2d72bc142b92699b1566ad23a5_::_lambda_56f82e2d72bc142b92699b1566ad23a5_(v12, this, &v15);
      v6 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::___Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_0615c95965e6d9b4d53728bddc2218b9___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_0615c95965e6d9b4d53728bddc2218b9___(
                        &v16,
                        v5);
      v7 = *v6;
      *v6 = 0LL;
      v8 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
      v14 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
        v3,
        (__int64 *)&v14);
      v17 = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64, __int64 *))(*v14 + 80))(v14, v7, &v17);
      v9 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v9 + 16))(v9);
      }
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v10 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return (unsigned int)v2;
}
