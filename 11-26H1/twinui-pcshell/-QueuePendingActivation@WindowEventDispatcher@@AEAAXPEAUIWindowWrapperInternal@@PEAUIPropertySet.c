/*
 * XREFs of ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18041BC74
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180414750 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800EF200 (--$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802871EC (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802E77A0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dd5757d6d511917eda89b6b9685db73c_____lambda_dd5757d6d511917eda89b6b9685db73c___ @ 0x18040FCA4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dd5757d6d5119.c)
 *     ??$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180410E4C (--$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??$_Emplace@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@1@QEAU21@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1804114F4 (--$_Emplace@AEBV-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@.c)
 *     _lambda_04d9d8ca76e4934c047f88587232d4c0_::_lambda_04d9d8ca76e4934c047f88587232d4c0_ @ 0x180411E10 (_lambda_04d9d8ca76e4934c047f88587232d4c0_--_lambda_04d9d8ca76e4934c047f88587232d4c0_.c)
 *     ?GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x180418C18 (-GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@She.c)
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x18041C040 (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 *     ?SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@AEBU_GUID@@@Z @ 0x18041DC14 (-SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall WindowEventDispatcher::QueuePendingActivation(
        WindowEventDispatcher *this,
        struct IWindowWrapperInternal *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        char a4)
{
  _QWORD *v8; // rax
  const char *v9; // r9
  __int64 v10; // rdi
  unsigned __int64 *v11; // r8
  int ActivationId; // eax
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  const struct _GUID *v16; // r8
  HWND v17; // rbx
  _QWORD *v18; // rax
  unsigned int v19; // edi
  volatile signed __int32 **v20; // rax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rcx
  __int64 v23; // rbx
  int ppv; // [rsp+20h] [rbp-49h]
  LPVOID v25; // [rsp+30h] [rbp-39h] BYREF
  RTL_SRWLOCK *v26; // [rsp+38h] [rbp-31h] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-29h] BYREF
  __int64 v28; // [rsp+48h] [rbp-21h] BYREF
  __int64 v29; // [rsp+50h] [rbp-19h] BYREF
  __int64 v30; // [rsp+58h] [rbp-11h] BYREF
  __int64 v31; // [rsp+60h] [rbp-9h] BYREF
  __int64 v32; // [rsp+68h] [rbp-1h] BYREF
  GUID v33; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v8;
  if ( v8 )
  {
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    *v8 = &CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>::`vftable';
    *((_DWORD *)v8 + 10) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v30 = v10;
  if ( !v10 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      2247LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v9);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(v10 + 32),
    (__int64)a3);
  Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
    *(struct Windows::Foundation::Collections::IPropertySet **)(v10 + 32));
  ActivationId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationId(
                   (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v29,
                   (struct Windows::Internal::ShellHelpers::PropertySetHelper *)(v10 + 8),
                   v11);
  if ( ActivationId < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8CE,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)ActivationId,
      ppv);
  *(_QWORD *)&v33.Data1 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 272LL))(a2);
  v13 = Windows::Internal::String::Initialize<unsigned short const *>((HSTRING *)(v10 + 16), (const WCHAR **)&v33);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D0,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v13,
      ppv);
  v28 = 0LL;
  v14 = (__int64 *)*((_QWORD *)this + 42);
  if ( v14 )
  {
    v15 = *v14;
    v28 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v15 + 48))(v14, &v28) >= 0 )
    {
      v33 = GUID_NULL;
      if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v28 + 32LL))(v28, &v33) >= 0 )
        Windows::Internal::Shell::Desktop::ViewManagerInterop::SetActivationVirtualDesktopId(
          (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v29,
          (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
          v16);
    }
  }
  if ( a4 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&v33, (RTL_SRWLOCK *)this + 59);
    v17 = (HWND)(*(int (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v33);
    v25 = 0LL;
    dwProcessId = 0;
    if ( GetWindowThreadProcessId(v17, &dwProcessId) )
    {
      v25 = 0LL;
      if ( CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &v25) >= 0
        && (*(int (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)v25 + 24LL))(v25, dwProcessId, 0x100000LL) >= 0 )
      {
        wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=((__int64 *)(v10 + 24), (__int64 *)&v25);
        v26 = *(RTL_SRWLOCK **)(v10 + 8);
        wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
          &v33,
          (__int64)this);
        v18 = lambda_04d9d8ca76e4934c047f88587232d4c0_::_lambda_04d9d8ca76e4934c047f88587232d4c0_(
                &v31,
                (__int64)this,
                (__int64 *)&v33,
                &v26);
        v19 = *((_DWORD *)this + 125);
        v20 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dd5757d6d511917eda89b6b9685db73c_____lambda_dd5757d6d511917eda89b6b9685db73c___(
                (volatile signed __int32 **)&v26,
                v18);
        v21 = *v20;
        *v20 = 0LL;
        v22 = (volatile signed __int32 *)v26;
        if ( v26 )
        {
          v26 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v22);
        }
        SHTaskPoolQueueTask(3LL, 0LL, v19);
        if ( v21 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v33);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
  }
  wil::AcquireSRWLockExclusive(&v26, (RTL_SRWLOCK *)this + 59);
  std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Emplace<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy> const &>(
    (__int64)this + 504,
    *((_QWORD *)this + 63),
    &v30);
  v23 = v30;
  *(_QWORD *)&v33.Data1 = WindowsGetStringRawBuffer(*(HSTRING *)(v30 + 16), 0LL);
  ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *>(
    (__int64 *)(v23 + 8),
    (__int64 *)&v33);
  while ( *((_QWORD *)this + 64) > 0x80uLL )
    WindowEventDispatcher::QueuePendingActivationForDestruction(
      this,
      *(_QWORD *)(*(_QWORD *)(**((_QWORD **)this + 63) + 16LL) + 8LL));
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
}
