/*
 * XREFs of ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18008D328
 * Callers:
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180024260 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x180024ED0 (-StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z.c)
 *     ?StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x18003EEC0 (-StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x18003FB2C (-StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800410B4 (-StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x180041208 (-StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800864F8 (-StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800865DC (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800985E0 (-StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800A1BC8 (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800A1CCC (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall _tlgGuidIsZero(const struct _GUID *a1)
{
  bool result; // al

  result = 0;
  if ( !a1->Data1 && !*(_DWORD *)&a1->Data2 && !*(_DWORD *)a1->Data4 )
    return *(_DWORD *)&a1->Data4[4] == 0;
  return result;
}
