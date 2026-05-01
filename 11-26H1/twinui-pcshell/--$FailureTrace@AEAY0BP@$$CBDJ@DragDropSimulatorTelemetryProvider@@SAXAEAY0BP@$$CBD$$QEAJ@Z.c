/*
 * XREFs of ??$FailureTrace@AEAY0BP@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BP@$$CBD$$QEAJ@Z @ 0x180578228
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x18057ADF0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_18057ADF0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000DA50 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@DragDropSimulatorTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18057AD1C (-Provider@DragDropSimulatorTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[31],long>()
{
  const struct _tlgProvider_t *v0; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  const char *v4; // [rsp+68h] [rbp+20h] BYREF

  v0 = DragDropSimulatorTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    LOBYTE(v0) = tlgKeywordOn((__int64)v0, 0x400000000000LL);
    if ( (_BYTE)v0 )
    {
      v4 = "SimulateDrop::no target window";
      LOBYTE(v0) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v2,
                     (__int64)&unk_180820014,
                     v1,
                     v2,
                     &v4);
    }
  }
  return (char)v0;
}
