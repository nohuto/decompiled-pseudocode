/*
 * XREFs of ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800C8A34
 * Callers:
 *     ?Initialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18029ECC8 (-Initialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800C8BAC (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ??0?$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z @ 0x1800C8BD8 (--0-$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800CA0BC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800CB0DC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x1800FAB40 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801CD2B0 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D4C2C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z @ 0x1804807C8 (-delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_take_hevent_ownership(
        wil::details **a1,
        wil::details *a2,
        __int64 a3,
        const char *a4)
{
  wil::details *v5; // rbx
  char *v7; // rax
  char *v8; // rdi
  PTP_WAIT ThreadpoolWait; // rax
  const char *v11; // r9
  unsigned int LastError; // esi
  unsigned int v13; // edx
  void *v14; // rdx
  wil::details *v15; // rbx
  struct wil::details::event_watcher_state *v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil::details *v18; // [rsp+48h] [rbp+10h] BYREF
  char *v19; // [rsp+58h] [rbp+20h] BYREF

  v5 = a2;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x111B,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      a4);
  v18 = a2;
  v7 = (char *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v19 = v7;
  if ( v7 )
  {
    wistd::function<void (void)>::function<void (void)>(v7, a3);
    *((_QWORD *)v8 + 15) = v5;
    v5 = 0LL;
    v18 = 0LL;
    *((_QWORD *)v8 + 16) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       (PTP_WAIT_CALLBACK)wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::wait_callback,
                       v8,
                       0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
      v8 + 128,
      ThreadpoolWait);
    if ( *((_QWORD *)v8 + 16) )
    {
      v15 = *a1;
      if ( *a1 )
      {
        wil::last_error_context::last_error_context((wil::last_error_context *)&v19);
        wil::details::delete_event_watcher_state(v15, v16);
        wil::last_error_context::~last_error_context((wil::last_error_context *)&v19);
      }
      *a1 = (wil::details *)v8;
      SetThreadpoolWait(*((PTP_WAIT *)v8 + 16), *((HANDLE *)v8 + 15), 0LL);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&v18);
      return 0LL;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1122,
                    (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
                    v11);
      wil::details::event_watcher_state::`scalar deleting destructor'((wil::details::event_watcher_state *)v8, v13);
      if ( v5 )
        wil::details::CloseHandle(v5, v14);
      return LastError;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x111F,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)0x8007000ELL);
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&v18);
    return 2147942414LL;
  }
}
