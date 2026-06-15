/*
 * XREFs of _lambda_4c2c1a0f134a833da506390f8b114047_::operator() @ 0x18011AE4C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4c2c1a0f134a833da506390f8b114047__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x18011B170 (std--_Func_impl_no_alloc__lambda_4c2c1a0f134a833da506390f8b114047__long_wil--com_pt_ea_18011B170.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180078030 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4c2c1a0f134a833da506390f8b114047_::operator()(int **a1, __int64 a2)
{
  _QWORD *v4; // rcx
  int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rcx
  int v8; // ebx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const wchar_t *v13; // rax
  const wchar_t *v15; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+48h] [rbp+10h] BYREF

  v4 = (_QWORD *)(*(_QWORD *)a2 + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 40LL) > 7uLL )
    v4 = (_QWORD *)*v4;
  v5 = **a1;
  if ( (unsigned int)GetSessionIdFromEndpointId(v4) == v5 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a2 + 112LL);
    EnterCriticalSection(v6);
    v16 = v6;
    v7 = *(_QWORD *)(*(_QWORD *)a2 + 152LL);
    if ( v7 )
    {
      v8 = *a1[1];
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7) != v8 )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a2 + 152LL) + 264LL))(*(_QWORD *)(*(_QWORD *)a2 + 152LL));
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a2 + 152LL));
        v9 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *v9 > 4u && tlgKeywordOn((__int64)v9, 2LL) )
        {
          v13 = (const wchar_t *)(*(_QWORD *)a2 + 16LL);
          if ( *(_QWORD *)(*(_QWORD *)a2 + 40LL) > 7uLL )
            v13 = *(const wchar_t **)v13;
          v15 = v13;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            v10,
            byte_1801A7E6B,
            v11,
            v12,
            &v15);
        }
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
  }
  return 0LL;
}
