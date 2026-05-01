/*
 * XREFs of ?WindowRemoved@UwpWindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800ED8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1800EC464 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exc.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800EE720 (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ??$WindowEventDispatcher_OnWindowRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x18041122C (--$WindowEventDispatcher_OnWindowRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall UwpWindowEventDispatcher::WindowRemoved(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2)
{
  int v3; // eax
  __int64 Uwlm; // rax
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD **); // r14
  _QWORD *v7; // rcx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v13[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+18h]
  _QWORD *v17; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0;
  try
  {
    v3 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 80LL))();
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x768,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v3,
        v12);
    v17 = 0LL;
    Uwlm = UwpWindowEventDispatcher::GetUwlm(&this[-2], v13);
    v5 = *(_QWORD *)Uwlm;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(**(_QWORD **)Uwlm + 112LL);
    v7 = v17;
    v17 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v7 + 16LL))(v7, *v7);
    v8 = v6(v5, v16, &v17);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x76B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        v12);
    if ( v13[0] )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v13[0]->Ptr + 2))(v13[0]);
    if ( v17 )
    {
      v15 = 0;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, int *))(*v17 + 48LL))(v17, &v15);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x774,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v11,
          v12);
      wil::AcquireSRWLockExclusive(v13, this + 59);
      UwpWindowEventDispatcher::GetCachedView((__int64)&this[-2], &v12, v15);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 208LL))(v12);
      ViewManagerInteropTraceLogging::WindowEventDispatcher_OnWindowRemoved<unsigned int &>(&v15);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v13);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
      result = 0LL;
    }
    else
    {
      result = 2147943568LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x781,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v9);
  }
  return result;
}
