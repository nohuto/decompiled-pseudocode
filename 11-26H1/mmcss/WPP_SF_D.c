/*
 * XREFs of WPP_SF_d @ 0x140004844
 * Callers:
 *     CiSchedulerWait @ 0x140001990 (CiSchedulerWait.c)
 *     CiNdisOpenDevice @ 0x14000DC9C (CiNdisOpenDevice.c)
 *     CiNdisThrottle @ 0x14000DD50 (CiNdisThrottle.c)
 *     CiTaskIndexCreate @ 0x14000E260 (CiTaskIndexCreate.c)
 *     CiCreateTaskIndexClientFromThread @ 0x14000F850 (CiCreateTaskIndexClientFromThread.c)
 *     CiConfigInitialize @ 0x140010010 (CiConfigInitialize.c)
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 *     CiTaskAllocate @ 0x140010BE8 (CiTaskAllocate.c)
 *     CiTaskDump @ 0x1400110B0 (CiTaskDump.c)
 *     CiConfigInitializeFromRegistry @ 0x1400112E0 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400058C0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_d(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
