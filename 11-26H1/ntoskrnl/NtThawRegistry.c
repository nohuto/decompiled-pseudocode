/*
 * XREFs of NtThawRegistry @ 0x140850440
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 NtThawRegistry()
{
  unsigned int v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-58h] BYREF
  __int64 v3; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v2);
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v0 = CmThawRegistry();
    CmpDetachFromRegistryProcess(&ApcState);
  }
  else
  {
    v0 = -1073741727;
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v2);
  return v0;
}
