/*
 * XREFs of ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180018508
 * Callers:
 *     PbmReportAppInteractivityChange @ 0x180017CA0 (PbmReportAppInteractivityChange.c)
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18002A5B8 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f302790ab0c__&_0_ @ 0x180017A10 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f30.c)
 *     _lambda_bc5d681da67d9384ebd56f302790ab0c_::_lambda_bc5d681da67d9384ebd56f302790ab0c_ @ 0x180017A48 (_lambda_bc5d681da67d9384ebd56f302790ab0c_--_lambda_bc5d681da67d9384ebd56f302790ab0c_.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x180018D14 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18001A3A0 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180023250 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002469C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18002DAB8 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18002DB40 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18003914C (-PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CApplicationManager::ProcessInteractivityNotification(
        __int64 a1,
        const unsigned __int16 *a2,
        CApplication *a3,
        int a4,
        unsigned int a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  const struct _tlgProvider_t *v10; // rax
  int v11; // r8d
  int v12; // r9d
  int v13; // r14d
  int Application; // eax
  unsigned int v15; // edi
  CApplication *v17; // rsi
  __int64 v18; // r8
  std::_Ref_count_base *v19; // rdi
  int v20; // ebx
  int v21; // eax
  unsigned int v22; // esi
  int v23; // eax
  unsigned int v24; // esi
  int v25; // [rsp+40h] [rbp-E8h] BYREF
  CApplication *v26; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-D8h] BYREF
  std::_Ref_count_base *v28; // [rsp+58h] [rbp-D0h]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+60h] [rbp-C8h] BYREF
  const unsigned __int16 *v30; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-B8h] BYREF
  std::_Ref_count_base *v32; // [rsp+78h] [rbp-B0h]
  CApplication *v33; // [rsp+80h] [rbp-A8h]
  BOOL v34; // [rsp+88h] [rbp-A0h]
  unsigned int v35; // [rsp+8Ch] [rbp-9Ch]
  const unsigned __int16 *v36; // [rsp+90h] [rbp-98h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+A0h] [rbp-88h] BYREF
  __int64 (__fastcall ***v38)(); // [rsp+D8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v30 = a2;
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v29 = v9;
  v10 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v10 > 4u && (unsigned __int8)tlgKeywordOn(v10, 0x8000LL) )
  {
    v25 = a4 == 0;
    v26 = a3;
    v36 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned int)&unk_18005A7A4,
      v11,
      v12,
      (__int64)&v36,
      (__int64)&v26,
      (__int64)&v25);
  }
  v26 = 0LL;
  v25 = 0;
  v13 = 1;
  Application = CApplicationManager::GetApplication(
                  (CApplicationManager *)a1,
                  a2,
                  (unsigned __int64)a3,
                  a5,
                  &v26,
                  1,
                  &v25);
  v15 = Application;
  if ( Application < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE1,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)Application);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v15;
  }
  EnterCriticalSection(v9);
  v17 = v26;
  if ( a4 == 2
    && *((_DWORD *)v26 + 52)
    && !CApplication::GetTotalActiveRenderStreamCount(v26)
    && CApplication::GetTotalActiveCaptureStreamCount(v17) )
  {
    if ( v9 )
      LeaveCriticalSection(v9);
  }
  else
  {
    if ( v9 )
      LeaveCriticalSection(v9);
    v13 = 0;
  }
  std::make_shared<std::wstring,unsigned short const * &>(&v27, &v30);
  v19 = v28;
  if ( v28 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v28 + 2);
    v19 = v28;
  }
  v31 = v27;
  v32 = v19;
  v33 = a3;
  v34 = a4 == 0;
  v35 = a5;
  if ( v13 )
  {
    std::function_void___cdecl_void__::function_void___cdecl_void____lambda_bc5d681da67d9384ebd56f302790ab0c____0_(
      &v37,
      (__int64)&v31,
      v18);
    v20 = CApplication::PostDelayedInteractivityNotification(v17);
    std::_Func_class<void,>::~_Func_class<void,>(&v37);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF1,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v20);
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v29);
      return (unsigned int)v20;
    }
    v19 = v32;
    goto LABEL_43;
  }
  v21 = CApplication::CleanupDelayedInteractivityNotification(v17);
  v22 = v21;
  if ( v21 >= 0 )
  {
    v38 = 0LL;
    v37 = off_180052D30;
    lambda_bc5d681da67d9384ebd56f302790ab0c_::_lambda_bc5d681da67d9384ebd56f302790ab0c_();
    v38 = &v37;
    v23 = QueueGenericWorkItem((__int64 *)&v37);
    v24 = v23;
    if ( v23 >= 0 )
    {
LABEL_43:
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v29);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF9,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v23);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v24;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF6,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v21);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v22;
  }
}
