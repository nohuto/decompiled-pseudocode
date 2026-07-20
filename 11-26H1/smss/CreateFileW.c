/*
 * XREFs of CreateFileW @ 0x14001C57C
 * Callers:
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001ACB8 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     BasepGetVolumeGUIDFromNTName @ 0x14001B074 (BasepGetVolumeGUIDFromNTName.c)
 * Callees:
 *     CreateFileInternal @ 0x14001BD6C (CreateFileInternal.c)
 */

__int64 CreateFileW()
{
  int v1; // [rsp+30h] [rbp-28h] BYREF
  __int64 v2; // [rsp+34h] [rbp-24h]
  int v3; // [rsp+3Ch] [rbp-1Ch]
  __int128 v4; // [rsp+40h] [rbp-18h]

  v1 = 32;
  v2 = 128LL;
  v3 = 0;
  v4 = 0LL;
  return CreateFileInternal(L"\\\\.\\MountPointManager", 0, 3u, 3, (__int64)&v1, 1);
}
