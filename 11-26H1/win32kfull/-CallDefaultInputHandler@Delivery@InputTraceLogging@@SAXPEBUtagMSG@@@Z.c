/*
 * XREFs of ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1401F4D24
 * Callers:
 *     xxxClientCallDefaultInputHandler @ 0x1401F4C00 (xxxClientCallDefaultInputHandler.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@443@Z @ 0x1400034A8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4433@Z @ 0x140003554 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U1@@-$_tlgWriteTemplate@$.c)
 *     IsPointerInputMessage @ 0x1400969D0 (IsPointerInputMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1400969FC (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@U3@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@5544@Z @ 0x1401F4F6C (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@U3@U3@U2@.c)
 */

void __fastcall InputTraceLogging::Delivery::CallDefaultInputHandler(const struct tagMSG *a1)
{
  int v1; // ecx
  int v2; // r8d
  __int64 *v3; // r9
  int v4; // r10d
  __int16 v5; // dx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r10d
  __int64 v12; // [rsp+60h] [rbp-20h] BYREF
  __int64 v13; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h] BYREF
  __int64 v15; // [rsp+78h] [rbp-8h] BYREF
  int v16; // [rsp+90h] [rbp+10h] BYREF
  int v17; // [rsp+98h] [rbp+18h] BYREF
  int v18; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+28h] BYREF

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 2)) )
  {
    v5 = *((_WORD *)v3 + 8);
    if ( v5 == 1 )
    {
      if ( (unsigned int)dword_1403AA9C0 > 4 && tlgKeywordOn((__int64)&dword_1403AA9C0, 16LL) )
      {
        v16 = *(unsigned __int16 *)(v10 + 18);
        v17 = *(_DWORD *)(v10 + 32);
        v12 = *(_QWORD *)(v10 + 24);
        v13 = *(_QWORD *)(v10 + 16);
        v14 = *(_QWORD *)v10;
        v18 = v11;
        LODWORD(v19) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1403AA9C0,
          (__int64)&unk_140377BF5,
          v9,
          v10,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v17,
          (__int64)&v16);
      }
    }
    else if ( (unsigned int)dword_1403AA9C0 > 4
           && (qword_1403AA9D0 & 0x10) != 0
           && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
    {
      v17 = *((unsigned __int16 *)v3 + 9);
      v18 = *((_DWORD *)v3 + 8);
      v14 = v3[3];
      v13 = v3[2];
      v15 = *v3;
      LOWORD(v16) = v5;
      LODWORD(v19) = v4;
      LODWORD(v12) = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1403AA9C0,
        (unsigned int)&unk_140377C89,
        v2,
        (_DWORD)v3,
        (__int64)&v16,
        (__int64)&v12,
        (__int64)&v19,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v18,
        (__int64)&v17);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v1)
         && (unsigned int)dword_1403AA9C0 > 4
         && tlgKeywordOn((__int64)&dword_1403AA9C0, 16LL) )
  {
    v16 = *(_DWORD *)(v7 + 32);
    v19 = *(_QWORD *)(v7 + 24);
    v15 = *(_QWORD *)(v7 + 16);
    v14 = *(_QWORD *)v7;
    v17 = v8;
    v18 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AA9C0,
      (__int64)&unk_140377D2C,
      v6,
      v7,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v14,
      (__int64)&v15,
      (__int64)&v19,
      (__int64)&v16);
  }
}
