/*
 * XREFs of ??$WindowTabHostAltTabInvoked@I@WindowTabHostTelemetry@@SAX$$QEAI@Z @ 0x1801B9E40
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1800D3244 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801B9EB4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall WindowTabHostTelemetry::WindowTabHostAltTabInvoked<unsigned int>(int *a1)
{
  __int64 result; // rax
  int v3; // r9d
  __int64 v4; // rcx
  int v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  result = (__int64)WindowManagementLogging::Provider();
  v4 = result;
  if ( *(_DWORD *)result > 5u )
  {
    result = 0x400000000000LL;
    if ( (*(_QWORD *)(v4 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v4 + 24) & 0x400000000000LL) == *(_QWORD *)(v4 + 24) )
    {
      v5 = *a1;
      v6 = 0x2000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
               v4,
               (unsigned int)&unk_1807DA6CD,
               0,
               v3,
               (__int64)&v5,
               (__int64)&v6);
    }
  }
  return result;
}
