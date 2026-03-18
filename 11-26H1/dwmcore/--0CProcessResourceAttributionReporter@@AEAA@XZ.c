/*
 * XREFs of ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180231778
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18022C4D4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1801C8484 (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??0atomic_flag@std@@QEAA@XZ @ 0x180231810 (--0atomic_flag@std@@QEAA@XZ.c)
 */

ULONGLONG *__fastcall CProcessResourceAttributionReporter::CProcessResourceAttributionReporter(ULONGLONG *pv)
{
  ULONGLONG TickCount64; // rax
  CProcessAttributionManager *v3; // rcx
  PTP_WORK ThreadpoolWork; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  TickCount64 = GetTickCount64();
  v3 = qword_1803DEAE0;
  *pv = TickCount64;
  pv[1] = 0LL;
  pv[4] = 0LL;
  pv[5] = 0LL;
  pv[6] = 0LL;
  pv[7] = (ULONGLONG)CProcessAttributionManager::CreateObserver(v3);
  *((_DWORD *)pv + 16) = 0;
  std::atomic_flag::atomic_flag((std::atomic_flag *)(pv + 8));
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)CProcessResourceAttributionReporter::ReportHighResourceUsageWorker,
                     pv,
                     0LL);
  pv[1] = (ULONGLONG)ThreadpoolWork;
  if ( !ThreadpoolWork )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return pv;
}
