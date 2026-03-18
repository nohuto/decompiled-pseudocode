/*
 * XREFs of ExpCrossVmWnfPull @ 0x140B66A2C
 * Callers:
 *     ExpWnfPopulateStateData @ 0x140950088 (ExpWnfPopulateStateData.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmWnfPull(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  unsigned int v3; // ebx

  Flink = WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink) )
  {
    v3 = guard_dispatch_icall_no_overrides(a1, (__int64)ExpWnfPopulateStateDataRemoteCallback);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)Flink);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
