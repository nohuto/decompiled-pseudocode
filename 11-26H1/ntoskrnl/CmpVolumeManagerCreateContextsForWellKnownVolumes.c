/*
 * XREFs of CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x140777A94
 * Callers:
 *     CmInitSystem2 @ 0x140D10B0C (CmInitSystem2.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpVolumeContextLockExclusive @ 0x14085D76C (CmpVolumeContextLockExclusive.c)
 *     CmpVolumeContextUnlockExclusive @ 0x14085D8B4 (CmpVolumeContextUnlockExclusive.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x14085D8EC (CmpVolumeManagerGetContextForFilePath.c)
 */

_KAFFINITY_EX *CmpVolumeManagerCreateContextsForWellKnownVolumes()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 *v2; // rax
  int v3; // edi
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  v2 = CmpWellKnownVolumeList;
  v3 = 0;
  if ( CmpWellKnownVolumeList )
  {
    v4 = 0LL;
    do
    {
      if ( (int)CmpVolumeManagerGetContextForFilePath(v0, v2, v1, &(&CmpWellKnownVolumeList)[v4 + 1]) >= 0 )
      {
        CmpVolumeContextLockExclusive((&CmpWellKnownVolumeList)[v4 + 1]);
        *((_DWORD *)(&CmpWellKnownVolumeList)[v4 + 1] + 16) = 2;
        CmpVolumeContextUnlockExclusive((&CmpWellKnownVolumeList)[v4 + 1]);
      }
      v4 = 2LL * (unsigned int)++v3;
      v2 = (&CmpWellKnownVolumeList)[v4];
    }
    while ( v2 );
  }
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
}
