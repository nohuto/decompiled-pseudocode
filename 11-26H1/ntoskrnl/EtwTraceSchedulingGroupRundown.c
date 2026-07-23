/*
 * XREFs of EtwTraceSchedulingGroupRundown @ 0x1406C8B1C
 * Callers:
 *     ?KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z @ 0x1405FBAC4 (-KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpConstructSchedulingGroupEvent @ 0x1406C912C (EtwpConstructSchedulingGroupEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceSchedulingGroupRundown(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v4; // r11d
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  _QWORD v8[2]; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  EtwpConstructSchedulingGroupEvent(&v6, a3);
  v8[0] = &v6;
  v8[1] = 24LL;
  return EtwpLogKernelEvent((__int64)v8, v3, v4, 1u, 0x565u, 0x600102u);
}
