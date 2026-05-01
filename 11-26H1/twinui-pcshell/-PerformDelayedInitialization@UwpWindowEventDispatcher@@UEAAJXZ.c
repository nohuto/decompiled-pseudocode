/*
 * XREFs of ?PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ @ 0x1801CAB70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800EFAD0 (-UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowL.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801CAF64 (-clear@-$vector@V-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowEventDispatcher::PerformDelayedInitialization(UwpWindowEventDispatcher *this)
{
  UwpWindowEventDispatcher *v1; // rsi
  char *v2; // r15
  _QWORD *v3; // r14
  _QWORD *v4; // r12
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD); // rdi
  unsigned int *v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  const char *v14; // r9
  RTL_SRWLOCK *v15; // rcx
  RTL_SRWLOCK *v16; // rbx
  RTL_SRWLOCK *v18; // [rsp+20h] [rbp-58h] BYREF
  UwpWindowEventDispatcher *v19; // [rsp+28h] [rbp-50h]
  UwpWindowEventDispatcher *v20; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v22; // [rsp+80h] [rbp+8h] BYREF
  char v23; // [rsp+88h] [rbp+10h] BYREF
  int v24; // [rsp+90h] [rbp+18h] BYREF
  char v25; // [rsp+94h] [rbp+1Ch]
  __int16 v26; // [rsp+95h] [rbp+1Dh]
  char v27; // [rsp+97h] [rbp+1Fh]
  __int64 v28; // [rsp+98h] [rbp+20h] BYREF

  v1 = this;
  v19 = this;
  v20 = this;
  v2 = (char *)this + 280;
  v3 = (_QWORD *)*((_QWORD *)this + 35);
  v4 = (_QWORD *)*((_QWORD *)this + 36);
  try
  {
    while ( v3 != v4 )
    {
      v28 = 0LL;
      wil::AcquireSRWLockExclusive(&v18, (RTL_SRWLOCK *)v1 + 45);
      v5 = *((_QWORD *)v1 + 24);
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 64LL);
      v7 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v3 + 288LL))(*v3, &v23);
      v8 = v6(v5, *v7, 0LL);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x92,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v8);
      v9 = *v3;
      v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v3 + 232LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v28);
      v11 = v10(v9, &v28);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x93,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v11);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
      if ( v28 )
      {
        v22 = 0;
        v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 48LL))(v28, &v22);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x9C,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v12,
            (int)v18);
        v24 = v22;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v13 = UwpWindowEventDispatcher::UwpWindowRemoved(
                (UwpWindowEventDispatcher *)((char *)v1 - 112),
                (const struct Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextRemovedEventArgs *)&v24);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x9D,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v13);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
      ++v3;
    }
    std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::clear(v2);
    v15 = (RTL_SRWLOCK *)v1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA3,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      v14);
    v15 = (RTL_SRWLOCK *)v19;
    v1 = v20;
  }
  v16 = v15 + 45;
  AcquireSRWLockExclusive(v15 + 45);
  *((_BYTE *)v1 + 384) = 1;
  if ( v16 )
    ReleaseSRWLockExclusive(v16);
  return 0LL;
}
