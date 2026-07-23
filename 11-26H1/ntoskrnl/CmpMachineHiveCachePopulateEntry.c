/*
 * XREFs of CmpMachineHiveCachePopulateEntry @ 0x14085DD0C
 * Callers:
 *     CmpBuildMachineHiveCache @ 0x14085D9F4 (CmpBuildMachineHiveCache.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmpHiveCacheEntryCleanup @ 0x14086815C (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1408684F8 (CmpHiveCachePopulateHiveEntry.c)
 */

__int64 __fastcall CmpMachineHiveCachePopulateEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  if ( a1 && a2 )
  {
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&v7);
    *(_BYTE *)(a1 + 824) = *(_BYTE *)(v3 + 59);
    v4 = CmpHiveCachePopulateHiveEntry(a1, (int)v3 + 168, *(_DWORD *)(v3 + 32), (int)a1 + 824, a1 + 824, a1 + 392);
    v5 = v4;
    if ( v4 < 0 )
    {
      SetFailureLocation(a1 + 392, 0, 51, v4, 16);
      CmpHiveCacheEntryCleanup(a1, 1LL);
    }
  }
  else
  {
    v5 = -1073741811;
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v7);
  return v5;
}
