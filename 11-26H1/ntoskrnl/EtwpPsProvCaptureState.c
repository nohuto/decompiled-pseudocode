/*
 * XREFs of EtwpPsProvCaptureState @ 0x14083608C
 * Callers:
 *     EtwpCrimsonProvEnableCallback @ 0x140B04420 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpTraceLoggingProvEnableCallback @ 0x140B387F0 (EtwpTraceLoggingProvEnableCallback.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14048B160 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409BA820 (EtwpPsProvProcessEnumCallback.c)
 *     PsEnumProcesses @ 0x1409BBF0C (PsEnumProcesses.c)
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
