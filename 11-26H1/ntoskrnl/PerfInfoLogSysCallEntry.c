/*
 * XREFs of PerfInfoLogSysCallEntry @ 0x1404C5650
 * Callers:
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 *     KiTrackSystemCallEntry @ 0x1407BE930 (KiTrackSystemCallEntry.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogSysCallEntry(__int64 a1)
{
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[2]; // [rsp+38h] [rbp-20h] BYREF

  v4 = a1;
  v5[0] = &v4;
  v5[1] = 8LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  EtwTraceSiloKernelEvent(CurrentServerSilo, (int)v5, 1, 0x40000040u, 3891, 6297602);
  return a1;
}
