/*
 * XREFs of ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x18041C3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800464B8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180068F1C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x1801AE768 (--$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$Q.c)
 *     ??$copy_to@UIObjectArray@@@?$com_ptr_t@UIObjectCollection@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIObjectArray@@@Z @ 0x180209D4C (--$copy_to@UIObjectArray@@@-$com_ptr_t@UIObjectCollection@@Uerr_exception_policy@wil@@@wil@@QEBA.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     wil::ScopeExit__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___ @ 0x18030763C (wil--ScopeExit__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___.c)
 *     wil::details::ScopeExitFn__lambda_a5eae6a2215b2f1c97ca93e036a1f8ed___::_ScopeExitFn__lambda_a5eae6a2215b2f1c97ca93e036a1f8ed___ @ 0x180412F68 (wil--details--ScopeExitFn__lambda_a5eae6a2215b2f1c97ca93e036a1f8ed___--_ScopeExitFn__lambda_a5ea.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180417EEC (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1804203D8 (-erase@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall WindowEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  struct IObjectArray **v3; // r13
  RTL_SRWLOCK *v5; // r14
  struct _GUID *i; // rdx
  HSTRING *v7; // r12
  char v8; // al
  int v9; // eax
  RTL_SRWLOCK *v10; // r15
  RTL_SRWLOCK *v11; // rbx
  __int64 j; // rsi
  __int64 v13; // rcx
  const WCHAR *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  __int64 *v17; // rax
  int v18; // eax
  const char *v19; // r9
  int v20; // eax
  const char *v21; // r9
  __int64 result; // rax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-D8h]
  void *v24; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-B8h] BYREF
  LPCWCH lpString2; // [rsp+48h] [rbp-B0h]
  std::_Ref_count_base *v28[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-98h]
  __int64 v30; // [rsp+68h] [rbp-90h] BYREF
  RTL_SRWLOCK *v31; // [rsp+70h] [rbp-88h]
  RTL_SRWLOCK *v32; // [rsp+78h] [rbp-80h]
  RTL_SRWLOCK *v33; // [rsp+80h] [rbp-78h]
  RTL_SRWLOCK *v34; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v35[16]; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v36[8]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-50h] BYREF
  _BYTE v38[8]; // [rsp+B0h] [rbp-48h] BYREF
  _QWORD v39[8]; // [rsp+B8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  PCWSTR StringRawBuffer; // [rsp+100h] [rbp+8h] BYREF
  PCWSTR v42; // [rsp+110h] [rbp+18h] BYREF
  int v43; // [rsp+118h] [rbp+20h] BYREF

  v42 = (PCWSTR)a3;
  StringRawBuffer = (PCWSTR)this;
  v3 = a3;
  v5 = this;
  v31 = this;
  *a3 = 0LL;
  wil::AcquireSRWLockExclusive(&v34, this + 55);
  try
  {
    if ( LOBYTE(v5[58].Ptr) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x78A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x8007139FLL,
        bIgnoreCase);
    *(_OWORD *)v28 = 0LL;
    for ( i = (struct _GUID *)v5[49].Ptr; ; ++i )
    {
      if ( i == v5[50].Ptr )
      {
        v7 = (HSTRING *)v28[0];
        goto LABEL_11;
      }
      if ( *(_QWORD *)(*(_QWORD *)&i->Data1 + 32LL) == a2.value )
        break;
    }
    std::shared_ptr<FlyoutView>::operator=(v28, i);
    v7 = (HSTRING *)v28[0];
    if ( v28[0] )
    {
      v8 = 0;
      goto LABEL_12;
    }
LABEL_11:
    v8 = 1;
LABEL_12:
    if ( v8 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x797,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x80070490LL,
        bIgnoreCase);
    v24 = 0LL;
    v9 = CEnumerableObjectCollection::CreateInstance((__int64)retaddr, i, &v24);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x79C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        bIgnoreCase);
    v10 = v5 + 45;
    v32 = v5 + 45;
    v11 = v5 + 45;
    v33 = v5 + 45;
    for ( j = ((char *)v5[46].Ptr - (char *)v5[45].Ptr) >> 3; ; --j )
    {
      v29 = j;
      if ( !j )
        break;
      lpString2 = WindowsGetStringRawBuffer(v7[1], 0LL);
      v13 = *((_QWORD *)v10->Ptr + j - 1);
      v14 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 280LL))(v13);
      if ( CompareStringOrdinal(v14, -1, lpString2, -1, 0) == 2 )
      {
        wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
          (__int64 *)&v26,
          (__int64 *)v10->Ptr + j - 1);
        std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
          v11,
          v36,
          (char *)v10->Ptr + 8 * j - 8);
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
          &v26,
          &v25);
        v15 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                &v37,
                (__int64)&v25);
        wil::ScopeExit__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___((__int64)v35, v15);
        v16 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v39, v28);
        v17 = wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
                &v30,
                (__int64 *)&v26);
        try
        {
          WindowEventDispatcher::CacheWindowWrapper((__int64)&v5[-4], v17, (__int64)v16, (const char *)1);
          v18 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v24 + 40LL))(v24, v25);
          if ( v18 >= 0 )
          {
            v35[8] = 0;
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x7B8,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v18);
            std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
              &v31[42],
              v38,
              (char *)v31[43].Ptr - 8);
          }
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x7C2,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            v19);
          v5 = (RTL_SRWLOCK *)StringRawBuffer;
          v3 = (struct IObjectArray **)v42;
          v7 = (HSTRING *)v28[0];
          j = v29;
          v10 = v32;
        }
        wil::details::ScopeExitFn__lambda_a5eae6a2215b2f1c97ca93e036a1f8ed___::_ScopeExitFn__lambda_a5eae6a2215b2f1c97ca93e036a1f8ed___(v35);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
        v11 = v33;
      }
    }
    v43 = 0;
    v20 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v24 + 24LL))(v24, &v43);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7C7,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v20);
    StringRawBuffer = WindowsGetStringRawBuffer(v7[1], 0LL);
    v42 = WindowsGetStringRawBuffer(*v7, 0LL);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_RecoveringViews<unsigned int &,unsigned short const *,unsigned short const *>(
      &v43,
      (__int64 *)&v42,
      (__int64 *)&StringRawBuffer);
    wil::com_ptr_t<IObjectCollection,wil::err_exception_policy>::copy_to<IObjectArray>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v24,
      v3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    if ( v28[1] )
      std::_Ref_count_base::_Decref(v28[1]);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v34);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(StringRawBuffer) = wil::details::in1diag3::Return_CaughtException(
                                 retaddr,
                                 (void *)0x7CE,
                                 (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                 v21);
    return (unsigned int)StringRawBuffer;
  }
  return result;
}
