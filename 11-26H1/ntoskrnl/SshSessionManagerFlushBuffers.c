/*
 * XREFs of SshSessionManagerFlushBuffers @ 0x1407E8EFC
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404AC97C (SSHSupportReleasePushLockExclusive.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
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

  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.Padding[4], 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.Padding[4], 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      &PsAltSystemCallRegistrationLock.Padding[4],
      v4,
      (__int64)&PsAltSystemCallRegistrationLock.Padding[4]);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  v8 = qword_140F0A830 != 0LL;
  SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&PsAltSystemCallRegistrationLock.Padding[4]);
  if ( v8 )
  {
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F0A858, 0LL, 0LL, v9);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0A858, 0LL);
    v12 = v10;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F0A858, v10, (__int64)&qword_140F0A858);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    do
    {
      if ( !(_DWORD)dword_140F0A8C0 || !qword_140F0A860 )
        break;
      SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&qword_140F0A858);
      Timeout.QuadPart = -10000000LL;
      v13 = KeWaitForSingleObject(&word_140F0A8A8, Executive, 0, 0, &Timeout);
      v15 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F0A858, 0LL, 0LL, v14);
      v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0A858, 0LL);
      v17 = v15;
      if ( v6 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F0A858, v15, (__int64)&qword_140F0A858);
      if ( v17 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v17, v16);
        else
          *((_BYTE *)v17 + 10) = 1;
      }
    }
    while ( v13 >= 0 );
    if ( qword_140F0A860 )
    {
      ZwClose(qword_140F0A860);
      qword_140F0A860 = 0LL;
    }
    SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&qword_140F0A858);
  }
}
