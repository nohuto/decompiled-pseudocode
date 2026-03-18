/*
 * XREFs of NtFreezeRegistry @ 0x14084EDA0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall NtFreezeRegistry(unsigned int a1)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-58h] BYREF
  __int64 v5; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  if ( a1 <= 0x384 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      CmpAttachToRegistryProcess(&ApcState);
      v2 = CmFreezeRegistry(a1);
      CmpDetachFromRegistryProcess(&ApcState);
    }
    else
    {
      v2 = -1073741727;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v4);
  return v2;
}
