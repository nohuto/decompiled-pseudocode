/*
 * XREFs of ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x18003C1E4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Do_call @ 0x1800417A0 (std--_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180019884 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18002328C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180038110 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180038E68 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnCastingAppStateChanged(__int64 a1, __int64 a2, int a3)
{
  CApplicationManager *v5; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rdi
  int v8; // ebx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r14d
  int v13; // ecx
  bool v14; // sf
  char *v16; // [rsp+28h] [rbp-50h]
  _BYTE *v17; // [rsp+40h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  int v21; // [rsp+88h] [rbp+10h] BYREF
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  v20 = a1;
  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v18 = v6;
  v7 = *(_QWORD *)(a2 + 224);
  v8 = 0;
  if ( v7 || (CApplicationManager::Register(v5, (struct CProcess *)a2), (v7 = *(_QWORD *)(a2 + 224)) != 0) )
  {
    v9 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 0x8000LL) )
    {
      LODWORD(v20) = a3;
      v21 = *(_DWORD *)(v7 + 212);
      v22 = *(_QWORD *)(v7 + 696);
      v17 = *(_BYTE **)(v7 + 24);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        byte_18005AB08,
        v10,
        v11,
        &v17,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20);
    }
    v12 = *(_DWORD *)(v7 + 208) != 0;
    if ( !*(_DWORD *)(a2 + 416) )
    {
      v13 = a3 != 0 ? -1 : 1;
      v14 = v13 + *(_DWORD *)(a2 + 508) < 0;
      *(_DWORD *)(a2 + 508) += v13;
      if ( v14 )
      {
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          4053LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)0x8000FFFFLL,
          (__int64)"Casting stream count dropped below zero.",
          v16);
        *(_DWORD *)(a2 + 508) = 0;
      }
      else
      {
        CApplication::CastingStateChanged(*(CApplication **)(a2 + 224), a3 != 0 ? -1 : 1);
      }
    }
    LOBYTE(v8) = *(_DWORD *)(v7 + 208) != 0;
    if ( v12 != v8 )
      CApplicationManager::OnApplicationInteractivityChanged(v5, (struct CApplication *)v7);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  return 0LL;
}
