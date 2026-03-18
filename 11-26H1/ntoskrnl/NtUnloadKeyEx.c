/*
 * XREFs of NtUnloadKeyEx @ 0x140B0A5A0
 * Callers:
 *     DifNtUnloadKeyExWrapper @ 0x1406900E0 (DifNtUnloadKeyExWrapper.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 */

__int64 NtUnloadKeyEx()
{
  void *v0; // r10
  unsigned int v1; // r8d
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v3 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v3);
  CmUnloadKey(v0);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v3);
  return v1;
}
