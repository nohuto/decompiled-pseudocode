/*
 * XREFs of ?LogOnPeerRequestsConnect@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXIIJ@Z @ 0x18008D528
 * Callers:
 *     ?OnPeerRequestsConnectThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1800424F0 (-OnPeerRequestsConnectThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsg.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180001E50 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::LogOnPeerRequestsConnect(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  int v5; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v6[5]; // [rsp+44h] [rbp-14h] BYREF
  BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *v7; // [rsp+60h] [rbp+8h] BYREF

  v7 = this;
  if ( qword_180254640 && *(_DWORD *)qword_180254640 > 5u && tlgKeywordOn(qword_180254640, 2LL) )
  {
    LODWORD(v7) = v3;
    v5 = v2;
    v6[0] = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v1,
      (__int64)&unk_180218A3F,
      v2,
      v3,
      (__int64)v6,
      (__int64)&v5,
      (__int64)&v7);
  }
}
