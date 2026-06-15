/*
 * XREFs of ?RequiresDeferredPoNotificationHandling@CVADServer@@QEAA_NXZ @ 0x180113230
 * Callers:
 *     _lambda_c4f66075b064f94c83b6e478b87a895c_::operator() @ 0x180111044 (_lambda_c4f66075b064f94c83b6e478b87a895c_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D98C (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CVADServer::RequiresDeferredPoNotificationHandling(struct _RTL_CRITICAL_SECTION *this)
{
  bool v2; // si
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  _QWORD *OwningThread; // rdi
  int (__fastcall *v5)(_QWORD *, __int64 *); // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !this[4].OwningThread )
    return 0;
  v3 = this + 5;
  EnterCriticalSection(this + 5);
  v8 = v3;
  v7 = 0LL;
  OwningThread = this[4].OwningThread;
  if ( OwningThread )
  {
    v5 = *(int (__fastcall **)(_QWORD *, __int64 *))(OwningThread[1] + 24LL);
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v7);
    if ( v5(OwningThread + 1, &v7) >= 0 )
      v2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7) != 0;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  return v2;
}
