/*
 * XREFs of CrmpDxUtilsFreeContext @ 0x18006A0C8
 * Callers:
 *     CrmStateMonitorAttemptNpuContextRefresh @ 0x18006C9A4 (CrmStateMonitorAttemptNpuContextRefresh.c)
 *     CrmStateMonitorNpuUsageContextCleanup @ 0x18006CA40 (CrmStateMonitorNpuUsageContextCleanup.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CrmpDxUtilsFreeContext(_QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  HampFreeHeap(a1);
}
