/*
 * XREFs of PfSnAsyncContextInitialize @ 0x1409CFE74
 * Callers:
 *     PfSnPrefetchScenario @ 0x1409CFF44 (PfSnPrefetchScenario.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     PfSnReferenceProcessTrace @ 0x1403769CC (PfSnReferenceProcessTrace.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfSnPowerBoostInitialize @ 0x1409CFE18 (PfSnPowerBoostInitialize.c)
 */

void __fastcall PfSnAsyncContextInitialize(char *a1, __int64 a2, __int64 a3, int a4)
{
  _KPROCESS *Process; // rcx

  memset_0(a1, 0, 0xF8uLL);
  *((_QWORD *)a1 + 26) = a2;
  *((_QWORD *)a1 + 4) = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  *((_QWORD *)a1 + 27) = Process;
  PsReferenceSiloContext(Process);
  *((_QWORD *)a1 + 28) = PfSnReferenceProcessTrace(*((_QWORD *)a1 + 27));
  **((_QWORD **)a1 + 4) = 0LL;
  *((_DWORD *)a1 + 59) = PsGetPagePriorityThread((__int64)KeGetCurrentThread());
  *((_QWORD *)a1 + 2) = PfSnAsyncPrefetchWorker;
  *((_QWORD *)a1 + 3) = a1;
  *(_QWORD *)a1 = 0LL;
  if ( a4 )
    *((_DWORD *)a1 + 60) |= 1u;
  PfSnPowerBoostInitialize(a1 + 40);
}
