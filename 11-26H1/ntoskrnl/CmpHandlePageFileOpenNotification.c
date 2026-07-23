/*
 * XREFs of CmpHandlePageFileOpenNotification @ 0x140B5F650
 * Callers:
 *     NtInitializeRegistry @ 0x140855170 (NtInitializeRegistry.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x140468310 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x14085D7D0 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
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
  struct _EX_RUNDOWN_REF *i; // rcx
  unsigned __int8 *NextActiveHive; // rax
  unsigned __int8 *v11; // rdi
  __int64 v12; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = 0;
  if ( _InterlockedExchange((volatile __int32 *)&CmpContextListLock.ApcStateFill[32], 1) )
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
    for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v11 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v11 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpRecheckHiveVolumePolicy((__int64)NextActiveHive);
    }
    CmpDetachFromRegistryProcess(&ApcState);
    CmpReleaseShutdownRundown(v12);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v2;
}
