/*
 * XREFs of PopSendSuspendResumeNotifications @ 0x140B63780
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x1407D4188 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x1407D42B8 (PopSendSuspendResumeServiceNotification.c)
 */

__int64 __fastcall PopSendSuspendResumeNotifications(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // rdx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopSuspendResumeNotification, a2, a3, a4);
    if ( HIDWORD(qword_140F11450) == 1 )
    {
      v5 = -1072103422;
    }
    else if ( a1 == (_BYTE)qword_140F11450 )
    {
      v5 = -1073741101;
    }
    else
    {
      qword_140F11458 = (__int64)KeGetCurrentThread();
      HIDWORD(qword_140F11450) = 1;
      PopReleaseRwLock((struct _KTHREAD *)&PopSuspendResumeNotification);
      if ( a1 )
      {
        LOBYTE(v7) = a1;
        PopSendSuspendResumeApplicationNotification(v7, v6);
        LOBYTE(v8) = a1;
        v9 = PopSendSuspendResumeServiceNotification(v8);
      }
      else
      {
        PopSendSuspendResumeServiceNotification(0LL);
        v9 = PopSendSuspendResumeApplicationNotification(0LL, v13);
      }
      v5 = v9;
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopSuspendResumeNotification, v10, v11, v12);
      LOBYTE(qword_140F11450) = a1;
      HIDWORD(qword_140F11450) = 0;
    }
    PopReleaseRwLock((struct _KTHREAD *)&PopSuspendResumeNotification);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v5;
}
