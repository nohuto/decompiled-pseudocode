/*
 * XREFs of EtwpDestructIptData @ 0x140836584
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDestructIptData(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx

  v2 = *(__int64 **)(a1 + 1080);
  if ( v2 )
  {
    if ( v2[2] )
    {
      if ( *v2 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        guard_dispatch_icall_no_overrides(*v2, a2);
      }
      ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&ExpSysDbgLock.SchedulerAssistPriorityFloor);
    }
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 1080) = 0LL;
  }
}
