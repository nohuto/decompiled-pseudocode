/*
 * XREFs of ExpCreateCrossVmMutant @ 0x14084C3E0
 * Callers:
 *     NtCreateCrossVmMutant @ 0x140847FC0 (NtCreateCrossVmMutant.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCreateCrossVmMutant(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _EX_RUNDOWN_REF *SparePtr; // rdi
  int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF

  SparePtr = (struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[0].SparePtr;
  v11 = 0LL;
  if ( !a6 )
    SparePtr = (struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink;
  if ( ExGetExtensionTable(SparePtr) )
  {
    v9 = guard_dispatch_icall_no_overrides((__int64)&v11, a2);
    if ( v9 >= 0 )
      *a1 = v11;
    ExReleaseExtensionTable(SparePtr);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v9;
}
