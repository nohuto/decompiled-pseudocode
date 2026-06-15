/*
 * XREFs of ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003C010
 * Callers:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@@Z @ 0x18002A350 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerr.c)
 *     std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Do_call @ 0x180041480 (std--_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000F768 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x1800166F0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ??1?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001B2E4 (--1-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18001EA10 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002469C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x180029EDC (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 *     ??4?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z @ 0x18002B0DC (--4-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z.c)
 *     ?DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ @ 0x1800383E8 (-DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ.c)
 *     ?IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ @ 0x180038DA0 (-IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x180039E1C (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18003A5B8 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18003CDC4 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnApplicationClosed(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct CApplication *a3,
        int a4)
{
  const struct _tlgProvider_t *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int Application; // esi
  volatile signed __int32 *v13; // rbx
  struct CApplication *v14; // rbx
  CProcess *v15; // rcx
  CProcess **Next; // rax
  _BYTE *v18[2]; // [rsp+40h] [rbp-10h] BYREF
  volatile signed __int32 *v19; // [rsp+90h] [rbp+40h] BYREF
  struct CApplication *v20; // [rsp+98h] [rbp+48h] BYREF

  v8 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 0x8000LL) )
  {
    LODWORD(v19) = a4;
    v20 = a3;
    v18[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v9,
      byte_18005AB5B,
      v10,
      v11,
      v18,
      (__int64)&v20,
      (__int64)&v19);
  }
  Application = 0;
  v13 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v18[0] = (char *)this + 32;
  if ( a2 )
  {
    if ( *a2 )
    {
      Application = CApplicationManager::GetApplication(this, a2, (unsigned __int64)a3, a4, &v20, 0, 0LL);
      if ( Application >= 0 )
      {
        v14 = v20;
        wil::com_ptr_t<CApplication,wil::err_returncode_policy>::operator=(&v19, (volatile int *)v20);
        if ( !(unsigned int)CApplication::IsVoipCallCapableAndCallIsActive(v14) && *((_DWORD *)v14 + 163) )
          CApplicationManager::SilenceAndRevokePLMExemption(this, v14);
        CApplication::UpdateAppState(v14, 0, 0LL);
        if ( TsSessionIsActiveMediaApplication(v14) )
          TsSessionIdRemoveActiveMediaApp(a4, v14);
        CApplication::SendAppClosureNotification(v14);
        if ( *((_BYTE *)v14 + 720) )
          Application = CApplicationManager::RemoveApplication(this, &v20);
        v13 = v19;
      }
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v18);
  if ( v13 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 8));
    v18[0] = v13 + 8;
    v20 = (struct CApplication *)*((_QWORD *)v13 + 9);
    while ( v20 )
    {
      Next = (CProcess **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(
                            (__int64)v15,
                            (_QWORD **)&v20);
      v15 = *Next;
      if ( !*((_DWORD *)*Next + 104) )
        CProcess::DisconnectExclusiveModeStreams(v15);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v18);
  }
  wil::com_ptr_t<CApplication,wil::err_returncode_policy>::~com_ptr_t<CApplication,wil::err_returncode_policy>((__int64 *)&v19);
  return (unsigned int)Application;
}
