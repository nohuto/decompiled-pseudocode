/*
 * XREFs of PerfInfoLogSysCallExit @ 0x1404C3600
 * Callers:
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 *     KiTrackSystemCallExit @ 0x1407BEA50 (KiTrackSystemCallExit.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogSysCallExit(__int64 a1)
{
  unsigned __int64 CurrentServerSilo; // rax
  int v4; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[2]; // [rsp+38h] [rbp-20h] BYREF

  v5[1] = 4LL;
  v4 = a1;
  v5[0] = &v4;
  CurrentServerSilo = PsGetCurrentServerSilo();
  EtwTraceSiloKernelEvent(CurrentServerSilo, (int)v5, 1, 0x40000040u, 3892, 6297602);
  return a1;
}
