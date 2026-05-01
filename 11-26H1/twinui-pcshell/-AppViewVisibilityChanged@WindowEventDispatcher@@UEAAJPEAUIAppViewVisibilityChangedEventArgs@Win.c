/*
 * XREFs of ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180417100
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??4?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180413574 (--4-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180419034 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@U_ea_180419034.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x18041ABB4 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@W4HOSTED_APP_CHANGED@@@Z @ 0x18041F3C4 (-UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Int.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall WindowEventDispatcher::AppViewVisibilityChanged(RTL_SRWLOCK *this, __int64 (***a2)(void))
{
  __int64 (**v4)(void); // rax
  unsigned int v5; // r14d
  __int64 (*v6)(void); // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 *CachedView; // rax
  __int64 v13; // rbx
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64, __int64 *); // rdi
  int v18; // eax
  const char *v19; // r9
  __int64 result; // rax
  int v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+48h] [rbp-40h] BYREF
  RTL_SRWLOCK *v26[7]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v28; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v30; // [rsp+A8h] [rbp+20h] BYREF

  v4 = *a2;
  v5 = 0;
  v24 = 0LL;
  v6 = *v4;
  try
  {
    v7 = v6();
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3BB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v7,
        v21);
    v30 = 0LL;
    v8 = *v24;
    v30 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v8 + 48))(
           v24,
           &v30);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3BE,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        v21);
    v28 = 0;
    v10 = ((__int64 (__fastcall *)(__int64 (***)(void), int *))(*a2)[6])(a2, &v28);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3C1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        v21);
    if ( IsComponentAppViewAndGetKindAndModel(v30, 0LL, 0LL) )
    {
      LOBYTE(v5) = v28 != 1;
      WindowEventDispatcher::UpdateAudioState(&this[-2], v30, v5 + 2);
    }
    else
    {
      v29 = 0;
      v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v30 + 48LL))(
              v30,
              &v29);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3C6,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v11,
          v21);
      v23 = 0LL;
      Microsoft::WRL::Wrappers::SRWLock::LockShared(v26, this + 57);
      CachedView = (__int64 *)WindowEventDispatcher::GetCachedView(&this[-2], &v22, v29);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=(&v23, CachedView);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
      v13 = v23;
      if ( !v23 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3CC,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)0x80070490LL,
          v21);
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 256LL))(v23);
      if ( v14 && v28 == 1 )
      {
        v22 = 0LL;
        v15 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)this[37].Ptr + 48LL))(this[37].Ptr, &v25);
        v16 = *(_QWORD *)v15;
        v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(**(_QWORD **)v15 + 136LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v22);
        v18 = v17(v16, v14, 1LL, &v22);
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3D3,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v18,
            v21);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v26);
      LOBYTE(v5) = v28 == 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13 + 320LL))(v13, 1LL, v5);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E2,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v19);
  }
  return result;
}
