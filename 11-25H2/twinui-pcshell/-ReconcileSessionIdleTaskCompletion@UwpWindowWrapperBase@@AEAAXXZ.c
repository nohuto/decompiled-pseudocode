/*
 * XREFs of ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x180110DD4
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180110B94 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x1801111F4 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ @ 0x180200870 (-RemoveSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ.c)
 *     ?AddSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ @ 0x180220F90 (-AddSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006F5C0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_18006F5C0.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006F664 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F698 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006F764 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x180111E30 (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x180112340 (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::__lambda_55084e4f2abaab1e6a5f5781ce063f25_ @ 0x18022AB88 (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--__lambda_55084e4f2abaab1e6a5f5781ce063f25_.c)
 *     _lambda_79917a46c0d9777cd1553539ded46aa9_::__lambda_79917a46c0d9777cd1553539ded46aa9_ @ 0x1802C5540 (_lambda_79917a46c0d9777cd1553539ded46aa9_--__lambda_79917a46c0d9777cd1553539ded46aa9_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_55084e4f2abaab1e6a5f5781ce063f25___ @ 0x1804368C8 (Windows--Internal--ComTaskPool--QueueTask__lambda_55084e4f2abaab1e6a5f5781ce063f25___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_79917a46c0d9777cd1553539ded46aa9___ @ 0x1804369F4 (Windows--Internal--ComTaskPool--QueueTask__lambda_79917a46c0d9777cd1553539ded46aa9___.c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::_lambda_55084e4f2abaab1e6a5f5781ce063f25_ @ 0x1804384B8 (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--_lambda_55084e4f2abaab1e6a5f5781ce063f25_.c)
 *     _lambda_79917a46c0d9777cd1553539ded46aa9_::_lambda_79917a46c0d9777cd1553539ded46aa9_ @ 0x180438510 (_lambda_79917a46c0d9777cd1553539ded46aa9_--_lambda_79917a46c0d9777cd1553539ded46aa9_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion(UwpWindowWrapperBase *this)
{
  int v2; // eax
  const char *v3; // r9
  HWND v4; // rsi
  bool v5; // cl
  int v6; // eax
  unsigned int *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // [rsp+20h] [rbp-308h]
  int v18; // [rsp+20h] [rbp-308h]
  DWORD dwProcessId; // [rsp+30h] [rbp-2F8h] BYREF
  UwpWindowWrapperBase *v20; // [rsp+38h] [rbp-2F0h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-2E8h] BYREF
  void **v22; // [rsp+50h] [rbp-2D8h] BYREF
  _BYTE v23[272]; // [rsp+58h] [rbp-2D0h] BYREF
  volatile signed __int32 *v24; // [rsp+168h] [rbp-1C0h] BYREF
  _BYTE v25[48]; // [rsp+170h] [rbp-1B8h] BYREF
  _BYTE v26[368]; // [rsp+1A0h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  try
  {
    v2 = (*(__int64 (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 144LL))(this);
    v4 = (HWND)*((int *)this + 74);
    v21[0] = v4;
    v5 = (unsigned int)(v2 - 3) <= 2;
    v6 = *((_DWORD *)this + 45);
    if ( (v6 & 1) != 0 && v4 && v5 )
    {
      if ( (v6 & 2) != 0 )
        return;
      v12 = (unsigned int *)(*(__int64 (__fastcall **)(char *, UwpWindowWrapperBase **))(*((_QWORD *)this + 2) + 288LL))(
                              (char *)this + 16,
                              &v20);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)&v22,
        (__int64)"AddSessionIdleTaskCompletion");
      v22 = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::StartActivity(
        (ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)&v22,
        *v12);
      dwProcessId = 0;
      if ( !GetWindowThreadProcessId(v4, &dwProcessId) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB6D,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)0x80070578LL,
          v17);
      v20 = this;
      if ( this )
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 8LL))(this);
      v13 = lambda_79917a46c0d9777cd1553539ded46aa9_::_lambda_79917a46c0d9777cd1553539ded46aa9_(
              (unsigned int)v26,
              (_DWORD)this,
              (unsigned int)&v20,
              (unsigned int)v21,
              (__int64)&dwProcessId,
              (__int64)&v22);
      v16 = Windows::Internal::ComTaskPool::QueueTask__lambda_79917a46c0d9777cd1553539ded46aa9___(
              v15,
              v14,
              *((unsigned int *)this + 62),
              v13);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB83,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v16,
          v18);
      lambda_79917a46c0d9777cd1553539ded46aa9_::__lambda_79917a46c0d9777cd1553539ded46aa9_(v26);
      *((_DWORD *)this + 45) |= 2u;
      if ( this )
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 16LL))(this);
      v22 = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
    }
    else
    {
      if ( (v6 & 2) == 0 )
        return;
      v7 = (unsigned int *)(*(__int64 (__fastcall **)(char *, UwpWindowWrapperBase **))(*((_QWORD *)this + 2) + 288LL))(
                             (char *)this + 16,
                             &v20);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)&v22,
        (__int64)"RemoveSessionIdleTaskCompletion");
      v22 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(
        (ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)&v22,
        *v7);
      v21[0] = this;
      if ( this )
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 8LL))(this);
      v8 = lambda_55084e4f2abaab1e6a5f5781ce063f25_::_lambda_55084e4f2abaab1e6a5f5781ce063f25_(v26, this, v21, &v22);
      v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_55084e4f2abaab1e6a5f5781ce063f25___(
              v10,
              v9,
              *((unsigned int *)this + 62),
              v8);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB9A,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v11,
          v17);
      lambda_55084e4f2abaab1e6a5f5781ce063f25_::__lambda_55084e4f2abaab1e6a5f5781ce063f25_(v26);
      *((_DWORD *)this + 45) &= ~2u;
      if ( this )
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 16LL))(this);
      v22 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v22);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v25);
    wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v24);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB9F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      v3);
  }
}
