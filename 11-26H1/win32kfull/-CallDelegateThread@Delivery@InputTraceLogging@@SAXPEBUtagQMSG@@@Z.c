/*
 * XREFs of ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x140094ED4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400013D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     IsPointerInputMessage @ 0x1400969D0 (IsPointerInputMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1400969FC (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1401E9A44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@@-$_tl.c)
 */

void __fastcall InputTraceLogging::Delivery::CallDelegateThread(const struct tagQMSG *a1)
{
  int v1; // edx
  unsigned int v2; // ecx
  __int64 v3; // r8
  int v4; // r9d
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+50h] [rbp-10h] BYREF
  int v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  int v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  if ( (unsigned int)IsPointerInputMessage(*((unsigned int *)a1 + 6)) )
  {
    if ( (unsigned int)dword_1403AA9C0 > 4
      && (qword_1403AA9D0 & 0x10) != 0
      && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
    {
      v11 = *(unsigned __int16 *)(v3 + 34);
      v12 = *(_QWORD *)(v3 + 40);
      LOWORD(v9) = *(_WORD *)(v3 + 32);
      v8 = *(_QWORD *)(v3 + 144);
      LODWORD(v10) = v1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1403AA9C0,
        (unsigned int)&unk_140374FE0,
        v3,
        v4,
        (__int64)&v8,
        (__int64)&v9,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v2)
         && (unsigned int)dword_1403AA9C0 > 4
         && (qword_1403AA9D0 & 0x10) != 0
         && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
  {
    v10 = *(_QWORD *)(v6 + 144);
    v9 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AA9C0,
      (__int64)&unk_140374F9B,
      v6,
      v7,
      (__int64)&v10,
      (__int64)&v9);
  }
}
