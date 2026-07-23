/*
 * XREFs of NtUnloadKeyEx @ 0x140A3E7F0
 * Callers:
 *     DifNtUnloadKeyExWrapper @ 0x140693CC0 (DifNtUnloadKeyExWrapper.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  void *v2; // r10
  NTSTATUS v3; // r8d
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  CmUnloadKey(v2);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
