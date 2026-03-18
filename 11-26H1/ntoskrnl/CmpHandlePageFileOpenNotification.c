/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x140B57D54
 * Callers:
 *     NtInitializeRegistry @ 0x14084EE60 (NtInitializeRegistry.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14046EB90 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x140857440 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpHandlePageFileOpenNotification(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  int v6; // edi
  __int64 v7; // rax
  __int64 *v8; // rcx
  struct _KTHREAD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  unsigned __int8 *PriorityFloorCounts; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = 0;
  if ( _InterlockedExchange((volatile __int32 *)&CmpCallbackListLock.ApcStateFill[32], 1) )
  {
    return (unsigned int)-1073741790;
  }
  else if ( (unsigned __int8)CmpAcquireShutdownRundown(a1, a2) )
  {
    v6 = 0;
    if ( CmpWellKnownVolumeList )
    {
      v7 = 0LL;
      do
      {
        v8 = (&CmpWellKnownVolumeList)[v7 + 1];
        if ( v8 )
          CmpVolumeContextSendDeviceUsageNotification((__int64)v8, v3, v4, v5);
        v7 = 2LL * (unsigned int)++v6;
      }
      while ( (&CmpWellKnownVolumeList)[v7] );
    }
    CmpAttachToRegistryProcess(&ApcState);
    v9 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
    CmpLockHiveListShared(v11, v10, v12, v13);
    do
    {
      v9 = *(struct _KTHREAD **)&v9->Header.Lock;
      PriorityFloorCounts = 0LL;
      if ( v9 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
        break;
      PriorityFloorCounts = v9[-2].PriorityFloorCounts;
    }
    while ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v9->QuantumTarget) );
    CmpUnlockHiveList();
    for ( ;
          PriorityFloorCounts;
          PriorityFloorCounts = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)PriorityFloorCounts, v15, v16, v17) )
    {
      CmpRecheckHiveVolumePolicy((__int64)PriorityFloorCounts);
    }
    CmpDetachFromRegistryProcess(&ApcState);
    CmpReleaseShutdownRundown(v18);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v2;
}
