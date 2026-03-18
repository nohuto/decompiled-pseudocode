/*
 * XREFs of PopFlushVolumeWorker @ 0x140C06A60
 * Callers:
 *     PopFlushVolumes @ 0x140C06720 (PopFlushVolumes.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopFlushAndHold @ 0x14050D080 (PopFlushAndHold.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwFlushBuffersFile @ 0x140723D50 (ZwFlushBuffersFile.c)
 *     ZwCreateFile @ 0x140723E90 (ZwCreateFile.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtDeviceIoControlFile @ 0x1408F5E30 (NtDeviceIoControlFile.c)
 *     ObQueryNameString @ 0x1409FDA20 (ObQueryNameString.c)
 */

void __fastcall PopFlushVolumeWorker(struct _KEVENT *StartContext)
{
  PVOID *p_Flink; // rcx
  _XSAVE_FORMAT *v3; // rdi
  char ***v4; // rdx
  struct _LIST_ENTRY *v5; // rax
  __int64 v7; // rax
  _XSAVE_FORMAT **v8; // rcx
  _XSAVE_FORMAT *StateSaveArea; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-98h] BYREF
  char ***p_WaitListHead; // [rsp+70h] [rbp-90h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-80h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  struct _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+D0h] [rbp-30h] BYREF

  ReturnLength = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset_0(&ObjectNameInfo, 0, 0x200uLL);
  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F10828.SListFaultAddress);
  CurrentThread = KeGetCurrentThread();
  p_Flink = (PVOID *)&StartContext[2].Header.WaitListHead.Blink->Flink;
  if ( *p_Flink != &StartContext[2].Header.WaitListHead )
    goto LABEL_2;
  Blink = StartContext[2].Header.WaitListHead.Blink;
  p_WaitListHead = (char ***)&StartContext[2].Header.WaitListHead;
  *p_Flink = &p_WaitListHead;
  StartContext[2].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&p_WaitListHead;
  while ( 1 )
  {
    v3 = *(_XSAVE_FORMAT **)&StartContext->Header.Lock;
    if ( *(struct _KEVENT **)&StartContext->Header.Lock == StartContext )
      break;
    v7 = *(_QWORD *)&v3->ControlWord;
    if ( *(_XSAVE_FORMAT **)(*(_QWORD *)&v3->ControlWord + 8LL) != v3 )
      goto LABEL_2;
    v8 = *(_XSAVE_FORMAT ***)&v3->ErrorOffset;
    if ( *v8 != v3 )
      goto LABEL_2;
    *v8 = (_XSAVE_FORMAT *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    StateSaveArea = stru_140F10828.StateSaveArea;
    if ( *(struct _KTHREAD **)stru_140F10828.StateSaveArea != (struct _KTHREAD *)&stru_140F10828.KernelStack )
      goto LABEL_2;
    *(_QWORD *)&v3->ControlWord = &stru_140F10828.KernelStack;
    *(_QWORD *)&v3->ErrorOffset = StateSaveArea;
    *(_QWORD *)&StateSaveArea->ControlWord = v3;
    stru_140F10828.StateSaveArea = v3;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F10828.SListFaultAddress);
    if ( ObQueryNameString(*(PVOID *)&v3[-1].Reserved4[40], &ObjectNameInfo, 0x200u, &ReturnLength) >= 0 )
    {
      if ( ObjectNameInfo.Name.Buffer )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObjectNameInfo;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateFile(
               &FileHandle,
               0x100003u,
               &ObjectAttributes,
               &IoStatusBlock,
               0LL,
               0xC0000000,
               3u,
               1u,
               0x20u,
               0LL,
               0) >= 0 )
        {
          if ( StartContext[2].Header.Type )
          {
            PopFlushAndHold(FileHandle, &IoStatusBlock);
          }
          else if ( StartContext[2].Header.Signalling )
          {
            NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x53C004u, 0LL, 0, 0LL, 0);
          }
          else
          {
            ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
          }
          ZwClose(FileHandle);
        }
      }
    }
    ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F10828.SListFaultAddress);
  }
  v4 = p_WaitListHead;
  v5 = Blink;
  if ( p_WaitListHead[1] != (char **)&p_WaitListHead || (char ****)Blink->Flink != &p_WaitListHead )
LABEL_2:
    __fastfail(3u);
  Blink->Flink = (struct _LIST_ENTRY *)p_WaitListHead;
  v4[1] = (char **)v5;
  if ( LODWORD(StartContext->Header.WaitListHead.Blink)-- == 1 )
    KeSetEvent(StartContext + 1, 0, 0);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F10828.SListFaultAddress);
}
