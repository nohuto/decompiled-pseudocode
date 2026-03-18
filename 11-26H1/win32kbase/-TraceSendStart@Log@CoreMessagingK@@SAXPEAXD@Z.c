/*
 * XREFs of ?TraceSendStart@Log@CoreMessagingK@@SAXPEAXD@Z @ 0x14008BB04
 * Callers:
 *     CoreMsgSend @ 0x14008B78C (CoreMsgSend.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140002EA8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall CoreMessagingK::Log::TraceSendStart(void *a1, char a2, __int64 a3, __int64 a4)
{
  char v4; // [rsp+48h] [rbp+10h] BYREF
  void *v5; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  if ( (unsigned int)dword_1402AA150 > 5 )
  {
    v5 = a1;
    v4 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1402AA150,
      (__int64)&unk_14028E4A8,
      a3,
      a4,
      (__int64)&v5,
      (__int64)&v4);
  }
}
