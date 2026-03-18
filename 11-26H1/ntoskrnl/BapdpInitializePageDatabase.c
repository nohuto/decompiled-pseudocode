/*
 * XREFs of BapdpInitializePageDatabase @ 0x1406CA49C
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C7FBB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void BapdpInitializePageDatabase()
{
  if ( ExpSysDbgLock.SavedApcState.ApcListHead[1].Blink && *(_DWORD *)&ExpSysDbgLock.SavedApcStateFill[32] > 4u )
  {
    if ( (int)KsrInitPageDatabase((char *)&ExpSysDbgLock.SavedApcState.ApcListHead[1].Blink->Flink + 4) >= 0 )
      ExSoftRebootFlags |= 4u;
    ExFreePoolWithTag(ExpSysDbgLock.SavedApcState.ApcListHead[1].Blink, 0);
    ExpSysDbgLock.SavedApcState.ApcListHead[1].Blink = 0LL;
    *(_DWORD *)&ExpSysDbgLock.SavedApcStateFill[32] = 0;
  }
}
