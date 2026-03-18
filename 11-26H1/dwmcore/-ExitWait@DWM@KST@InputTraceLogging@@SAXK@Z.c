/*
 * XREFs of ?ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x1801507DC
 * Callers:
 *     ?Run@CKstBase@@AEAAKXZ @ 0x180150618 (-Run@CKstBase@@AEAAKXZ.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801D594C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::KST::DWM::ExitWait(int a1)
{
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && tlgKeywordOn((__int64)v2, 2LL) )
  {
    v6 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v3,
      (unsigned int)&unk_1803B6B8C,
      v4,
      v5,
      (__int64)&v6);
  }
}
