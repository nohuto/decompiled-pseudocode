/*
 * XREFs of DrvDxgkWriteDiagEntry @ 0x14014FFD0
 * Callers:
 *     PowerDimUndimResend @ 0x14000AD94 (PowerDimUndimResend.c)
 *     xxxUserChangeDisplaySettings @ 0x140138F20 (xxxUserChangeDisplaySettings.c)
 *     LogDiagCDS @ 0x14014FA84 (LogDiagCDS.c)
 *     LogDiagSDC @ 0x14014FCB0 (LogDiagSDC.c)
 *     PowerDimMonitor @ 0x1401D6144 (PowerDimMonitor.c)
 *     PowerUnDimMonitor @ 0x1401D6960 (PowerUnDimMonitor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkWriteDiagEntry(__int64 a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (__fastcall **)(__int64))(DxgkWin32kInterface + 304))(a1);
}
