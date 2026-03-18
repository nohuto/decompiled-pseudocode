/*
 * XREFs of MmReserveViewInSystemCache @ 0x14086AB08
 * Callers:
 *     CcBuildUpHighPriorityMappings @ 0x140515228 (CcBuildUpHighPriorityMappings.c)
 *     CcInitializePartitionVacbs @ 0x1405B2EE8 (CcInitializePartitionVacbs.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x1402E4B60 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax

  result = MiObtainSystemCacheView(*a1, a2, a3, a4);
  if ( !result )
    ++dword_140E378A0;
  return result;
}
