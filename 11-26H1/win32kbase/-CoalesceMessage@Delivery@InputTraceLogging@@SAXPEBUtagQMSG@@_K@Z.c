/*
 * XREFs of ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x140174CE8
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x14006DC54 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x14004F22C (IsPointerInputMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1400E43B8 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x140140488 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x140141120 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@53@Z @ 0x1401A1838 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U1@@-$.c)
 */

void __fastcall InputTraceLogging::Delivery::CoalesceMessage(const struct tagQMSG *a1)
{
  int v1; // ecx
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+10h] BYREF
  __int64 v15; // [rsp+90h] [rbp+20h] BYREF
  __int64 v16; // [rsp+98h] [rbp+28h] BYREF

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 6)) )
  {
    if ( (unsigned int)dword_1402A9E40 > 4
      && (qword_1402A9E50 & 0x10) != 0
      && (qword_1402A9E58 & 0x10) == qword_1402A9E58 )
    {
      LODWORD(v16) = *(unsigned __int16 *)(v3 + 34);
      v12 = *(_QWORD *)(v3 + 40);
      LOWORD(v14) = *(_WORD *)(v3 + 32);
      v13[0] = *(_QWORD *)(v3 + 144);
      v11 = v4;
      LODWORD(v15) = v2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1402A9E40,
        (unsigned int)&unk_1402886C1,
        v2,
        v3,
        (__int64)v13,
        (__int64)&v14,
        (__int64)&v12,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v11);
    }
  }
  else if ( (unsigned int)(v2 - 256) > 9 )
  {
    if ( InputTraceLogging::IsMouseInputMessage(v1)
      && (unsigned int)dword_1402A9E40 > 4
      && tlgKeywordOn((__int64)&dword_1402A9E40, 16LL) )
    {
      v16 = *(_QWORD *)(v9 + 144);
      v15 = v10;
      v14 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1402A9E40,
        byte_140288845,
        v8,
        v9,
        (__int64)&v16,
        (__int64)&v14,
        (__int64)&v15);
    }
  }
  else if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 16LL) )
  {
    LODWORD(v15) = *(unsigned __int16 *)(v6 + 40);
    v13[0] = *(_QWORD *)(v6 + 32);
    v12 = *(_QWORD *)(v6 + 144);
    v16 = v7;
    v14 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1402A9E40,
      byte_1402887B8,
      v5,
      v6,
      (__int64)&v12,
      (__int64)v13,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v16);
  }
}
