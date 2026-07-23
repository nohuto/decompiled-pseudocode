/*
 * XREFs of ExpResetCrossVmEvent @ 0x14077AED8
 * Callers:
 *     NtClearEvent @ 0x140928E70 (NtClearEvent.c)
 *     NtResetEvent @ 0x140989AA0 (NtResetEvent.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpResetCrossVmEvent(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *SparePtr; // rdi
  unsigned int v5; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[0].SparePtr) )
  {
    SparePtr = (struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[0].SparePtr;
  }
  else
  {
    if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink) )
      return (unsigned int)-1073741822;
    SparePtr = (struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink;
  }
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  ExReleaseExtensionTable(SparePtr);
  return v5;
}
