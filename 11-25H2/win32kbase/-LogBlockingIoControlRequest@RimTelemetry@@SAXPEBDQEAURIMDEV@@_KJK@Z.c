/*
 * XREFs of ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC
 * Callers:
 *     RIMSendLatencyMgtDeviceRequest @ 0x14007A488 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMDeliverConfigRequest @ 0x1400B3038 (RIMDeliverConfigRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x14012E2EC (RIMSetDeviceIdleTimeout.c)
 *     RIMGetProductString @ 0x14013FD8C (RIMGetProductString.c)
 *     ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x1401443AC (-SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     RIMDeviceIoControl @ 0x14017EA70 (RIMDeviceIoControl.c)
 *     RIMGetMaxCountFeatureDetails @ 0x14017FBE8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1401D54D4 (RIMLoadDeviceLegacyInfo.c)
 *     RIMConfigureDeviceFeedback @ 0x1401DEB80 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1401DEFE0 (RIMConfigureTouchpadClickForceSensitivity.c)
 *     RIMHidGetPreparsedData @ 0x1401E0E5C (RIMHidGetPreparsedData.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@55AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@77@Z @ 0x140003BE8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U3@U-$_tlgWrapperByRef@$0.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114428 (RimDeviceTypeToRimInputTypeString.c)
 *     ?LocationToString@RimTelemetry@@CAPEBGW4tagHPD_LOCATION@@@Z @ 0x1401D4948 (-LocationToString@RimTelemetry@@CAPEBGW4tagHPD_LOCATION@@@Z.c)
 */

void __fastcall RimTelemetry::LogBlockingIoControlRequest(
        const char *a1,
        struct RIMDEV *const a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  const WCHAR *v9; // r15
  const WCHAR *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // [rsp+78h] [rbp-1h] BYREF
  int v14; // [rsp+7Ch] [rbp+3h] BYREF
  __int64 v15; // [rsp+80h] [rbp+7h] BYREF
  const WCHAR *v16; // [rsp+88h] [rbp+Fh] BYREF
  const WCHAR *v17; // [rsp+90h] [rbp+17h] BYREF
  const WCHAR *v18; // [rsp+98h] [rbp+1Fh] BYREF
  void *v19; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+2Fh] BYREF
  int v21; // [rsp+E0h] [rbp+67h] BYREF

  v9 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, *((unsigned int *)a2 + 12));
  v10 = (const WCHAR *)RimTelemetry::LocationToString(*((unsigned int *)a2 + 534));
  if ( (unsigned int)dword_14029EE58 > 5 )
  {
    v16 = v10;
    v17 = (const WCHAR *)*((_QWORD *)a2 + 25);
    v13 = a5;
    v14 = *((_DWORD *)a2 + 34);
    v21 = a4;
    v15 = (__int64)a2 + 2120;
    v18 = v9;
    v19 = (void *)a1;
    v20 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)a2 + 2120,
      (__int64)&unk_140279B2E,
      v11,
      v12,
      (__int64)&v20,
      &v19,
      &v18,
      &v17,
      &v16,
      &v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v21);
  }
}
