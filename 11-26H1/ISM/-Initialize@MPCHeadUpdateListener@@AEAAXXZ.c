/*
 * XREFs of ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800D14B4
 * Callers:
 *     std::call_once__lambda_a860493e5708769190ef41fba30dc41a___ @ 0x18006EEAC (std--call_once__lambda_a860493e5708769190ef41fba30dc41a___.c)
 * Callees:
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180056FC0 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x1800570F8 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ??$?0P8MPCHolographicInputManager@@EAAX_N@ZPEAV0@AEBU?$_Ph@$00@std@@@?$_Compressed_pair@P8MPCHolographicInputManager@@EAAX_N@ZV?$tuple@PEAVMPCHolographicInputManager@@U?$_Ph@$00@std@@@std@@$0A@@std@@QEAA@U_One_then_variadic_args_t@1@$$QEAP8MPCHolographicInputManager@@EAAX_N@Z$$QEAPEAV3@AEBU?$_Ph@$00@1@@Z @ 0x1800943C0 (--$-0P8MPCHolographicInputManager@@EAAX_N@ZPEAV0@AEBU-$_Ph@$00@std@@@-$_Compressed_pair@P8MPCHol.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x18009DD4C (--1-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ.c)
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800B11BC (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??0?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAA@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800D1018 (--0-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800D1270 (--1-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1-del.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800D15D0 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUevent_watcher_state@23@@Z @ 0x1800D1C30 (-reset@-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHeadUpdateListener::Initialize(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rbx
  struct wil::details::event_watcher_state *v2; // rdx
  void *v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdx
  PSRWLOCK v8; // r11
  void *v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  int v12; // r9d
  RTL_SRWLOCK *InstanceOffInputThread; // rax
  wil::details *v14; // [rsp+30h] [rbp-59h] BYREF
  MPCHeadUpdateListener *v15; // [rsp+38h] [rbp-51h] BYREF
  void (*v16)(MPCHeadUpdateListener *__hidden, bool); // [rsp+40h] [rbp-49h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+48h] [rbp-41h] BYREF
  char v18; // [rsp+50h] [rbp-39h]
  __int64 v19; // [rsp+58h] [rbp-31h]
  void **v20; // [rsp+60h] [rbp-29h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+68h] [rbp-21h] BYREF
  char v22; // [rsp+70h] [rbp-19h]
  __int64 v23; // [rsp+78h] [rbp-11h]
  void ***v24; // [rsp+98h] [rbp+Fh]
  __int64 (__fastcall ***v25)(); // [rsp+D0h] [rbp+47h]

  v1 = MPCHeadUpdateListener::s_instance;
  v21 = off_1801E75C8;
  v25 = &v21;
  wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>(
    &v14,
    (__int64)&v20);
  if ( (wil::details **)((char *)v1 + 72) != &v14 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>::reset(
      (char *)v1 + 72,
      v14);
    v14 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>(
    &v14,
    v2);
  wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>((__int64)&v20);
  MPC3DStateHelper::GetInstanceOffInputThread(v4, v3, v5, v6);
  v15 = v1;
  v16 = MPCHeadUpdateListener::On3DCompositorRunningChanged;
  std::_Compressed_pair<void (MPCHolographicInputManager::*)(bool),std::tuple<MPCHolographicInputManager *,std::_Ph<1>>,0>::_Compressed_pair<void (MPCHolographicInputManager::*)(bool),std::tuple<MPCHolographicInputManager *,std::_Ph<1>>,0>(
    &v17,
    v7,
    &v16,
    (__int64)&v15);
  v20 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHeadUpdateListener::*)(bool),MPCHeadUpdateListener *,std::_Ph<1> const &>,void,bool>::`vftable';
  v21 = v17;
  v22 = v18;
  v23 = v19;
  v24 = &v20;
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(v8, (__int64)&v20, (_DWORD *)v1 + 51);
  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread(v10, v9, v11, v12);
  if ( MPC3DStateHelper::Is3DCompositorRunning(InstanceOffInputThread) )
    MPCHeadUpdateListener::On3DCompositorRunningChanged(v1, 1);
}
