/*
 * XREFs of ?SendHapticFeedbackForDuration@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMI@Z @ 0x18018A848
 * Callers:
 *     ?SendHapticFeedbackForDuration@TouchpadHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z @ 0x18018A900 (-SendHapticFeedbackForDuration@TouchpadHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@G.c)
 *     ?SendHapticFeedbackForDurationImpl@PenHapticDevice@@QEAAJGMI@Z @ 0x18018C358 (-SendHapticFeedbackForDurationImpl@PenHapticDevice@@QEAAJGMI@Z.c)
 *     ?SendHapticFeedbackForDuration@MouseHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z @ 0x18018CCD0 (-SendHapticFeedbackForDuration@MouseHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x180008790 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800C99F0 (-InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 */

void __fastcall InputTraceLogging::Haptics::SendHapticFeedbackForDuration(
        enum tagINPUT_MESSAGE_DEVICE_TYPE a1,
        __int16 a2,
        float a3,
        int a4)
{
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _WORD v10[2]; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+44h] [rbp-24h] BYREF
  float v12; // [rsp+48h] [rbp-20h] BYREF
  const char *v13; // [rsp+50h] [rbp-18h] BYREF

  v7 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v7 > 4u && tlgKeywordOn((__int64)v7, 512LL) )
  {
    v12 = a3;
    v11 = a4;
    v10[0] = a2;
    v13 = InputTraceLogging::InputMessageDeviceTypeToString(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (__int64)&unk_1802278DC,
      v8,
      v9,
      (const unsigned __int16 **)&v13,
      (__int64)v10,
      (__int64)&v12,
      (__int64)&v11);
  }
}
