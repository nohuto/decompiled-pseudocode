/*
 * XREFs of ?TraceSend@Log@CoreMessagingK@@SAXPEBUConnectionTargetInfo@2@@Z @ 0x140067C60
 * Callers:
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x140067810 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400F4BA8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall CoreMessagingK::Log::TraceSend(
        const struct CoreMessagingK::ConnectionTargetInfo *a1,
        __int64 a2,
        int a3,
        int a4)
{
  __int64 *v4; // rdx
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = (__int64 *)*((_QWORD *)a1 + 2);
  if ( (unsigned int)dword_14029F130 > 5 )
  {
    v5 = *((_DWORD *)v4 + 3);
    v6 = *((_DWORD *)v4 + 2);
    v7 = *v4;
    v8 = *((_QWORD *)a1 + 1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14029F130,
      (unsigned int)&unk_14028424F,
      a3,
      a4,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5);
  }
}
