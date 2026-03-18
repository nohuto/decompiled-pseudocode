/*
 * XREFs of ?TraceOpenConnectionStop@Log@CoreMessagingK@@SAXJPEAX@Z @ 0x1400FD2E8
 * Callers:
 *     CoreMsgOpenConnection @ 0x1400FD1A8 (CoreMsgOpenConnection.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1401461C8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall CoreMessagingK::Log::TraceOpenConnectionStop(int a1, void *a2, int a3, int a4)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF
  void *v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029F130 > 5 )
  {
    v5 = a2;
    v4 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_14029F130,
      (unsigned int)&unk_140283F2B,
      a3,
      a4,
      (__int64)&v4,
      (__int64)&v5);
  }
}
