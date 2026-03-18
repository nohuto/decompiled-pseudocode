/*
 * XREFs of ?TraceSendStop@Log@CoreMessagingK@@SAXJ@Z @ 0x140067B2C
 * Callers:
 *     CoreMsgSend @ 0x140067768 (CoreMsgSend.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14007B6DC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall CoreMessagingK::Log::TraceSendStop(int a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14029F130 > 5 )
  {
    v4 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14029F130,
      (unsigned int)&unk_140283EC3,
      a3,
      a4,
      (__int64)&v4);
  }
}
