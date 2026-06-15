/*
 * XREFs of ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@@Z @ 0x18002A350
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call @ 0x18002CC30 (std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18002328C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?MarkAsPendingTermination@CApplication@@QEAAXXZ @ 0x180038EAC (-MarkAsPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180039D58 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003C010 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnApplicationStateChanged(
        CApplication *a1,
        _BYTE *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  CApplicationManager *v8; // r13
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  const struct _tlgProvider_t *v10; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int Application; // esi
  CApplication *v17; // rbx
  unsigned int v18; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  _BYTE *v20; // [rsp+50h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+58h] [rbp-8h] BYREF
  CApplication *v22; // [rsp+90h] [rbp+30h] BYREF

  v22 = a1;
  v8 = g_ApplicationManager;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v21 = v9;
  v10 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  v11 = a5;
  if ( *(_DWORD *)v10 > 4u && tlgKeywordOn((__int64)v10, 0x8000LL) )
  {
    LODWORD(v22) = v11;
    v18 = a4;
    v19 = a3;
    v20 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      byte_18005A74C,
      v13,
      v14,
      &v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v22);
  }
  v22 = 0LL;
  Application = CApplicationManager::GetApplication(v8, (const unsigned __int16 *)a2, a3, a4, &v22, 0, 0LL);
  if ( Application >= 0 )
  {
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v17 = v22;
        if ( *((_DWORD *)v22 + 52) )
          CApplicationManager::OnApplicationClosed(v8, (const unsigned __int16 *)a2, *((_QWORD *)v22 + 87), a4);
        CApplication::MarkAsPendingTermination(v17);
      }
    }
    else
    {
      CApplication::ReviveProcessesPendingTermination(v22);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
    return 0LL;
  }
  else
  {
    if ( v9 )
      LeaveCriticalSection(v9);
    return (unsigned int)Application;
  }
}
