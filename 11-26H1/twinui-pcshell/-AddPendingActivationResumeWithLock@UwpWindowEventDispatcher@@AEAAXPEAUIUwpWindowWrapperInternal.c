/*
 * XREFs of ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180062DA0
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180037DF0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?AddPendingActivationResume@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18021E054 (-AddPendingActivationResume@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindo.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800632F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatc.c)
 *     ??0?$com_ptr_t@VUwpWindowEventDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVUwpWindowEventDispatcher@@@Z @ 0x1800634E4 (--0-$com_ptr_t@VUwpWindowEventDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVUwpWindowEve.c)
 *     ??$_Move_unchecked@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@00@Z @ 0x180063FB0 (--$_Move_unchecked@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@@std@@YAPEAU.c)
 *     ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x180064000 (--$_Destroy_range@V-$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800EE720 (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x18018F23C (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@AEAAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU23@$$QEAU23@@Z @ 0x1802419F8 (--$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@-$vector@UPending.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall UwpWindowEventDispatcher::AddPendingActivationResumeWithLock(
        __int64 a1,
        volatile int *a2,
        unsigned int a3)
{
  char v6; // r14
  __int64 v7; // rax
  char v8; // bl
  struct IUnknown **v9; // rdi
  struct IUnknown **i; // rbx
  struct IUnknown **j; // r14
  __int64 v12; // rbx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  signed __int32 v15; // r14d
  struct IUnknown *v16; // rdi
  __int64 v17; // rax
  volatile int *v18; // rcx
  __int64 v19; // rdx
  struct IUnknown *v20; // rbx
  unsigned int v21; // r15d
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  struct IUnknown *v24; // rdi
  int (__fastcall *v25)(__int64, __int64 *); // r12
  __int64 v26; // rcx
  __int64 Uwlm; // rax
  __int64 v28; // rbx
  int (__fastcall *v29)(__int64, _QWORD, struct IUnknown **); // r12
  struct IUnknown *v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  __int64 v32; // [rsp+38h] [rbp-38h] BYREF
  __int64 v33; // [rsp+40h] [rbp-30h] BYREF
  __int64 v34; // [rsp+48h] [rbp-28h] BYREF
  struct IUnknown *v35; // [rsp+50h] [rbp-20h] BYREF
  volatile int *v36; // [rsp+58h] [rbp-18h]
  __int64 v37; // [rsp+60h] [rbp-10h]
  signed __int32 v38; // [rsp+68h] [rbp-8h]
  int v39; // [rsp+6Ch] [rbp-4h]
  struct IUnknown *v40; // [rsp+B8h] [rbp+48h] BYREF

  v6 = 0;
  v33 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v40 = 0LL;
  if ( !a3 )
    goto LABEL_4;
  v7 = *(_QWORD *)a2;
  v33 = 0LL;
  if ( (*(int (__fastcall **)(volatile int *, __int64 *))(v7 + 248))(a2, &v33) < 0 )
    goto LABEL_4;
  if ( !v33 )
    goto LABEL_4;
  v25 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 48LL);
  v31 = 0LL;
  if ( v25(v33, &v31) < 0 )
    goto LABEL_4;
  v26 = v32;
  v32 = 0LL;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v31)(v31, &GUID_43c44496_73a7_4b25_b876_1df2708e3e45, &v32) < 0 )
    goto LABEL_4;
  Uwlm = UwpWindowEventDispatcher::GetUwlm(a1, &v34);
  v6 = 1;
  v28 = *(_QWORD *)Uwlm;
  v29 = *(int (__fastcall **)(__int64, _QWORD, struct IUnknown **))(**(_QWORD **)Uwlm + 112LL);
  v30 = v40;
  v40 = 0LL;
  if ( v30 )
    ((void (__fastcall *)(struct IUnknown *))v30->lpVtbl->Release)(v30);
  if ( v29(v28, a3, &v40) >= 0
    && v40
    && ((int (__fastcall *)(struct IUnknown *, __int64))v40->lpVtbl[5].AddRef)(v40, 2LL) >= 0 )
  {
    v8 = 1;
  }
  else
  {
LABEL_4:
    v8 = 0;
  }
  if ( (v6 & 1) != 0 && v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v8 )
  {
    v9 = *(struct IUnknown ***)(a1 + 528);
    for ( i = *(struct IUnknown ***)(a1 + 520); i != v9 && !(unsigned int)SHIsSameObject(v40, *i); i += 4 )
      ;
    if ( i != v9 )
    {
      for ( j = i + 4; j != v9; j += 4 )
      {
        if ( !(unsigned int)SHIsSameObject(v40, *j) )
        {
          UwpWindowEventDispatcher::PendingActivationResumeData::operator=(i, j);
          i += 4;
        }
      }
      if ( i != v9 )
      {
        v12 = std::_Move_unchecked<UwpWindowEventDispatcher::PendingActivationResumeData *,UwpWindowEventDispatcher::PendingActivationResumeData *>(
                v9,
                *(_QWORD *)(a1 + 528),
                i);
        std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(
          v12,
          *(_QWORD *)(a1 + 528));
        *(_QWORD *)(a1 + 528) = v12;
      }
    }
    v34 = a1;
    v13 = *(_QWORD *)(a1 + 280);
    while ( v13 >= 0 )
    {
      if ( (_DWORD)v13 != 0x7FFFFFFF )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 280), v13 + 1, v13);
        if ( v14 != v13 )
          continue;
      }
      goto LABEL_22;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), a2);
LABEL_22:
    v15 = _InterlockedExchangeAdd(&UwpWindowEventDispatcher::s_nextResumeToken, 1u);
    v16 = v40;
    v40 = 0LL;
    v35 = v16;
    v36 = a2;
    if ( a2 )
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)a2 + 8LL))(a2);
    v17 = (*(__int64 (__fastcall **)(volatile int *))(*(_QWORD *)a2 + 296LL))(a2);
    v37 = v17;
    v38 = v15;
    v18 = 0LL;
    v39 = 0;
    v19 = *(_QWORD *)(a1 + 528);
    if ( v19 == *(_QWORD *)(a1 + 536) )
    {
      std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Emplace_reallocate<UwpWindowEventDispatcher::PendingActivationResumeData>(
        a1 + 520,
        v19,
        &v35);
      v18 = v36;
      v20 = v35;
    }
    else
    {
      v20 = 0LL;
      *(_QWORD *)v19 = v16;
      *(_QWORD *)(v19 + 8) = a2;
      *(_QWORD *)(v19 + 16) = v17;
      *(_DWORD *)(v19 + 24) = v15;
      *(_QWORD *)(a1 + 528) += 32LL;
    }
    if ( v18 )
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v20 )
      ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
    wil::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>(
      &v35,
      a1);
    v21 = *(_DWORD *)(a1 + 516);
    v22 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v23 = v22;
    if ( v22 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v22);
      v24 = 0LL;
      v23[2] = v35;
      *((_DWORD *)v23 + 6) = v15;
      *v23 = &off_18070DF90;
    }
    else
    {
      v23 = 0LL;
      v24 = v35;
    }
    SHTaskPoolQueueTask(0LL, 0LL, v21);
    if ( v23 )
      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
    if ( v24 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>,Microsoft::WRL::FtmBase>::Release(v24);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>,Microsoft::WRL::FtmBase>::Release(a1);
  }
  if ( v40 )
    ((void (__fastcall *)(struct IUnknown *))v40->lpVtbl->Release)(v40);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
}
