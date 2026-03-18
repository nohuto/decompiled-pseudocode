/*
 * XREFs of NtInitializeRegistry @ 0x14084EE60
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     ZwInitializeRegistry @ 0x140725510 (ZwInitializeRegistry.c)
 *     CmCompleteRegistryInitialization @ 0x14084E49C (CmCompleteRegistryInitialization.c)
 *     CmpAcceptBoot @ 0x14084E81C (CmpAcceptBoot.c)
 *     CmpSyncNextBackupHive @ 0x14085A968 (CmpSyncNextBackupHive.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     CmpHandlePageFileOpenNotification @ 0x140B57D54 (CmpHandlePageFileOpenNotification.c)
 */

__int64 NtInitializeRegistry()
{
  unsigned __int16 v0; // r10
  __int64 v1; // rdx
  unsigned int v2; // r8d
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)v1 )
  {
    if ( v0 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, v1) )
        CmpSyncNextBackupHive();
    }
    else
    {
      ZwInitializeRegistry(v0, v1);
    }
  }
  else if ( (unsigned __int16)(v0 - 4096) > 0x3E7u )
  {
    if ( v0 == 2 )
    {
      CmpHandlePageFileOpenNotification();
    }
    else if ( v0 < 2u )
    {
      CmCompleteRegistryInitialization(v0);
    }
  }
  else
  {
    CmpAcceptBoot(v0);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v4);
  return v2;
}
