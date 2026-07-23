/*
 * XREFs of NtUnloadKey2 @ 0x140A3FE10
 * Callers:
 *     DifNtUnloadKey2Wrapper @ 0x140693B50 (DifNtUnloadKey2Wrapper.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  int v2; // r10d
  void *v3; // r11
  NTSTATUS v4; // r8d
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  CmUnloadKey(v3, v2, 0, 0LL);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v4;
}
