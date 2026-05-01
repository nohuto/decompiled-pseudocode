/*
 * XREFs of ??$ExperienceManager_CheckAndPopulateContact_PopulatedContact@_N@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAX$$QEA_N@Z @ 0x18038F070
 * Callers:
 *     _lambda_0f768bc8971e0bee1fc73f6126b3910e_::operator() @ 0x1803908F8 (_lambda_0f768bc8971e0bee1fc73f6126b3910e_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800C7D4C (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180392EA4 (-Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::ExperienceManager_CheckAndPopulateContact_PopulatedContact<bool>(
        __int64 a1,
        char *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      v6 = *(_QWORD *)(a1 + 272);
      v8 = *a2;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
                     v5,
                     byte_1807F6814,
                     (const GUID *)(v6 + 8),
                     v5,
                     (__int64)&v8);
    }
  }
  return (char)v4;
}
