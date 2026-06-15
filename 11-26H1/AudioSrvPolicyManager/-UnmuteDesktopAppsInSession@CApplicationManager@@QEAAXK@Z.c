/*
 * XREFs of ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18003D368
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_::_Do_call @ 0x180044F00 (std--_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_--_Do_call.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18001EA10 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180021364 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 */

void __fastcall CApplicationManager::UnmuteDesktopAppsInSession(CApplicationManager *this, int a2)
{
  const struct _tlgProvider_t *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  const struct _tlgProvider_t **Next; // rax
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 0x20000LL) )
  {
    LODWORD(v8) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_18005AC44,
      v5,
      v6,
      (__int64)&v8);
  }
  v8 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v8 )
  {
    Next = (const struct _tlgProvider_t **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(
                                             (__int64)v4,
                                             &v8);
    v4 = *Next;
    if ( *((_DWORD *)*Next + 53) == a2 && !*((_DWORD *)v4 + 163) )
    {
      *(_QWORD *)((char *)v4 + 620) = 0LL;
      *(_QWORD *)((char *)v4 + 628) = 0LL;
      *(_QWORD *)((char *)v4 + 636) = 0LL;
      *((_DWORD *)v4 + 161) = 1;
    }
  }
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, a2, 0);
}
