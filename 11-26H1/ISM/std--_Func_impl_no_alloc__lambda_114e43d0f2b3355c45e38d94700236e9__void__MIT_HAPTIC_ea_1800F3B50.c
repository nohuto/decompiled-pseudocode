/*
 * XREFs of std::_Func_impl_no_alloc__lambda_114e43d0f2b3355c45e38d94700236e9__void__MIT_HAPTIC_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x1800F3B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180016490 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180016500 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?ProcessHapticNotificationMessage@HapticProcessor@@SAJPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z @ 0x1800CA110 (-ProcessHapticNotificationMessage@HapticProcessor@@SAJPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_114e43d0f2b3355c45e38d94700236e9__void__MIT_HAPTIC_NOTIFICATION_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_HAPTIC_NOTIFICATION_MESSAGE **a2)
{
  const struct _MIT_HAPTIC_NOTIFICATION_MESSAGE *v2; // rbx
  _BYTE v3[56]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v3, "MITEP_HAPTIC_NOTIFICATION", 0LL);
  HapticProcessor::ProcessHapticNotificationMessage(v2);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v3);
}
