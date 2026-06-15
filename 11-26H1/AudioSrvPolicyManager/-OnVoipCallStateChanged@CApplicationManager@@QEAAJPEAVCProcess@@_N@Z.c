/*
 * XREFs of ?OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18003C718
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_::_Do_call @ 0x180047A70 (std--_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180001514 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180019884 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x18003A7E8 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 */

__int64 __fastcall CApplicationManager::OnVoipCallStateChanged(
        CApplicationManager *this,
        struct CProcess *a2,
        unsigned __int8 a3)
{
  int v3; // r15d
  CApplicationManager *v5; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rsi
  int v8; // ebx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r14d
  int v13; // eax
  bool v14; // sf
  void *v16; // [rsp+40h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+48h] [rbp-30h] BYREF
  CApplicationManager *v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+88h] [rbp+10h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v18 = this;
  v3 = a3;
  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v17 = v6;
  v7 = *((_QWORD *)a2 + 28);
  v8 = 0;
  if ( v7 || (CApplicationManager::Register(v5, a2), (v7 = *((_QWORD *)a2 + 28)) != 0) )
  {
    v9 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 0x8000LL) )
    {
      LOBYTE(v18) = v3;
      v19 = *(_DWORD *)(v7 + 212);
      v20 = *(_QWORD *)(v7 + 696);
      v16 = *(void **)(v7 + 24);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v10,
        (__int64)&unk_18005AABA,
        v10,
        v11,
        &v16,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18);
    }
    v12 = *(_DWORD *)(v7 + 208) != 0;
    if ( !*((_DWORD *)a2 + 104) )
    {
      v13 = 2 * v3 - 1;
      v14 = v13 + *((_DWORD *)a2 + 128) < 0;
      *((_DWORD *)a2 + 128) += v13;
      if ( v14 )
        *((_DWORD *)a2 + 128) = 0;
      else
        CApplication::VoipCallStateChanged(*((CApplication **)a2 + 28), 2 * v3 - 1);
    }
    LOBYTE(v8) = *(_DWORD *)(v7 + 208) != 0;
    if ( v12 != v8 )
      CApplicationManager::OnApplicationInteractivityChanged(v5, (struct CApplication *)v7);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return 0LL;
}
