/*
 * XREFs of NtThawRegistry @ 0x140856750
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmThawRegistry @ 0x14085D580 (CmThawRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

NTSTATUS NtThawRegistry(void)
{
  NTSTATUS v0; // ebx
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
