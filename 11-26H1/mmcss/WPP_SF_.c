/*
 * XREFs of WPP_SF_ @ 0x1400043B0
 * Callers:
 *     CiSchedulerThreadFunction @ 0x140001520 (CiSchedulerThreadFunction.c)
 *     CiSchedulerWait @ 0x140001990 (CiSchedulerWait.c)
 *     CiSchedulerDeepSleep @ 0x1400021C0 (CiSchedulerDeepSleep.c)
 *     CiDriverUnload @ 0x14000D390 (CiDriverUnload.c)
 *     CiDispatchCreateTaskIndexClient @ 0x14000E0B0 (CiDispatchCreateTaskIndexClient.c)
 *     CiTaskIndexCreate @ 0x14000E260 (CiTaskIndexCreate.c)
 *     CiDispatchCreateMmThreadClient @ 0x14000E4A0 (CiDispatchCreateMmThreadClient.c)
 *     CiThreadCreate @ 0x14000E900 (CiThreadCreate.c)
 *     CiConfigInitialize @ 0x140010010 (CiConfigInitialize.c)
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400058C0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
