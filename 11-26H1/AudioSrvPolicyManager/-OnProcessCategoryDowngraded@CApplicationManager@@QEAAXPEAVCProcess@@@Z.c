/*
 * XREFs of ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x180047CC4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Do_call @ 0x18003ABC0 (std--_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_--_Do_call.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180021364 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x1800292E4 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18002A4C8 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 */

void __fastcall CApplicationManager::OnProcessCategoryDowngraded(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v2; // rsi
  CApplication *v4; // rdi
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  CApplicationManager *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  v2 = g_ApplicationManager;
  v4 = (CApplication *)*((_QWORD *)a2 + 28);
  v5 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v5 > 4u && tlgKeywordOn((__int64)v5, 0x8000LL) )
  {
    LODWORD(v8) = *((_DWORD *)a2 + 40);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v6,
      byte_18005B751,
      v6,
      v7,
      (__int64)&v8);
  }
  if ( *((_DWORD *)a2 + 119) == 3 )
  {
    *(_QWORD *)((char *)a2 + 476) = 0LL;
    *((_DWORD *)a2 + 121) = 4;
  }
  CProcess::DeleteInactivityTimer((struct _RTL_CRITICAL_SECTION *)a2);
  if ( v4 )
  {
    CApplication::RemoveAudioPlaybackRestriction(v4);
    CApplicationManager::ApplyPBMPolicy(v2, v4, 0xD1u, 0);
  }
}
