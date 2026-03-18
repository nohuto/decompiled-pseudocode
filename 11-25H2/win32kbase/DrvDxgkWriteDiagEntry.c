/*
 * XREFs of DrvDxgkWriteDiagEntry @ 0x1400E2600
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1400E1A50 (xxxUserChangeDisplaySettings.c)
 *     LogDiagSDC @ 0x1400E2360 (LogDiagSDC.c)
 *     PowerDimUndimResend @ 0x140142374 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x140146808 (PowerDimMonitor.c)
 *     LogDiagCDS @ 0x14019C390 (LogDiagCDS.c)
 *     LogDiagSDCAccessDenied @ 0x1401D00F0 (LogDiagSDCAccessDenied.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkWriteDiagEntry(__int64 a1)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (__fastcall **)(__int64))(DxgkWin32kInterface + 304))(a1);
}
