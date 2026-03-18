/*
 * XREFs of EtwpPsProvCaptureState @ 0x14082FE4C
 * Callers:
 *     EtwpCrimsonProvEnableCallback @ 0x140B026F0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpTraceLoggingProvEnableCallback @ 0x140B365E0 (EtwpTraceLoggingProvEnableCallback.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140491610 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140954D20 (EtwpPsProvProcessEnumCallback.c)
 *     PsEnumProcesses @ 0x14096E8BC (PsEnumProcesses.c)
 */

BOOLEAN __fastcall EtwpPsProvCaptureState(__int64 *a1, unsigned __int64 a2)
{
  BOOLEAN v2; // bl
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  *(_DWORD *)((char *)&v4 + 9) = a1 == PsProvTraceLoggingGuid;
  v2 = IoSetThreadHardErrorMode(0);
  EtwpPsProvProcessEnumCallback((ULONG_PTR)PsIdleProcess);
  PsEnumProcesses(EtwpPsProvProcessEnumCallback, &v4);
  return IoSetThreadHardErrorMode(v2);
}
