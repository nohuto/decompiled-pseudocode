/*
 * XREFs of ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x1800476F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180021430 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800413E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180045354 (-clear@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@s.c)
 *     ??1?$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180045EA8 (--1-$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180047B90 (-reset@-$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowsPolicyManager::Shutdown(CWindowsPolicyManager *this)
{
  struct CDuckingManager *v2; // rdi
  CApplicationManager *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  volatile int *v5; // rdx
  HANDLE v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // rax
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+18h] BYREF

  CWindowsPolicyManager::Lock((__int64)this, &v11);
  EnterCriticalSection(&stru_180068A08);
  v10 = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::clear(&dword_180068A30);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  if ( g_hLowPowerEpochNotificationHandle )
  {
    PowerSettingUnregisterNotification(g_hLowPowerEpochNotificationHandle);
    g_hLowPowerEpochNotificationHandle = 0LL;
  }
  g_bLowPowerEpoch = 0;
  g_bApmSuspended = 0;
  g_AppTypesBlockedTillConsoleUnlocked = 0;
  v2 = g_DuckingManager;
  *((_BYTE *)g_DuckingManager + 456) = 1;
  if ( _Mtx_lock((struct CDuckingManager *)((char *)v2 + 328)) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  if ( *((_DWORD *)v2 + 101) == 0x7FFFFFFF )
  {
    *((_DWORD *)v2 + 101) = 2147483646;
    std::_Throw_Cpp_error(6);
    __debugbreak();
  }
  *((_BYTE *)v2 + 320) = 1;
  _Mtx_unlock((struct CDuckingManager *)((char *)v2 + 328));
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v10 = v4;
  *((_BYTE *)v3 + 24) = 1;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  v6 = g_EventWorkerThreadHandle;
  if ( g_EventWorkerThreadHandle )
  {
    if ( g_WorkerEventPort )
    {
      PostQueuedCompletionStatus(g_WorkerEventPort, 0xFFFFFFFF, 0LL, 0LL);
      v6 = g_EventWorkerThreadHandle;
    }
    WaitForSingleObject(v6, 0xFFFFFFFF);
    if ( (char *)g_EventWorkerThreadHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(g_EventWorkerThreadHandle);
      g_EventWorkerThreadHandle = 0LL;
    }
  }
  v7 = g_StreamClassPolicyManager;
  g_StreamClassPolicyManager = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(
      v8,
      v5);
  CWindowsPolicyManager::Lock(v8, &v11);
  v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  v10 = v9;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  wil::com_ptr_t<CDuckingManager,wil::err_returncode_policy>::reset(&v10);
  if ( g_ApplicationManager )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)g_ApplicationManager);
    g_ApplicationManager = 0LL;
  }
  if ( (char *)g_WorkerEventPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_WorkerEventPort);
    g_WorkerEventPort = 0LL;
  }
  if ( g_DeviceEnumerator )
  {
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)g_DeviceEnumerator + 16LL))(g_DeviceEnumerator);
    g_DeviceEnumerator = 0LL;
  }
  wil::com_ptr_t<CDuckingManager,wil::err_returncode_policy>::~com_ptr_t<CDuckingManager,wil::err_returncode_policy>((__int64 *)&v10);
}
