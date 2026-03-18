/*
 * XREFs of ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14019E444
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x140237B0C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z @ 0x1402B0648 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1402EFE98 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x14019E570 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?InjectionSourceToString@InputTraceLogging@@CAPEBDW4InjectionSource@Mouse@1@@Z @ 0x140275B5C (-InjectionSourceToString@InputTraceLogging@@CAPEBDW4InjectionSource@Mouse@1@@Z.c)
 */

void InputTraceLogging::Mouse::InjectInput()
{
  __int64 v0; // rdx
  int v1; // r8d
  int v2; // r9d
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14039BB50 > 4 && (qword_14039BB60 & 0x40) != 0 && (qword_14039BB68 & 0x40) == qword_14039BB68 )
  {
    v3 = InputTraceLogging::InjectionSourceToString();
    v4 = v0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (unsigned int)&dword_14039BB50,
      (unsigned int)&unk_140366C8B,
      v1,
      v2,
      (__int64)&v4,
      (__int64)&v3);
  }
}
