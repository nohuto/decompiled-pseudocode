/*
 * XREFs of ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18043D5E0
 * Callers:
 *     ?AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x18043B550 (-AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18043D1CC (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x18043D940 (-RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18043F194 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??$Start@I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAI@Z @ 0x180184C20 (--$Start@I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA-AV01@$$QEAI@Z.c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::__lambda_55084e4f2abaab1e6a5f5781ce063f25_ @ 0x1801D1A54 (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--__lambda_55084e4f2abaab1e6a5f5781ce063f25_.c)
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801D1A7C (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801D1AD4 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??$Start@I@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAI@Z @ 0x1802A4628 (--$Start@I@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA-AV01@$$QEAI@Z.c)
 *     _lambda_79917a46c0d9777cd1553539ded46aa9_::__lambda_79917a46c0d9777cd1553539ded46aa9_ @ 0x1802BC24C (_lambda_79917a46c0d9777cd1553539ded46aa9_--__lambda_79917a46c0d9777cd1553539ded46aa9_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_872651ef2fbed137a92f03ff9b7f61da_____lambda_872651ef2fbed137a92f03ff9b7f61da___ @ 0x1804363A4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_872651ef2fbed.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a3222de221babd8ed80f71b88aa5d08_____lambda_9a3222de221babd8ed80f71b88aa5d08___ @ 0x180436478 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9a3222de221ba.c)
 *     _lambda_79917a46c0d9777cd1553539ded46aa9_::_lambda_79917a46c0d9777cd1553539ded46aa9_ @ 0x1804388B8 (_lambda_79917a46c0d9777cd1553539ded46aa9_--_lambda_79917a46c0d9777cd1553539ded46aa9_.c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::_lambda_55084e4f2abaab1e6a5f5781ce063f25_ @ 0x180438918 (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--_lambda_55084e4f2abaab1e6a5f5781ce063f25_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall WindowWrapperBase::ReconcileSessionIdleTaskCompletion(WindowWrapperBase *this)
{
  int v2; // eax
  const char *v3; // r9
  HWND v4; // rbx
  bool v5; // cl
  int v6; // eax
  __int64 v7; // rax
  unsigned int v8; // r14d
  volatile signed __int32 **v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rcx
  int v12; // r14d
  _QWORD *v13; // rax
  unsigned int v14; // r14d
  volatile signed __int32 **v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rcx
  int v18; // r14d
  int v19; // [rsp+20h] [rbp-308h]
  volatile signed __int32 *v20; // [rsp+30h] [rbp-2F8h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-2F0h] BYREF
  volatile signed __int32 *v22; // [rsp+40h] [rbp-2E8h] BYREF
  HWND v23; // [rsp+48h] [rbp-2E0h] BYREF
  _QWORD v24[42]; // [rsp+50h] [rbp-2D8h] BYREF
  _QWORD v25[46]; // [rsp+1A0h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  try
  {
    v2 = (*(__int64 (**)(void))(*(_QWORD *)this + 144LL))();
    v4 = (HWND)*((int *)this + 74);
    v23 = v4;
    v5 = (unsigned int)(v2 - 3) <= 2;
    v6 = *((_DWORD *)this + 45);
    if ( (v6 & 1) != 0 && v4 && v5 )
    {
      if ( (v6 & 2) == 0 )
      {
        LODWORD(v20) = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::Start<unsigned int>(
          (ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v24,
          (int *)&v20);
        dwProcessId = 0;
        if ( !GetWindowThreadProcessId(v4, &dwProcessId) )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xAC5,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)0x80070578LL,
            v19);
        wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
          &v22,
          (__int64)this);
        v7 = lambda_79917a46c0d9777cd1553539ded46aa9_::_lambda_79917a46c0d9777cd1553539ded46aa9_(
               (__int64)v25,
               (__int64)this,
               (__int64 *)&v22,
               &v23,
               &dwProcessId,
               v24);
        v8 = *((_DWORD *)this + 62);
        v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_872651ef2fbed137a92f03ff9b7f61da_____lambda_872651ef2fbed137a92f03ff9b7f61da___(
               &v20,
               v7);
        v10 = *v9;
        *v9 = 0LL;
        v11 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v11);
        }
        v12 = SHTaskPoolQueueTask(3LL, 2LL, v8);
        if ( v10 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xADB,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v12,
            (int)v10);
        lambda_79917a46c0d9777cd1553539ded46aa9_::__lambda_79917a46c0d9777cd1553539ded46aa9_((__int64)v25);
        *((_DWORD *)this + 45) |= 2u;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v24);
      }
    }
    else if ( (v6 & 2) != 0 )
    {
      LODWORD(v20) = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::Start<unsigned int>(
        (ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v24,
        (unsigned int *)&v20);
      wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
        &v20,
        (__int64)this);
      v13 = lambda_55084e4f2abaab1e6a5f5781ce063f25_::_lambda_55084e4f2abaab1e6a5f5781ce063f25_(
              v25,
              (__int64)this,
              (__int64 *)&v20,
              v24);
      v14 = *((_DWORD *)this + 62);
      v15 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a3222de221babd8ed80f71b88aa5d08_____lambda_9a3222de221babd8ed80f71b88aa5d08___(
              &v22,
              v13);
      v16 = *v15;
      *v15 = 0LL;
      v17 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v17);
      }
      v18 = SHTaskPoolQueueTask(3LL, 2LL, v14);
      if ( v16 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xAF2,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v18,
          (int)v16);
      lambda_55084e4f2abaab1e6a5f5781ce063f25_::__lambda_55084e4f2abaab1e6a5f5781ce063f25_((__int64)v25);
      *((_DWORD *)this + 45) &= ~2u;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v24);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xAF7,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v3);
  }
}
