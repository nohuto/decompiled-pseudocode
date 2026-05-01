/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@PEAUIPropertySet@Collections@Foundation@Windows@@H@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@$$QEAH@Z @ 0x180074E30
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180409880 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180074F54 (--0-$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shel.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800751C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800751C0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSelectTargetView,ViewEventArgsForSelectTargetView,Windows::Foundation::Collections::IPropertySet *,int>(
        _QWORD *a1,
        __int64 *a2,
        int *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  volatile int *v8; // rdx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt

  *a1 = 0LL;
  v6 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
    return 2147942414LL;
  Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>(v6);
  *v7 = &ViewEventArgsForSelectTargetView::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  v7[1] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v7[8] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::`vftable'{for `IWeakReferenceSource'};
  v7[9] = &ViewEventArgsForSelectTargetView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>'};
  *((_BYTE *)v7 + 96) = 0;
  *((_DWORD *)v7 + 25) = 0;
  *((_DWORD *)v7 + 26) = 0;
  v9 = *a3;
  v10 = *a2;
  *((_DWORD *)v7 + 26) = v9;
  *((_DWORD *)v7 + 12) = 1;
  if ( v7[7] != v10 )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = v7[7];
    v7[7] = v10;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v7[11];
  while ( v12 >= 0 )
  {
    if ( (_DWORD)v12 != 0x7FFFFFFF )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64(v7 + 11, v12 + 1, v12);
      if ( v13 != v12 )
        continue;
    }
    goto LABEL_11;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v12 + 16), v8);
LABEL_11:
  *a1 = v7;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release(v7);
  return 0LL;
}
