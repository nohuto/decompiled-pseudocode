/*
 * XREFs of ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18002AB18
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_::_Do_call @ 0x18003ABD0 (std--_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_--_Do_call.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800161F4 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002469C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnBCMStartupGracePeriodExpired(
        CApplicationManager *this,
        struct CApplication *a2)
{
  CApplicationManager *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  CApplicationManager *v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  _BYTE *v11; // [rsp+88h] [rbp+20h] BYREF

  v9 = this;
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v5 > 4u && tlgKeywordOn((__int64)v5, 0x8000LL) )
  {
    LODWORD(v9) = *((_DWORD *)a2 + 53);
    v10 = *((_QWORD *)a2 + 87);
    v11 = (_BYTE *)*((_QWORD *)a2 + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v6,
      byte_18005A7F9,
      v6,
      v7,
      &v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  CApplication::CleanupBCMStartupLatencyGracePeriod((struct _RTL_CRITICAL_SECTION *)a2);
  CApplicationManager::ApplyPBMPolicy(v3, a2, 0xD1u, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
