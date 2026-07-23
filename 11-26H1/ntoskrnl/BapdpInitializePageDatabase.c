/*
 * XREFs of BapdpInitializePageDatabase @ 0x1406CE4D8
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void BapdpInitializePageDatabase()
{
  if ( ExpSysDbgLock.SchedulerApc.SystemArgument1 && *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[72] > 4u )
  {
    if ( (int)KsrInitPageDatabase((char *)ExpSysDbgLock.SchedulerApc.SystemArgument1 + 4) >= 0 )
      ExSoftRebootFlags |= 4u;
    ExFreePoolWithTag(ExpSysDbgLock.SchedulerApc.SystemArgument1, 0);
    ExpSysDbgLock.SchedulerApc.SystemArgument1 = 0LL;
    *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[72] = 0;
  }
}
