/*
 * XREFs of SshpSessionManagerFlushControlEventBufferWorker @ 0x140AFE4F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404AC97C (SSHSupportReleasePushLockExclusive.c)
 *     SshpWorkItemTryAllowNextWorker @ 0x1404E6E20 (SshpWorkItemTryAllowNextWorker.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 *     ZwFlushBuffersFile @ 0x140728920 (ZwFlushBuffersFile.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SshpSessionManagerWriteBytes @ 0x140AFE92C (SshpSessionManagerWriteBytes.c)
 *     SshpSessionManagerNormalizeLogHeader @ 0x140B3D710 (SshpSessionManagerNormalizeLogHeader.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char SshpSessionManagerFlushControlEventBufferWorker()
{
  char *Pool2; // r13
  struct _KLOCK_ENTRIES *v1; // r9
  AutoBoost *v2; // rax
  void *v3; // rdx
  signed __int8 v4; // cf
  AutoBoost *v5; // rbx
  int v6; // r15d
  ULONG v7; // r12d
  __int64 v8; // rdi
  int v9; // r14d
  int v10; // r8d
  size_t v11; // rbx
  int v12; // esi
  int v13; // r8d
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // r15d
  unsigned int v17; // ebx
  struct _KLOCK_ENTRIES *v18; // r9
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rbx
  char result; // al
  int v23; // esi
  int v24; // edx
  NTSTATUS v25; // eax
  int v26; // eax
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  char *v28; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+68h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK v30; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  _OWORD Buffer[2]; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  __int64 *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  void **v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  LARGE_INTEGER *p_ByteOffset; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  char *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  struct _IO_STATUS_BLOCK *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]

  memset(Buffer, 0, 24);
  IoStatusBlock = 0LL;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v2 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F0A858, 0LL, 0LL, v1);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0A858, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F0A858, v2, (__int64)&qword_140F0A858);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v5, v3);
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  v6 = 0;
  v27 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  if ( !SshpWorkItemTryAllowNextWorker((__int64)&qword_140F0A868) )
  {
    while ( 1 )
    {
      v11 = (unsigned int)dword_140F0A8C0;
      v12 = 0;
      LODWORD(dword_140F0A8C0) = 0;
      if ( (_DWORD)v11 )
        break;
LABEL_22:
      if ( SshpWorkItemTryAllowNextWorker((__int64)&qword_140F0A868) )
        goto LABEL_23;
    }
    HIDWORD(v27) = v10 + 1;
    *(_QWORD *)&Buffer[1] = qword_140F0A8A0;
    Buffer[0] = xmmword_140F0A890;
    if ( Pool2 )
    {
      memmove(Pool2, &unk_140F0A8C4, v11);
      v28 = Pool2;
      SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&qword_140F0A858);
    }
    else
    {
      v28 = (char *)&unk_140F0A8C4;
    }
    v13 = HIDWORD(Buffer[0]);
    v14 = Buffer[1];
    v15 = DWORD1(Buffer[1]);
    if ( (unsigned int)v11 > DWORD1(Buffer[1]) + HIDWORD(Buffer[0]) - LODWORD(Buffer[1]) )
    {
      HIDWORD(Buffer[0]) = v11 - (DWORD1(Buffer[1]) - LODWORD(Buffer[1]));
      if ( HIDWORD(Buffer[0]) > LODWORD(Buffer[1]) )
        *(_QWORD *)((char *)Buffer + 12) = 0LL;
      SshpSessionManagerNormalizeLogHeader(Buffer);
      v26 = SshpSessionManagerWriteBytes(qword_140F0A860, 0LL, Buffer, 24LL);
      v15 = DWORD1(Buffer[1]);
      v12 = v26;
      v14 = Buffer[1];
      v13 = HIDWORD(Buffer[0]);
      if ( v26 < 0 )
      {
        v7 = v26;
        LODWORD(v27) = v6 + 1;
      }
      else
      {
        v8 += 24LL;
      }
    }
    v16 = v11;
    if ( v15 - v14 % v15 < (unsigned int)v11 )
      v16 = v15 - v14 % v15;
    v17 = v11 - v16;
    if ( v12 < 0 )
      goto LABEL_14;
    if ( v16 )
    {
      v23 = SshpSessionManagerWriteBytes(qword_140F0A860, v14 % v15 + 4096, v28, v16);
      if ( v23 < 0 )
        v7 = v23;
      else
        v8 += v16;
      v15 = DWORD1(Buffer[1]);
      v14 = v16 + LODWORD(Buffer[1]);
      v13 = HIDWORD(Buffer[0]);
      LODWORD(Buffer[1]) += v16;
      if ( v23 < 0 )
      {
        ++v9;
LABEL_14:
        v6 = v27;
LABEL_15:
        ZwFlushBuffersFile(qword_140F0A860, &IoStatusBlock);
        if ( v28 == Pool2 )
        {
          v19 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F0A858, 0LL, 0LL, v18);
          v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F0A858, 0LL);
          v21 = v19;
          if ( v4 )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F0A858, v19, (__int64)&qword_140F0A858);
          if ( v21 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v21, v20);
            else
              *((_BYTE *)v21 + 10) = 1;
          }
        }
        xmmword_140F0A890 = Buffer[0];
        qword_140F0A8A0 = *(_QWORD *)&Buffer[1];
        goto LABEL_22;
      }
    }
    if ( v17 )
    {
      v24 = SshpSessionManagerWriteBytes(qword_140F0A860, v14 % v15 + 4096, &v28[v16], v17);
      if ( v24 < 0 )
        v7 = v24;
      else
        v8 += v17;
      v14 = v17 + LODWORD(Buffer[1]);
      LODWORD(Buffer[1]) += v17;
      if ( v24 < 0 )
      {
        ++v9;
        goto LABEL_14;
      }
      v15 = DWORD1(Buffer[1]);
      v13 = HIDWORD(Buffer[0]);
    }
    if ( v14 >= 2 * v15 )
    {
      do
      {
        v14 -= v15;
        v13 -= v15;
      }
      while ( v14 >= 2 * v15 );
      LODWORD(Buffer[1]) = v14;
      HIDWORD(Buffer[0]) = v13;
    }
    DWORD2(Buffer[0]) = ~(v15 + v14 + v13 + LODWORD(Buffer[0]) + DWORD1(Buffer[0]));
    ByteOffset.QuadPart = 0LL;
    v30 = 0LL;
    v25 = ZwWriteFile(qword_140F0A860, 0LL, 0LL, 0LL, &v30, Buffer, 0x18u, &ByteOffset, 0LL);
    if ( v25 >= 0 )
    {
      if ( v30.Information == 24 )
      {
        v8 += 24LL;
        goto LABEL_14;
      }
      v25 = -1073741807;
    }
    v7 = v25;
    v6 = v27 + 1;
    LODWORD(v27) = v27 + 1;
    goto LABEL_15;
  }
LABEL_23:
  KeSetEvent(&word_140F0A8A8, 0, 0);
  SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&qword_140F0A858);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x5250535Fu);
  result = SshpTelemetryHandleRegistered;
  if ( SshpTelemetryHandleRegistered && *(_DWORD *)&SshpBlockerCollections.WaitBlockFill11[112] > 5u )
  {
    result = tlgKeywordOn((__int64)&SshpBlockerCollections.WaitBlockFill11[112], 0x400000000000LL);
    if ( result )
    {
      v31 = v8;
      v36 = 8LL;
      v35 = &v31;
      v46 = 8LL;
      v37 = &v27;
      LODWORD(v27) = v6;
      v39 = (void **)&v28;
      v38 = 4LL;
      p_ByteOffset = &ByteOffset;
      v43 = (char *)&v27 + 4;
      v45 = &v30;
      LODWORD(v28) = v9;
      v40 = 4LL;
      ByteOffset.LowPart = v7;
      v42 = 4LL;
      v44 = 4LL;
      v30.Pointer = (PVOID)0x1000000;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&SshpBlockerCollections.WaitBlockFill11[112],
               (unsigned __int8 *)&dword_140051C94,
               0LL,
               0LL,
               8u,
               &v34);
    }
  }
  return result;
}
