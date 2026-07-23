/*
 * XREFs of PerfInfoLogVirtualFree @ 0x140A06DC0
 * Callers:
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 *     MiFreeVirtualMemory @ 0x140A05050 (MiFreeVirtualMemory.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140AED468 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PerfInfoLogVirtualFree(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 ProcessServerSilo; // rax
  _QWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+44h] [rbp-24h]
  _QWORD v9[2]; // [rsp+48h] [rbp-20h] BYREF

  v4 = *(_DWORD *)(a3 + 464);
  v6[0] = a1;
  v6[1] = a2;
  v7 = v4;
  v9[0] = v6;
  v8 = a4;
  v9[1] = 24LL;
  ProcessServerSilo = PsGetProcessServerSilo(a3);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v9, 1, 0x20008000u, 611, 6297858);
}
