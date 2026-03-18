/*
 * XREFs of ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC
 * Callers:
 *     RIMDeviceIoControl @ 0x14005E7A0 (RIMDeviceIoControl.c)
 *     RIMHidGetPreparsedData @ 0x140079FB0 (RIMHidGetPreparsedData.c)
 *     RIMSetDeviceIdleTimeout @ 0x1400EB4DC (RIMSetDeviceIdleTimeout.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1400EDEFC (RIMLoadDeviceLegacyInfo.c)
 *     RIMDeliverConfigRequest @ 0x1400F1398 (RIMDeliverConfigRequest.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1400F2658 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMGetProductString @ 0x14012FEDC (RIMGetProductString.c)
 *     ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14017A688 (-SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     RIMConfigureDeviceFeedback @ 0x140203F80 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1402043F0 (RIMConfigureTouchpadClickForceSensitivity.c)
 *     RIMGetMaxCountFeatureDetails @ 0x140205008 (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@55AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@77@Z @ 0x140004F9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U3@U-$_tlgWrapperByRef@$0.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x14015EB68 (RimDeviceTypeToRimInputTypeString.c)
 *     ?LocationToString@RimTelemetry@@CAPEBGW4tagHPD_LOCATION@@@Z @ 0x140172D54 (-LocationToString@RimTelemetry@@CAPEBGW4tagHPD_LOCATION@@@Z.c)
 */

void __fastcall RimTelemetry::LogBlockingIoControlRequest(
        const char *a1,
        struct RIMDEV *const a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  const wchar_t *v9; // r12
  const wchar_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // [rsp+70h] [rbp-11h] BYREF
  int v15; // [rsp+74h] [rbp-Dh] BYREF
  __int64 v16; // [rsp+78h] [rbp-9h] BYREF
  const WCHAR *v17; // [rsp+80h] [rbp-1h] BYREF
  const WCHAR *v18; // [rsp+88h] [rbp+7h] BYREF
  const WCHAR *v19; // [rsp+90h] [rbp+Fh] BYREF
  void *v20; // [rsp+98h] [rbp+17h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+1Fh] BYREF
  int v22; // [rsp+E8h] [rbp+67h] BYREF

  v9 = RimDeviceTypeToRimInputTypeString((__int64)a2, *((_DWORD *)a2 + 12));
  v10 = RimTelemetry::LocationToString(*((_DWORD *)a2 + 532));
  if ( (unsigned int)dword_1402A9E78 > 5 )
  {
    v17 = v10;
    v18 = (const WCHAR *)*((_QWORD *)a2 + 25);
    v14 = a5;
    v13 = *((unsigned int *)a2 + 34);
    v22 = a4;
    v15 = v13;
    v16 = (__int64)a2 + 2112;
    v19 = v9;
    v20 = (void *)a1;
    v21 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (__int64)&unk_140284125,
      v11,
      v12,
      (__int64)&v21,
      &v20,
      &v19,
      &v18,
      &v17,
      &v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v22);
  }
}
