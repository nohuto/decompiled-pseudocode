/*
 * XREFs of NtUnloadKey @ 0x140A3E840
 * Callers:
 *     DifNtUnloadKeyWrapper @ 0x140693E30 (DifNtUnloadKeyWrapper.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  void *v1; // r10
  NTSTATUS v2; // r8d
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  CmUnloadKey(v1);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v4);
  return v2;
}
