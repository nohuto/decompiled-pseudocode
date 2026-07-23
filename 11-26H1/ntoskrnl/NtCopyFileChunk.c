/*
 * XREFs of NtCopyFileChunk @ 0x140ADF550
 * Callers:
 *     DifNtCopyFileChunkWrapper @ 0x1406735F0 (DifNtCopyFileChunkWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopFileObjectRevoked @ 0x1402692A0 (IopFileObjectRevoked.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     IoIs32bitProcess @ 0x140428770 (IoIs32bitProcess.c)
 *     IopWaitForSynchronousIoEvent @ 0x1404633D8 (IopWaitForSynchronousIoEvent.c)
 *     IopPopulateCopyWriteWorkerData @ 0x1404B3A1C (IopPopulateCopyWriteWorkerData.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1404BC654 (IopFreeCopyObjectsFromDataBuffer.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     ZwCreateEvent @ 0x1407288C0 (ZwCreateEvent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x140929520 (ObReferenceFileObjectForWrite.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtCopyFileChunk(
        HANDLE SourceHandle,
        HANDLE DestinationHandle,
        HANDLE EventHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG Length,
        PLARGE_INTEGER SourceOffset,
        PLARGE_INTEGER DestOffset,
        PULONG SourceKey,
        PULONG DestKey,
        ULONG Flags)
{
  HANDLE v11; // r11
  HANDLE v12; // r10
  struct _KEVENT *v13; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  void *ULong64FromUser; // rbx
  PLARGE_INTEGER v16; // r13
  UNICODE_STRING *QuadPart; // rdi
  int ULongFromUser; // eax
  struct _IRP *Pool2; // rax
  struct _IRP *v20; // rdi
  struct _IRP *v21; // rax
  __int64 v22; // rdx
  NTSTATUS File; // ebx
  __int64 Pointer; // rcx
  int v25; // edx
  HANDLE v26; // rdx
  ULONG v27; // r13d
  struct _FILE_OBJECT **v28; // rbx
  NTSTATUS v30; // eax
  PIRP *v31; // r13
  unsigned int v32; // ebx
  int InitialState; // [rsp+20h] [rbp-138h]
  SIZE_T v34; // [rsp+30h] [rbp-128h]
  size_t Size; // [rsp+38h] [rbp-120h]
  NTSTATUS v36; // [rsp+70h] [rbp-E8h]
  PVOID Object; // [rsp+78h] [rbp-E0h] BYREF
  struct _IRP *v38; // [rsp+80h] [rbp-D8h]
  struct _IRP *v39; // [rsp+88h] [rbp-D0h]
  PVOID v40; // [rsp+90h] [rbp-C8h]
  int v41; // [rsp+98h] [rbp-C0h]
  HANDLE EventHandlea; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 p_Information; // [rsp+A8h] [rbp-B0h]
  _DWORD *v44; // [rsp+B0h] [rbp-A8h]
  PIRP v45; // [rsp+B8h] [rbp-A0h]
  __int128 Src; // [rsp+C0h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-88h] BYREF
  PIRP *p_ThreadListEntry; // [rsp+100h] [rbp-58h]
  void *v49; // [rsp+108h] [rbp-50h]
  UNICODE_STRING *v50; // [rsp+110h] [rbp-48h]
  HANDLE v51; // [rsp+160h] [rbp+8h]
  ULONG Flagsa; // [rsp+1A8h] [rbp+50h]

  v51 = SourceHandle;
  v11 = EventHandle;
  v12 = DestinationHandle;
  Src = 0LL;
  Object = 0LL;
  v44 = 0LL;
  EventHandlea = (HANDLE)-1LL;
  v13 = 0LL;
  v40 = 0LL;
  v45 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)SourceOffset & 3) != 0
      || (ULong64FromUser = (void *)RtlReadULong64FromUser(SourceOffset),
          v49 = ULong64FromUser,
          v16 = DestOffset,
          ((unsigned __int8)DestOffset & 3) != 0) )
    {
      ExRaiseDatatypeMisalignment();
    }
    QuadPart = (UNICODE_STRING *)RtlReadULong64FromUser(DestOffset);
    v50 = QuadPart;
    ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
    RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
    RtlCopyFromUser(&Src, IoStatusBlock, 0x10uLL);
    v12 = DestinationHandle;
    SourceHandle = v51;
    v11 = EventHandle;
  }
  else
  {
    ULong64FromUser = (void *)SourceOffset->QuadPart;
    v16 = DestOffset;
    QuadPart = (UNICODE_STRING *)DestOffset->QuadPart;
    Src = *(_OWORD *)&IoStatusBlock->Status;
  }
  if ( (Flags & 1) != 0 )
  {
    *(_QWORD *)&ObjectAttributes.Length = SourceHandle;
    ObjectAttributes.RootDirectory = ULong64FromUser;
    ObjectAttributes.ObjectName = QuadPart;
    *(_QWORD *)&ObjectAttributes.Attributes = Length;
    LODWORD(Size) = 32;
    return IopXxxControlFile(v12, v11, 0LL, 0LL, IoStatusBlock, 0x98344u, &ObjectAttributes.Length, Size, 0LL, 0, 0);
  }
  Pool2 = (struct _IRP *)ExAllocatePool2(0x43uLL);
  v20 = Pool2;
  if ( Pool2 )
  {
    v38 = Pool2;
    memset_0(Pool2, 0, 0x50uLL);
    v20 = (struct _IRP *)((char *)v20 + 80);
    v39 = v20;
    v21 = v38;
    *(_QWORD *)&v38->RequestorMode = ULong64FromUser;
    p_Information = (__int64)&v21->IoStatus.Information;
    File = IopReferenceFileObject(v51, 1u, PreviousMode, &v21->IoStatus.Information, 0LL);
    if ( File < 0 )
      goto LABEL_25;
    LOBYTE(v22) = PreviousMode;
    File = ObReferenceFileObjectForWrite((ULONG_PTR)DestinationHandle, v22, &v38->IoStatus.Pointer, (int *)&Object);
    if ( File < 0 )
      goto LABEL_25;
    if ( IopFileObjectRevoked((__int64)v38->IoStatus.Pointer) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_25;
    Pointer = (__int64)v38->IoStatus.Pointer;
    Flagsa = *(_DWORD *)(Pointer + 80) & 2;
    v25 = *(_DWORD *)(Pointer + 80) >> 2;
    LOBYTE(v25) = (*(_DWORD *)(Pointer + 80) & 4) != 0;
    v41 = v25;
    p_ThreadListEntry = (PIRP *)&v38->ThreadListEntry;
    v26 = 0LL;
    if ( !Flagsa )
      v26 = EventHandle;
    File = IopPopulateCopyWriteWorkerData(
             Pointer,
             (__int64)IoStatusBlock,
             (__int64)v20,
             Length,
             InitialState,
             p_Information,
             (__int64)v26,
             (__int64)v16,
             (__int64)DestKey,
             SHIDWORD(Object),
             (__int64)&v38->ThreadListEntry);
    if ( File < 0 )
    {
      v38->IoStatus.Pointer = 0LL;
    }
    else
    {
      v27 = Flagsa;
      if ( !Flagsa )
        goto LABEL_19;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      File = ZwCreateEvent(&EventHandlea, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      if ( File >= 0 )
      {
        Object = 0LL;
        v30 = ObReferenceObjectByHandle(EventHandlea, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
        File = v30;
        v44 = Object;
        if ( v30 >= 0 )
        {
          v31 = p_ThreadListEntry;
          (*p_ThreadListEntry)->UserEvent = (PKEVENT)Object;
          if ( !EventHandle )
          {
LABEL_43:
            v45 = *v31;
            v27 = Flagsa;
LABEL_19:
            if ( PreviousMode )
              RtlCopyToUser(IoStatusBlock, &Src, 0x10uLL);
            else
              *(_OWORD *)&IoStatusBlock->Status = Src;
            v28 = (struct _FILE_OBJECT **)p_Information;
            PsReferenceSiloContext(*(void **)p_Information);
            LODWORD(v34) = Length;
            File = IopReadFile(
                     *v28,
                     EventHandle,
                     0LL,
                     0LL,
                     (unsigned int *)IoStatusBlock,
                     v20,
                     v34,
                     (__int64)SourceOffset,
                     SourceKey,
                     0LL,
                     0LL,
                     0x40000000,
                     0LL,
                     v28);
            v20 = 0LL;
            if ( File >= 0 && v27 )
            {
              File = IopWaitForSynchronousIoEvent(v45, PreviousMode, v41, v44);
              if ( File >= 0 )
              {
                if ( PreviousMode )
                {
                  v32 = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
                  if ( IoIs32bitProcess(0LL) )
                    v36 = RtlReadULongFromUser((unsigned int *)v32);
                  else
                    v36 = v32;
                  File = v36;
                }
                else if ( IoIs32bitProcess(0LL) )
                {
                  File = *(_DWORD *)(unsigned int)IoStatusBlock->Status;
                }
                else
                {
                  File = IoStatusBlock->Status;
                }
              }
              if ( v13 )
                KeSetEvent(v13, 0, 0);
            }
            else if ( File >= 0 )
            {
              File = 259;
            }
            goto LABEL_25;
          }
          Object = 0LL;
          File = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
          v13 = (struct _KEVENT *)Object;
          v40 = Object;
          if ( File >= 0 )
          {
            KeResetEvent((PRKEVENT)Object);
            goto LABEL_43;
          }
        }
      }
    }
  }
  else
  {
    File = -1073741670;
  }
LABEL_25:
  if ( v20 )
    IopFreeCopyObjectsFromDataBuffer((__int64)v20, 1);
  if ( EventHandlea != (HANDLE)-1LL )
    ObCloseHandle(EventHandlea, 0);
  if ( v13 )
    ObfDereferenceObject(v13);
  return File;
}
