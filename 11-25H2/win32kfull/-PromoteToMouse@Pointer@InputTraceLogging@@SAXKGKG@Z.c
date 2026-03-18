/*
 * XREFs of ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x140139BF0
 * Callers:
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x140139508 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1401398E8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@33@Z @ 0x1400044E0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::Pointer::PromoteToMouse()
{
  if ( (unsigned int)dword_14039BB50 > 4 && (qword_14039BB60 & 0x20) != 0 && (qword_14039BB68 & 0x20) == qword_14039BB68 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BB50,
      (__int64)&unk_14036933E);
}
