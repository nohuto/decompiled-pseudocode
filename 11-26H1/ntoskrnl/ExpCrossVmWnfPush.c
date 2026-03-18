/*
 * XREFs of ExpCrossVmWnfPush @ 0x140AD42A4
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x14083F2A8 (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
