/*
 * XREFs of ?RmpSystemGetHighCommitEvent@@YAJPEAPEAX@Z @ 0x18006CDFC
 * Callers:
 *     ?RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18006CD34 (-RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemGetHighCommitEvent(void **a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h]
  HANDLE v5; // [rsp+50h] [rbp-18h]

  v5 = 0LL;
  v3 = 0LL;
  LODWORD(v3) = 1;
  DWORD2(v3) = 1048577;
  *(_OWORD *)Handle = 0LL;
  result = NtManagePartition(-2LL, 0LL, 5LL, &v3, 40);
  if ( (int)result >= 0 )
  {
    NtClose(Handle[0]);
    NtClose(v5);
    *a1 = Handle[1];
    return 0LL;
  }
  return result;
}
