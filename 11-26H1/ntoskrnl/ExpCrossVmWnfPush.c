/*
 * XREFs of ExpCrossVmWnfPush @ 0x140AD1704
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1408454E8 (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmWnfPush(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF *SparePtr; // rdi
  unsigned int v4; // ebx

  SparePtr = (struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[0].SparePtr;
  if ( a2 )
    SparePtr = (struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink;
  if ( ExGetExtensionTable(SparePtr) )
  {
    v4 = guard_dispatch_icall_no_overrides(0LL, a2);
    ExReleaseExtensionTable(SparePtr);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
