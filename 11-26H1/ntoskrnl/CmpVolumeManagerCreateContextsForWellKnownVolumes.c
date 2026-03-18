/*
 * XREFs of CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x140774A94
 * Callers:
 *     CmInitSystem2 @ 0x140D0A83C (CmInitSystem2.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpVolumeContextLockExclusive @ 0x1408573DC (CmpVolumeContextLockExclusive.c)
 *     CmpVolumeContextUnlockExclusive @ 0x140857524 (CmpVolumeContextUnlockExclusive.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x14085755C (CmpVolumeManagerGetContextForFilePath.c)
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
