/*
 * XREFs of ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x18009C928
 * Callers:
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A5F04 (-_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCap.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A6490 (-_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCapture.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180002224 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 */

char __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerTransformFromDisplay<double,double>(
        __int64 *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rcx
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // xmm1_8
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<WindowFrameLogging>::get((__int64)a1, (__int64)a2);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      v9 = *a1;
      v11 = *a2;
      v12 = v9;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                     v6,
                     (int)&unk_1800FFB5F,
                     v7,
                     v8,
                     (__int64)&v12,
                     (__int64)&v11);
    }
  }
  return (char)v4;
}
