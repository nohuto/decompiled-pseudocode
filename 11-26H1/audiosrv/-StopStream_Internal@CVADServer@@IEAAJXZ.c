/*
 * XREFs of ?StopStream_Internal@CVADServer@@IEAAJXZ @ 0x180080C20
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180065D60 (-StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?EnsureStreamStopped@CVADServer@@QEAAJXZ @ 0x1801116E4 (-EnsureStreamStopped@CVADServer@@QEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x1800463BC (-reset@-$shared_ptr@VCPowerReference@@@std@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800584C0 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x18005E26C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 *     _lambda_9779933831ecf7631e1f1e31bfa66ff4_::operator() @ 0x180110FB8 (_lambda_9779933831ecf7631e1f1e31bfa66ff4_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVADServer::StopStream_Internal(CVADServer *this)
{
  int v2; // eax
  unsigned int v3; // esi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct AudioSrvTelemetryProvider *v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  std::_Ref_count_base *v13[2]; // [rsp+40h] [rbp-28h] BYREF
  CVADServer *v14; // [rsp+50h] [rbp-18h] BYREF
  char v15; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+90h] [rbp+28h] BYREF
  int v18; // [rsp+98h] [rbp+30h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+38h] BYREF
  const wchar_t *v20; // [rsp+A8h] [rbp+40h] BYREF

  v14 = this;
  v15 = 1;
  if ( *((_DWORD *)this + 42) != 1 )
  {
LABEL_15:
    v15 = 0;
    lambda_9779933831ecf7631e1f1e31bfa66ff4_::operator()(&v14);
    return 0LL;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 232LL))(
         *((_QWORD *)this + 18),
         *((_QWORD *)this + 22));
  v3 = v2;
  if ( v2 >= 0 )
  {
    *((_DWORD *)this + 42) = 0;
    v5 = 0LL;
    v19 = 0LL;
    v6 = *((_QWORD *)this + 22);
    if ( v6 && *((_QWORD *)this + 18) )
    {
      v7 = v6 + 8;
      v8 = *(_QWORD *)(v6 + 8);
      v19 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(v8 + 24))(v7, &v19) >= 0 )
      {
        v9 = AudioSrvTelemetryProvider::Instance();
        v10 = (_DWORD *)*((_QWORD *)v9 + 1);
        if ( *v10 > 4u && tlgKeywordOn(*((_QWORD *)v9 + 1), 512LL) )
        {
          LODWORD(v17) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 40LL))(v19);
          v20 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL) + 64LL))(*((_QWORD *)this + 18) + 8LL);
          v13[0] = (std::_Ref_count_base *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 22) + 8LL)
                                                                              + 80LL))(*((_QWORD *)this + 22) + 8LL);
          v18 = *(unsigned __int8 *)(*((_QWORD *)this + 22) + 120LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            (__int64)v10,
            byte_1801A7977,
            v11,
            v12,
            (__int64)&v18,
            (__int64)v13,
            &v20,
            (__int64)&v17);
        }
      }
      v5 = v19;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x72E,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v2);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 65);
  *(_OWORD *)v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 11);
  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 440);
  std::shared_ptr<std::function<void (void)>>::operator=(v13, (__int64 *)this + 60);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  std::shared_ptr<CPowerReference>::reset(v13);
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
  return v3;
}
