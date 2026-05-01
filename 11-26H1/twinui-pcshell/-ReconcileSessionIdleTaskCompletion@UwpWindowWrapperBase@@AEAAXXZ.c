/*
 * XREFs of ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004BF74
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18004BB0C (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004BDA4 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ @ 0x18004C9C0 (-RemoveSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ.c)
 *     ?AddSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ @ 0x18020FB60 (-AddSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180069CEC (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180069D20 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180069F34 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180069F90 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x180185058 (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1801850FC (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::__lambda_55084e4f2abaab1e6a5f5781ce063f25_ @ 0x1801D1A54 (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--__lambda_55084e4f2abaab1e6a5f5781ce063f25_.c)
 *     _lambda_79917a46c0d9777cd1553539ded46aa9_::__lambda_79917a46c0d9777cd1553539ded46aa9_ @ 0x1802BC24C (_lambda_79917a46c0d9777cd1553539ded46aa9_--__lambda_79917a46c0d9777cd1553539ded46aa9_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_79917a46c0d9777cd1553539ded46aa9_::_lambda_79917a46c0d9777cd1553539ded46aa9_ @ 0x1804388B8 (_lambda_79917a46c0d9777cd1553539ded46aa9_--_lambda_79917a46c0d9777cd1553539ded46aa9_.c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::_lambda_55084e4f2abaab1e6a5f5781ce063f25_ @ 0x180438918 (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--_lambda_55084e4f2abaab1e6a5f5781ce063f25_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_55084e4f2abaab1e6a5f5781ce063f25___ @ 0x180442D10 (Windows--Internal--ComTaskPool--QueueTask__lambda_55084e4f2abaab1e6a5f5781ce063f25___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_79917a46c0d9777cd1553539ded46aa9___ @ 0x180442E4C (Windows--Internal--ComTaskPool--QueueTask__lambda_79917a46c0d9777cd1553539ded46aa9___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  UwpWindowWrapperBase *v17; // rcx
  int v18; // [rsp+20h] [rbp-308h]
  int v19; // [rsp+20h] [rbp-308h]
  DWORD dwProcessId; // [rsp+30h] [rbp-2F8h] BYREF
  UwpWindowWrapperBase *v21; // [rsp+38h] [rbp-2F0h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-2E8h] BYREF
  void **v23; // [rsp+50h] [rbp-2D8h] BYREF
  _BYTE v24[272]; // [rsp+58h] [rbp-2D0h] BYREF
  _BYTE v25[8]; // [rsp+168h] [rbp-1C0h] BYREF
  _BYTE v26[48]; // [rsp+170h] [rbp-1B8h] BYREF
  _BYTE v27[368]; // [rsp+1A0h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  try
  {
    v2 = (*(__int64 (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 144LL))(this);
    v4 = (HWND)*((int *)this + 74);
    v22[0] = v4;
    v5 = (unsigned int)(v2 - 3) <= 2;
    v6 = *((_DWORD *)this + 45);
    if ( (v6 & 1) != 0 && v4 && v5 )
    {
      if ( (v6 & 2) != 0 )
        return;
      v7 = (unsigned int *)(*(__int64 (__fastcall **)(char *, UwpWindowWrapperBase **))(*((_QWORD *)this + 2) + 288LL))(
                             (char *)this + 16,
                             &v21);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v23);
      v23 = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::StartActivity(
        (ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)&v23,
        *v7);
      dwProcessId = 0;
      if ( !GetWindowThreadProcessId(v4, &dwProcessId) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB6D,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)0x80070578LL,
          v18);
      v21 = this;
      if ( this )
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 8LL))(this);
      v8 = lambda_79917a46c0d9777cd1553539ded46aa9_::_lambda_79917a46c0d9777cd1553539ded46aa9_(
             (unsigned int)v27,
             (_DWORD)this,
             (unsigned int)&v21,
             (unsigned int)v22,
             (__int64)&dwProcessId,
             (__int64)&v23);
      v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_79917a46c0d9777cd1553539ded46aa9___(
              v10,
              v9,
              *((unsigned int *)this + 62),
              v8);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB83,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v11,
          v19);
      lambda_79917a46c0d9777cd1553539ded46aa9_::__lambda_79917a46c0d9777cd1553539ded46aa9_(v27);
      *((_DWORD *)this + 45) |= 2u;
      if ( this )
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 16LL))(this);
      v23 = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      goto LABEL_15;
    }
    if ( (v6 & 2) != 0 )
    {
      v12 = (unsigned int *)(*(__int64 (__fastcall **)(char *, UwpWindowWrapperBase **))(*((_QWORD *)this + 2) + 288LL))(
                              (char *)this + 16,
                              &v21);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v23);
      v23 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(
        (ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)&v23,
        *v12);
      v22[0] = this;
      if ( this )
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 8LL))(this);
      v13 = lambda_55084e4f2abaab1e6a5f5781ce063f25_::_lambda_55084e4f2abaab1e6a5f5781ce063f25_(v27, this, v22, &v23);
      v16 = Windows::Internal::ComTaskPool::QueueTask__lambda_55084e4f2abaab1e6a5f5781ce063f25___(
              v15,
              v14,
              *((unsigned int *)this + 62),
              v13);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB9A,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v16,
          v18);
      lambda_55084e4f2abaab1e6a5f5781ce063f25_::__lambda_55084e4f2abaab1e6a5f5781ce063f25_(v27);
      *((_DWORD *)this + 45) &= ~2u;
      if ( this )
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 16LL))(this);
      v23 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
LABEL_15:
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v23);
      wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v26);
      wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v25);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>(v24);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB9F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      v3);
    sub_18004C270(v17);
  }
}
