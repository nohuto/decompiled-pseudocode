/*
 * XREFs of ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x1800D83D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x1800D4B04 (--1TraceSessionConfig@@QEAA@XZ.c)
 *     GetHolographicInputSession @ 0x1800D597C (GetHolographicInputSession.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D80BC (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 */

void __fastcall SpatialRimDeviceCollection::StartTracingSession(SpatialRimDeviceCollection *this)
{
  const struct TraceSessionConfig *HolographicInputSession; // rax
  _BYTE v2[128]; // [rsp+20h] [rbp-98h] BYREF

  HolographicInputSession = (const struct TraceSessionConfig *)GetHolographicInputSession((__int64)v2);
  TracingSessionHelper::StartOrStop(HolographicInputSession, 1);
  TraceSessionConfig::~TraceSessionConfig((TraceSessionConfig *)v2);
}
