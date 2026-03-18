/*
 * XREFs of SshpSessionManagerOpenControlTrace @ 0x1407E4148
 * Callers:
 *     SshpAlpcProcessAlpcMessage @ 0x1407E48A4 (SshpAlpcProcessAlpcMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SshpWorkItemQueue @ 0x14049BC60 (SshpWorkItemQueue.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404B32FC (SSHSupportReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1407234B0 (ZwReadFile.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A77400 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall SshpSessionManagerOpenControlTrace(__int64 a1, __int64 a2)
{
  int v2; // ebx
  NTSTATUS v3; // eax
  AutoBoost *v4; // rax
  void *v5; // rdx
  AutoBoost *v6; // rbx
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp+1Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+27h] BYREF
  __int128 Buffer; // [rsp+78h] [rbp+37h] BYREF
  __int64 v11; // [rsp+88h] [rbp+47h]

  ByteOffset.QuadPart = 0LL;
  v11 = 0LL;
  LOBYTE(a2) = 1;
  Buffer = 0LL;
  IoStatusBlock = 0LL;
  v2 = IoConvertFileHandleToKernelHandle(a1, a2, 3LL);
  if ( v2 >= 0 )
  {
    v3 = ZwReadFile(0LL, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 0x18u, &ByteOffset, 0LL);
    if ( v3 < 0 )
    {
      if ( v3 == -1073741807 )
        return (unsigned int)-1073739509;
      return (unsigned int)v3;
    }
    else if ( IoStatusBlock.Information == 24
           && DWORD2(Buffer) == ~((_DWORD)Buffer + DWORD1(Buffer) + HIDWORD(v11) + HIDWORD(Buffer) + (_DWORD)v11)
           && (_QWORD)Buffer == 0x15250535FLL
           && (unsigned int)(HIDWORD(v11) - 0x100000) <= 0x3F00000
           && HIDWORD(Buffer) <= (unsigned int)v11
           && (unsigned int)(v11 - HIDWORD(Buffer)) <= HIDWORD(v11)
           && HIDWORD(Buffer) < HIDWORD(v11) )
    {
      v4 = (AutoBoost *)KeAbPreAcquire(
                          (__int64)&PsAltSystemCallRegistrationLock.Spare35[1],
                          0LL,
                          0LL,
                          (struct _KLOCK_ENTRIES *)DWORD2(Buffer));
      v6 = v4;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.Spare35[1], 0LL) )
        ExfAcquirePushLockExclusiveEx(
          &PsAltSystemCallRegistrationLock.Spare35[1],
          v4,
          (__int64)&PsAltSystemCallRegistrationLock.Spare35[1]);
      if ( v6 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v6, v5);
        else
          *((_BYTE *)v6 + 10) = 1;
      }
      if ( *(_QWORD *)&PsAltSystemCallRegistrationLock.Spare36 )
      {
        v2 = -1073741791;
      }
      else
      {
        *(_QWORD *)&PsAltSystemCallRegistrationLock.Spare36 = 0LL;
        *(_OWORD *)&PsAltSystemCallRegistrationLock.Spare32 = Buffer;
        *(_QWORD *)&PsAltSystemCallRegistrationLock.SchedulerAssistYieldCounter = v11;
        if ( LODWORD(PsAltSystemCallRegistrationLock.Padding[2]) )
          SshpWorkItemQueue((struct _WORK_QUEUE_ITEM *)&PsAltSystemCallRegistrationLock.SystemAffinityTokenListHead);
        v2 = 0;
      }
      SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&PsAltSystemCallRegistrationLock.Spare35[1]);
    }
    else
    {
      return (unsigned int)-1073739509;
    }
  }
  return (unsigned int)v2;
}
