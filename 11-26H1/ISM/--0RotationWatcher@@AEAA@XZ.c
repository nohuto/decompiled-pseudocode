/*
 * XREFs of ??0RotationWatcher@@AEAA@XZ @ 0x18010D310
 * Callers:
 *     ?Initialize@RotationWatcher@@SAJXZ @ 0x18010D63C (-Initialize@RotationWatcher@@SAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180098BF8 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180098EE0 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009985C (--1last_error_context@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x18009DD4C (--1-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1864 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18010D0C0 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18010D2DC (--0-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x18010D894 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

// Hidden C++ exception states: #wind=4
RotationWatcher *__fastcall RotationWatcher::RotationWatcher(RotationWatcher *this)
{
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rdx
  wil::details **v4; // rax
  struct wil::details::wnf_subscription_state_base *v5; // rdx
  wil::details **v6; // rdi
  wil::details *v7; // rsi
  wil::details *v8; // rbx
  struct wil::details::wnf_subscription_state_base *v9; // rdx
  __int64 v11; // [rsp+28h] [rbp-49h] BYREF
  __int64 v12; // [rsp+30h] [rbp-41h] BYREF
  wil::details **v13; // [rsp+38h] [rbp-39h] BYREF
  wil::details *v14; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v15[8]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v16[14]; // [rsp+50h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v13 = &qword_180254F88;
  qword_180254F88 = 0LL;
  v12 = 0LL;
  v1 = CoreUICreate(&v12);
  if ( v1 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\rotationwatcher\\rotationwatcher.cpp",
      (const char *)(unsigned int)v1,
      v11);
  wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
    &v11,
    &v12);
  v16[0] = &off_1801E8C08;
  v2 = v11;
  v11 = 0LL;
  v16[1] = v2;
  v16[13] = v16;
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v11);
  v4 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(&v14, v3, (__int64)v15);
  v6 = v4;
  if ( &qword_180254F88 != v4 )
  {
    v7 = *v4;
    v8 = qword_180254F88;
    if ( qword_180254F88 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v13);
      wil::details::delete_wnf_subscription_state(v8, v9);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v13);
    }
    qword_180254F88 = v7;
    *v6 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
    &v14,
    v5);
  wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>((__int64)v15);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v12);
  return (RotationWatcher *)&qword_180254F88;
}
