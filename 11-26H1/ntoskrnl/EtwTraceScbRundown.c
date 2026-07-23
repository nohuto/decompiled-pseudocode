/*
 * XREFs of EtwTraceScbRundown @ 0x1406C8A04
 * Callers:
 *     ?KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z @ 0x1405FBAC4 (-KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceScbRundown(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, char a6)
{
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 v10; // [rsp+40h] [rbp-28h]
  _QWORD v11[2]; // [rsp+48h] [rbp-20h] BYREF

  v7 = a3;
  v8 = a4;
  v9 = a5;
  v11[1] = 24LL;
  v10 = a6 & 1;
  v11[0] = &v7;
  return EtwpLogKernelEvent((__int64)v11, a1, a2, 1u, 0x566u, 0x600102u);
}
