/*
 * XREFs of ?MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x180028B24
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_::_Do_call @ 0x180044F00 (std--_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_--_Do_call.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000F768 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180021364 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::MuteAllAppsInSession(CApplicationManager *this, int a2)
{
  const struct _tlgProvider_t *v4; // rcx
  _QWORD *v5; // rbx
  struct CApplication *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 0x20000LL) )
  {
    v10 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v7,
      byte_18005AC79,
      v8,
      v9,
      (__int64)&v10);
  }
  v5 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v5 )
  {
    v6 = (struct CApplication *)v5[2];
    v5 = (_QWORD *)*v5;
    if ( *((_DWORD *)v6 + 53) == a2 && !*((_DWORD *)v6 + 164) )
      CApplicationManager::SilenceAndRevokePLMExemption(this, v6);
  }
}
