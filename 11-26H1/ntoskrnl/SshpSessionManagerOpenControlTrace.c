/*
 * XREFs of SshpSessionManagerOpenControlTrace @ 0x1407E959C
 * Callers:
 *     SshpAlpcProcessAlpcMessage @ 0x1407EA404 (SshpAlpcProcessAlpcMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SshpWorkItemQueue @ 0x1404957B0 (SshpWorkItemQueue.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404AC97C (SSHSupportReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x140728080 (ZwReadFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A80120 (IoConvertFileHandleToKernelHandle.c)
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
      v4 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F0A858, 0LL, 0LL, (struct _KLOCK_ENTRIES *)DWORD2(Buffer));
      v6 = v4;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0A858, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F0A858, v4, (__int64)&qword_140F0A858);
      if ( v6 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v6, v5);
        else
          *((_BYTE *)v6 + 10) = 1;
      }
      if ( qword_140F0A860 )
      {
        v2 = -1073741791;
      }
      else
      {
        qword_140F0A860 = 0LL;
        xmmword_140F0A890 = Buffer;
        qword_140F0A8A0 = v11;
        if ( (_DWORD)dword_140F0A8C0 )
          SshpWorkItemQueue((struct _WORK_QUEUE_ITEM *)&qword_140F0A868);
        v2 = 0;
      }
      SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&qword_140F0A858);
    }
    else
    {
      return (unsigned int)-1073739509;
    }
  }
  return (unsigned int)v2;
}
