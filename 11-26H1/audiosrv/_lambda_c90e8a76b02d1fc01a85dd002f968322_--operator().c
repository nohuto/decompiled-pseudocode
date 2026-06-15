/*
 * XREFs of _lambda_c90e8a76b02d1fc01a85dd002f968322_::operator() @ 0x18010F014
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c90e8a76b02d1fc01a85dd002f968322__void_::_Do_call @ 0x18010F910 (std--_Func_impl_no_alloc__lambda_c90e8a76b02d1fc01a85dd002f968322__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x180055E50 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ @ 0x18007B4C4 (-EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_c90e8a76b02d1fc01a85dd002f968322_::operator()(unsigned int *a1)
{
  char result; // al
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+10h] BYREF

  result = CPowerReferenceManager::EnsureCamMicUsageInitialized(*((CPowerReferenceManager **)a1 + 3));
  if ( result )
  {
    v10 = 0LL;
    v3 = *(__int64 **)(*((_QWORD *)a1 + 3) + 664LL);
    v4 = *v3;
    v10 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v4 + 48))(v3, *a1, 0LL, &v10);
    v6 = retaddr;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
      v6 = retaddr;
      if ( v5 >= 0 )
      {
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(*((__int64 **)a1 + 1), v10);
        return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
      }
      v7 = 102LL;
    }
    else
    {
      v7 = 101LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v6,
      v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      (const char *)(unsigned int)v5);
    v8 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)a1 + 3) + 624LL);
    EnterCriticalSection(v8);
    v11 = v8;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(*((_QWORD *)a1 + 3) + 664LL));
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
    return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
  }
  return result;
}
