/*
 * XREFs of PerfInfoLogSysCallEntry @ 0x1404CBC20
 * Callers:
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     KiTrackSystemCallEntry @ 0x1407BB8D0 (KiTrackSystemCallEntry.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x140216A20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
