/*
 * XREFs of ?DeliverRawInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@QEAUtagHIDDATA@@_N@Z @ 0x140091998
 * Callers:
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140270360 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140091EEC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall InputTraceLogging::RIM::DeliverRawInput(
        const struct RIMDEV *a1,
        struct tagHIDDATA *const a2,
        unsigned __int8 a3,
        int a4)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  const struct RIMDEV *v6; // [rsp+48h] [rbp-10h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4
    && (qword_1403AA9D0 & 0x100) != 0
    && (qword_1403AA9D8 & 0x100) == qword_1403AA9D8 )
  {
    v7 = a3;
    v4 = 0LL;
    if ( a2 )
      v4 = *(_QWORD *)a2;
    v5 = v4;
    v6 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1403AA9C0,
      (unsigned int)&unk_140373501,
      a3,
      a4,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v7);
  }
}
