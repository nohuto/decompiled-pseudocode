/*
 * XREFs of EtwpDestructIptData @ 0x140830344
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpSysDbgLock.SchedulerAssist);
    }
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 1080) = 0LL;
  }
}
