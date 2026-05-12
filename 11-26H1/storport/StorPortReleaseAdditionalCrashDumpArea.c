/*
 * XREFs of StorPortReleaseAdditionalCrashDumpArea @ 0x1400AAD70
 * Callers:
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x140056C08 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1400A3064 (RaUnitStorageFreeDumpInfo.c)
 * Callees:
 *     StorFreeContiguousMemory @ 0x140188BF4 (StorFreeContiguousMemory.c)
 */

__int64 __fastcall StorPortReleaseAdditionalCrashDumpArea(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 184) )
      return StorFreeContiguousMemory(a1);
  }
  return result;
}
