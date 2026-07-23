/*
 * XREFs of ExpCrossVmWnfPull @ 0x140B699B8
 * Callers:
 *     ExpWnfPopulateStateData @ 0x1409CB9C8 (ExpWnfPopulateStateData.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
