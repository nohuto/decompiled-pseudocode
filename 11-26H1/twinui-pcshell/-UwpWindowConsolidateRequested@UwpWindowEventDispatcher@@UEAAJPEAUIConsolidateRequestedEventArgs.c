/*
 * XREFs of ?UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800EED70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180068F1C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800EF000 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_1800EF000.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800EF554 (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowConsolidateRequested(RTL_SRWLOCK *this, __int64 (***a2)(void))
{
  __int64 (**v3)(void); // rax
  __int64 (*v4)(void); // rax
  int v5; // eax
  int v6; // eax
  RTL_SRWLOCK *v7; // rbx
  RTL_SRWLOCK *v8; // r15
  __int64 (__fastcall ****CachedView)(_QWORD, GUID *, _QWORD *); // rax
  const char *v10; // r9
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rdi
  __int64 *v12; // rax
  __int64 v13; // r14
  std::_Ref_count_base *v14; // rsi
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  RTL_SRWLOCK *v16; // rbx
  __int64 result; // rax
  int v18; // [rsp+20h] [rbp-78h]
  __int64 (__fastcall ***v19[2])(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp-68h] BYREF
  RTL_SRWLOCK *v20; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v21; // [rsp+48h] [rbp-50h] BYREF
  std::_Ref_count_base *v22; // [rsp+50h] [rbp-48h]
  __int128 v23; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v25; // [rsp+A8h] [rbp+10h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // [rsp+B0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+20h]

  v3 = *a2;
  v27 = 0LL;
  v4 = *v3;
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x72E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v5,
        v18);
    v25 = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 48LL))(v27, &v25);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x731,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v18);
    v19[0] = 0LL;
    v23 = 0LL;
    v7 = this + 59;
    AcquireSRWLockShared(this + 59);
    v20 = this + 59;
    v8 = this - 2;
    CachedView = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))UwpWindowEventDispatcher::GetCachedView(
                                                                        &this[-2],
                                                                        &v26,
                                                                        v25);
    v11 = *CachedView;
    *CachedView = 0LL;
    v19[0] = v11;
    if ( v26 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v26)[2])(v26);
    if ( v11 )
    {
      v12 = (__int64 *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 **))(*v11)[33])(
                         v11,
                         &v21);
      v13 = *v12;
      v14 = (std::_Ref_count_base *)v12[1];
      *v12 = 0LL;
      v12[1] = 0LL;
      *(_QWORD *)&v23 = v13;
      *((_QWORD *)&v23 + 1) = v14;
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
    }
    else
    {
      v14 = (std::_Ref_count_base *)*((_QWORD *)&v23 + 1);
      v13 = v23;
    }
    if ( v7 )
      ReleaseSRWLockShared(v7);
    if ( v11 )
    {
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        v19,
        &v20);
      v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(v13 + 24);
      v26 = v15;
      if ( v15 )
      {
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[1])(v15);
        v15 = v26;
      }
      v21 = (__int64 *)&v26;
      v16 = v20;
      v19[1] = v15;
      if ( v15 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[1])(v15);
      UwpWindowEventDispatcher::RaiseViewEventWithPropertySet(v8, v16, 35LL, 0LL);
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v26);
      if ( v20 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v20->Ptr + 2))(v20);
    }
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    if ( v11 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x748,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v10);
  }
  return result;
}
