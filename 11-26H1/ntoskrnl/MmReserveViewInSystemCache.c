/*
 * XREFs of MmReserveViewInSystemCache @ 0x140870EE8
 * Callers:
 *     CcBuildUpHighPriorityMappings @ 0x14050EC98 (CcBuildUpHighPriorityMappings.c)
 *     CcInitializePartitionVacbs @ 0x1405B56F8 (CcInitializePartitionVacbs.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x1402C6BA0 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax

  result = MiObtainSystemCacheView(*a1, a2, a3, a4);
  if ( !result )
    ++dword_140E37A20;
  return result;
}
