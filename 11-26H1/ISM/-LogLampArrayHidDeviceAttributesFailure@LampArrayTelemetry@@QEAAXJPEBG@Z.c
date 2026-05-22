/*
 * XREFs of ?LogLampArrayHidDeviceAttributesFailure@LampArrayTelemetry@@QEAAXJPEBG@Z @ 0x1800E8E18
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800EA82C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800049B8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall LampArrayTelemetry::LogLampArrayHidDeviceAttributesFailure(
        LampArrayTelemetry *this,
        __int64 a2,
        const unsigned __int16 *a3)
{
  __int64 v3; // rcx
  const WCHAR *v4; // r8
  __int64 v5; // r9
  __int64 v6[3]; // [rsp+40h] [rbp-18h] BYREF
  LampArrayTelemetry *v7; // [rsp+60h] [rbp+8h] BYREF
  const WCHAR *v8; // [rsp+78h] [rbp+20h] BYREF

  v7 = this;
  if ( (unsigned int)dword_180251248 > 5 && tlgKeywordOn((__int64)&dword_180251248, 0x400000000000LL) )
  {
    v8 = v4;
    LODWORD(v7) = v5;
    v6[0] = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v3,
      (__int64)&unk_1802169BE,
      (__int64)v4,
      v5,
      (__int64)v6,
      (__int64)&v7,
      &v8);
  }
}
