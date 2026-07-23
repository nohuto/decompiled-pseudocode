/*
 * XREFs of NtInitializeRegistry @ 0x140855170
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     ZwInitializeRegistry @ 0x14072A0E0 (ZwInitializeRegistry.c)
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 *     CmpAcceptBoot @ 0x140854B2C (CmpAcceptBoot.c)
 *     CmpSyncNextBackupHive @ 0x140860C5C (CmpSyncNextBackupHive.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     CmpHandlePageFileOpenNotification @ 0x140B5F650 (CmpHandlePageFileOpenNotification.c)
 */

NTSTATUS __cdecl NtInitializeRegistry(USHORT BootCondition)
{
  unsigned __int16 v1; // r10
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS v3; // r8d
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( v1 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
        CmpSyncNextBackupHive();
    }
    else
    {
      ZwInitializeRegistry(v1);
    }
  }
  else if ( (unsigned __int16)(v1 - 4096) > 0x3E7u )
  {
    if ( v1 == 2 )
    {
      CmpHandlePageFileOpenNotification();
    }
    else if ( v1 < 2u )
    {
      CmCompleteRegistryInitialization(v1);
    }
  }
  else
  {
    CmpAcceptBoot(v1);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
