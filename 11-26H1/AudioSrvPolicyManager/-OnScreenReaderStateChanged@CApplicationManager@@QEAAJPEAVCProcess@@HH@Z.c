/*
 * XREFs of ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x18003C5B0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_::_Do_call @ 0x180041780 (std--_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800015D8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18001FE70 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ?ApplyStreamClassPolicyGains@CProcess@@UEAAXHPEAH@Z @ 0x180038090 (-ApplyStreamClassPolicyGains@CProcess@@UEAAXHPEAH@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180044920 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnScreenReaderStateChanged(
        CApplicationManager *this,
        struct CProcess *a2,
        int a3,
        int a4)
{
  CApplicationManager *v7; // r14
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // eax
  float v14; // xmm0_4
  int v15; // eax
  unsigned int v16; // ebx
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  CApplicationManager *v20; // [rsp+90h] [rbp+38h] BYREF
  int v21; // [rsp+98h] [rbp+40h] BYREF
  int v22; // [rsp+A0h] [rbp+48h] BYREF
  int v23; // [rsp+A8h] [rbp+50h] BYREF

  v20 = this;
  v7 = g_ApplicationManager;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v18 = v8;
  v9 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 0x8000LL) )
  {
    v22 = a4;
    v23 = *((_DWORD *)a2 + 41);
    LODWORD(v20) = *((_DWORD *)a2 + 40);
    v21 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (__int64)&unk_18005A941,
      v10,
      v11,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v23,
      (__int64)&v22);
  }
  v13 = 0;
  if ( a4 <= 0 )
    v13 = a4;
  if ( v13 <= -24 )
    v13 = -24;
  v22 = 0;
  v14 = ConvertDbToEngineVolume(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)v13)));
  v15 = TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 41), *((_DWORD *)a2 + 40), a3, v14, &v22);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v23 = 0;
    CProcess::ApplyStreamClassPolicyGains(a2, a3 == 0, &v23);
    if ( v22 || v23 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v7, *((_DWORD *)a2 + 41), 3);
    v16 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE3,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v15);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  return v16;
}
