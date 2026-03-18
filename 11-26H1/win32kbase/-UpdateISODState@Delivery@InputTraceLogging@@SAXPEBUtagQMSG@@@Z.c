/*
 * XREFs of ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1400E3A04
 * Callers:
 *     DeferSysPeekMsg @ 0x1400E32C0 (DeferSysPeekMsg.c)
 *     HandleDeferredInput @ 0x1400E3510 (HandleDeferredInput.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x140002A70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1400E43B8 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 */

void __fastcall InputTraceLogging::Delivery::UpdateISODState(
        const struct tagQMSG *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edx
  const struct tagQMSG *v5; // r8
  int v6; // ecx
  unsigned int v7; // [rsp+50h] [rbp-10h] BYREF
  __int64 v8; // [rsp+58h] [rbp-8h] BYREF
  int v9; // [rsp+70h] [rbp+10h] BYREF
  int v10; // [rsp+78h] [rbp+18h] BYREF
  int v11; // [rsp+80h] [rbp+20h] BYREF
  int v12; // [rsp+88h] [rbp+28h] BYREF

  v4 = *((_DWORD *)a1 + 6);
  v5 = a1;
  if ( (v4 >= 0x100 && v4 <= 0x109 || InputTraceLogging::IsMouseInputMessage(v4))
    && (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x10) != 0
    && (qword_1402A9E58 & 0x10) == qword_1402A9E58 )
  {
    v6 = *((_DWORD *)v5 + 25);
    v7 = v4;
    v9 = -__CFSHR__(v6, 16);
    v10 = -__CFSHR__(v6, 15);
    v11 = -__CFSHR__(v6, 14);
    v8 = *((_QWORD *)v5 + 18);
    v12 = -__CFSHR__(v6, 17);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1402A9E40,
      (__int64)&unk_140282039,
      (__int64)v5,
      a4,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
