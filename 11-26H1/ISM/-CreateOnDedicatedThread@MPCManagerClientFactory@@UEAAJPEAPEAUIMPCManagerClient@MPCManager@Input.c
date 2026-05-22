/*
 * XREFs of ?CreateOnDedicatedThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180165560
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0W4EventOptions@wil@@$$V@?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@$$QEAW4EventOptions@1@@Z @ 0x18008FC6C (--$-0W4EventOptions@wil@@$$V@-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAX.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180090DA0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x1800B1680 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ??$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UIDispatcherQueueControllerStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180163CE0 (--$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA-AV-$com_ptr_.c)
 *     wil::MakeAgileCallback_Windows::System::IDispatcherQueueHandler__lambda_be14e41fc69e48f10010ada4f55a452e___ @ 0x180164274 (wil--MakeAgileCallback_Windows--System--IDispatcherQueueHandler__lambda_be14e41fc69e48f10010ada4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall MPCManagerClientFactory::CreateOnDedicatedThread(
        MPCManagerClientFactory *this,
        struct Windows::Internal::Input::MPCManager::IMPCManagerClient **a2,
        unsigned int a3)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 (__fastcall *v6)(void *, __int64 *); // rdi
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, void *, char *); // rdi
  void **v10; // rax
  int v11; // eax
  void *v12; // rdx
  const char *v13; // r9
  void *v14; // rcx
  struct Windows::Internal::Input::MPCManager::IMPCManagerClient *v15; // rax
  void *v16; // rdx
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  struct Windows::Internal::Input::MPCManager::IMPCManagerClient *v19; // [rsp+28h] [rbp-28h] BYREF
  wil *v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v23; // [rsp+80h] [rbp+30h] BYREF
  void *v24; // [rsp+88h] [rbp+38h] BYREF

  v18 = 0LL;
  wil::GetActivationFactory<Windows::System::IDispatcherQueueControllerStatics>((const WCHAR *)&v21, (__int64)a2, a3);
  v24 = 0LL;
  v4 = *(_QWORD *)v21;
  v24 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, void **))(v4 + 48))(v21, &v24);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v5,
      v18);
  v6 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v24 + 48LL);
  v18 = 0LL;
  v7 = v6(v24, &v18);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v7,
      v18);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v24);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v21);
  v19 = 0LL;
  LODWORD(v24) = 0;
  ____0W4EventOptions_wil____V___unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil__QEAA___QEAW4EventOptions_1__Z(
    &v20,
    (unsigned int *)&v24);
  v23 = 0;
  v8 = v18;
  v9 = *(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v18 + 56LL);
  *(_QWORD *)&v21 = &v19;
  *((_QWORD *)&v21 + 1) = &v20;
  v10 = wil::MakeAgileCallback_Windows::System::IDispatcherQueueHandler__lambda_be14e41fc69e48f10010ada4f55a452e___(
          &v24,
          &v21);
  v11 = v9(v8, *v10, &v23);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v11,
      v18);
  v14 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( !v23 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1B7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v13);
  wil::handle_wait(v20, v12);
  v15 = v19;
  v19 = 0LL;
  *a2 = v15;
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    &v20,
    v16);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v19);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v18);
  return 0LL;
}
