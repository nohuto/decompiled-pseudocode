/*
 * XREFs of ?zInternalRelatedId@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180085218
 * Callers:
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x180094D50 (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800C088C (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800C097C (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800C0A6C (-StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800C0B38 (-StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 * Callees:
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180099A50 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 272);
  if ( !*(_BYTE *)(v1 + 4) || _tlgGuidIsZero((const struct _GUID *)(v1 + 24)) )
    return 0LL;
  return v2;
}
