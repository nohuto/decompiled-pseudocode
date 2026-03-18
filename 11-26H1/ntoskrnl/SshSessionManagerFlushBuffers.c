/*
 * XREFs of SshSessionManagerFlushBuffers @ 0x1407E3BB0
 * Callers:
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404B32FC (SSHSupportReleasePushLockExclusive.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 */

void __fastcall SshSessionManagerFlushBuffers(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rbx
  bool v8; // bl
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbx
  NTSTATUS v13; // edi
  struct _KLOCK_ENTRIES *v14; // r9
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // rbx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64(
         (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial,
         0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial,
      v4,
      (__int64)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  v8 = PsAltSystemCallRegistrationLock.KernelShadowStackBase != 0LL;
  SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&PsAltSystemCallRegistrationLock.KernelShadowStackInitial);
  if ( v8 )
  {
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.Spare35[1], 0LL, 0LL, v9);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.Spare35[1], 0LL);
    v12 = v10;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(
        &PsAltSystemCallRegistrationLock.Spare35[1],
        v10,
        (__int64)&PsAltSystemCallRegistrationLock.Spare35[1]);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    do
    {
      if ( !LODWORD(PsAltSystemCallRegistrationLock.Padding[2]) || !*(_QWORD *)&PsAltSystemCallRegistrationLock.Spare36 )
        break;
      SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&PsAltSystemCallRegistrationLock.Spare35[1]);
      Timeout.QuadPart = -10000000LL;
      v13 = KeWaitForSingleObject(
              &PsAltSystemCallRegistrationLock.SchedulerAssistLastYieldBoostTime,
              Executive,
              0,
              0,
              &Timeout);
      v15 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.Spare35[1], 0LL, 0LL, v14);
      v6 = _interlockedbittestandset64((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.Spare35[1], 0LL);
      v17 = v15;
      if ( v6 )
        ExfAcquirePushLockExclusiveEx(
          &PsAltSystemCallRegistrationLock.Spare35[1],
          v15,
          (__int64)&PsAltSystemCallRegistrationLock.Spare35[1]);
      if ( v17 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v17, v16);
        else
          *((_BYTE *)v17 + 10) = 1;
      }
    }
    while ( v13 >= 0 );
    if ( *(_QWORD *)&PsAltSystemCallRegistrationLock.Spare36 )
    {
      ZwClose(*(HANDLE *)&PsAltSystemCallRegistrationLock.Spare36);
      *(_QWORD *)&PsAltSystemCallRegistrationLock.Spare36 = 0LL;
    }
    SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&PsAltSystemCallRegistrationLock.Spare35[1]);
  }
}
