/*
 * XREFs of ??$TaskGroupSwitchToCompleted@Uguid@winrt@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@@@Z @ 0x180563344
 * Callers:
 *     ?ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4ActivateWindowsOptions@34567@@Z @ 0x180563C98 (-ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800031DC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Provider@TaskGroupsTraceLoggingProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180565200 (-Provider@TaskGroupsTraceLoggingProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char TaskGroupsTraceLoggingProvider::TaskGroupSwitchToCompleted<winrt::guid>()
{
  const struct _tlgProvider_t *v0; // rax
  __int64 v1; // rcx

  v0 = TaskGroupsTraceLoggingProvider::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    LOBYTE(v0) = tlgKeywordOn((__int64)v0, 0x400000000000LL);
    if ( (_BYTE)v0 )
      LOBYTE(v0) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
                     v1,
                     (__int64)&unk_1807E4F1E);
  }
  return (char)v0;
}
