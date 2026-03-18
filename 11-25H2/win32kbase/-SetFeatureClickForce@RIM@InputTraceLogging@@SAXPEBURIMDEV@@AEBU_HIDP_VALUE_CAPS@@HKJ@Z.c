/*
 * XREFs of ?SetFeatureClickForce@RIM@InputTraceLogging@@SAXPEBURIMDEV@@AEBU_HIDP_VALUE_CAPS@@HKJ@Z @ 0x1401DE1C4
 * Callers:
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1401DEFE0 (RIMConfigureTouchpadClickForceSensitivity.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x1400047BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplat.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RIM::SetFeatureClickForce(
        const struct RIMDEV *a1,
        const struct _HIDP_VALUE_CAPS *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // r10
  __int64 v8; // r11
  int v9; // [rsp+60h] [rbp+1Fh] BYREF
  int v10; // [rsp+64h] [rbp+23h] BYREF
  int v11; // [rsp+68h] [rbp+27h] BYREF
  int v12; // [rsp+6Ch] [rbp+2Bh] BYREF
  int v13; // [rsp+70h] [rbp+2Fh] BYREF
  int v14; // [rsp+74h] [rbp+33h] BYREF
  int v15; // [rsp+78h] [rbp+37h] BYREF
  __int64 v16; // [rsp+80h] [rbp+3Fh] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 256LL) )
  {
    v9 = a5;
    v10 = v7[13];
    v11 = v7[12];
    v12 = v7[11];
    v13 = v7[10];
    v14 = v6;
    v15 = v5;
    v16 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_14027AF23,
      v5,
      v6,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
