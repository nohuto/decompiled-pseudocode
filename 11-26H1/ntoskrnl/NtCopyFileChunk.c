/*
 * XREFs of NtCopyFileChunk @ 0x140AE2060
 * Callers:
 *     DifNtCopyFileChunkWrapper @ 0x14066FA10 (DifNtCopyFileChunkWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopFileObjectRevoked @ 0x140269D30 (IopFileObjectRevoked.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     IoIs32bitProcess @ 0x1404336A0 (IoIs32bitProcess.c)
 *     IopWaitForSynchronousIoEvent @ 0x140469C58 (IopWaitForSynchronousIoEvent.c)
 *     IopPopulateCopyWriteWorkerData @ 0x1404BA18C (IopPopulateCopyWriteWorkerData.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1404C2E04 (IopFreeCopyObjectsFromDataBuffer.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     IopExceptionFilter @ 0x1405CA834 (IopExceptionFilter.c)
 *     ZwCreateEvent @ 0x140723CF0 (ZwCreateEvent.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x1408F9590 (ObReferenceFileObjectForWrite.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall NtCopyFileChunk(
        void *a1,
        ULONG_PTR a2,
        void *a3,
        unsigned int *a4,
        unsigned int a5,
        __int64 a6,
        UNICODE_STRING **a7,
        unsigned int *a8,
        __int64 a9,
        int a10)
{
  void *v11; // r11
  void *v12; // r10
  struct _KEVENT *v13; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  void *ULong64FromUser; // rbx
  __int64 v16; // r13
  UNICODE_STRING *v17; // rdi
  int ULongFromUser; // eax
  struct _IRP *Pool2; // rax
  struct _IRP *v20; // rdi
  struct _IRP *v21; // rax
  __int64 v22; // rdx
  int File; // ebx
  __int64 Pointer; // rcx
  int v25; // edx
  __int64 v26; // rdx
  int v27; // r13d
  struct _FILE_OBJECT **v28; // rbx
  NTSTATUS v30; // eax
  PIRP *v31; // r13
  unsigned int v32; // ebx
  int InitialState; // [rsp+20h] [rbp-138h]
  SIZE_T Length; // [rsp+30h] [rbp-128h]
  size_t Size; // [rsp+38h] [rbp-120h]
  int v36; // [rsp+70h] [rbp-E8h]
  PVOID Object; // [rsp+78h] [rbp-E0h] BYREF
  struct _IRP *v38; // [rsp+80h] [rbp-D8h]
  struct _IRP *v39; // [rsp+88h] [rbp-D0h]
  PVOID v40; // [rsp+90h] [rbp-C8h]
  int v41; // [rsp+98h] [rbp-C0h]
  HANDLE EventHandle; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 p_Information; // [rsp+A8h] [rbp-B0h]
  _DWORD *v44; // [rsp+B0h] [rbp-A8h]
  PIRP v45; // [rsp+B8h] [rbp-A0h]
  __int128 Src; // [rsp+C0h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-88h] BYREF
  PIRP *p_ThreadListEntry; // [rsp+100h] [rbp-58h]
  void *v49; // [rsp+108h] [rbp-50h]
  UNICODE_STRING *v50; // [rsp+110h] [rbp-48h]
  void *v51; // [rsp+160h] [rbp+8h]
  int v54; // [rsp+1A8h] [rbp+50h]

  v51 = a1;
  v11 = a3;
  v12 = (void *)a2;
  Src = 0LL;
  Object = 0LL;
  v44 = 0LL;
  EventHandle = (HANDLE)-1LL;
  v13 = 0LL;
  v40 = 0LL;
  v45 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a10 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( (a6 & 3) != 0
      || (ULong64FromUser = (void *)RtlReadULong64FromUser((volatile void *)a6),
          v49 = ULong64FromUser,
          v16 = (__int64)a7,
          ((unsigned __int8)a7 & 3) != 0) )
    {
      ExRaiseDatatypeMisalignment();
    }
    v17 = (UNICODE_STRING *)RtlReadULong64FromUser(a7);
    v50 = v17;
    ULongFromUser = RtlReadULongFromUser(a4);
    RtlWriteULongToUser(a4, ULongFromUser);
    RtlCopyFromUser(&Src, a4, 0x10uLL);
    v12 = (void *)a2;
    a1 = v51;
    v11 = a3;
  }
  else
  {
    ULong64FromUser = *(void **)a6;
    v16 = (__int64)a7;
    v17 = *a7;
    Src = *(_OWORD *)a4;
  }
  if ( (a10 & 1) != 0 )
  {
    *(_QWORD *)&ObjectAttributes.Length = a1;
    ObjectAttributes.RootDirectory = ULong64FromUser;
    ObjectAttributes.ObjectName = v17;
    *(_QWORD *)&ObjectAttributes.Attributes = a5;
    LODWORD(Size) = 32;
    return IopXxxControlFile(v12, v11, 0LL, 0LL, a4, 0x98344u, &ObjectAttributes.Length, Size, 0LL, 0, 0);
  }
  Pool2 = (struct _IRP *)ExAllocatePool2(0x43uLL);
  v20 = Pool2;
  if ( Pool2 )
  {
    v38 = Pool2;
    memset_0(Pool2, 0, 0x48uLL);
    v20 = (struct _IRP *)((char *)v20 + 72);
    v39 = v20;
    v21 = v38;
    *(_QWORD *)&v38->RequestorMode = ULong64FromUser;
    p_Information = (__int64)&v21->IoStatus.Information;
    File = IopReferenceFileObject(v51, 1u, PreviousMode, &v21->IoStatus.Information, 0LL);
    if ( File < 0 )
      goto LABEL_25;
    LOBYTE(v22) = PreviousMode;
    File = ObReferenceFileObjectForWrite(a2, v22, &v38->IoStatus.Pointer, (int *)&Object);
    if ( File < 0 )
      goto LABEL_25;
    if ( IopFileObjectRevoked((__int64)v38->IoStatus.Pointer) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_25;
    Pointer = (__int64)v38->IoStatus.Pointer;
    v54 = *(_DWORD *)(Pointer + 80) & 2;
    v25 = *(_DWORD *)(Pointer + 80) >> 2;
    LOBYTE(v25) = (*(_DWORD *)(Pointer + 80) & 4) != 0;
    v41 = v25;
    p_ThreadListEntry = (PIRP *)&v38->ThreadListEntry;
    v26 = 0LL;
    if ( !v54 )
      v26 = (__int64)a3;
    File = IopPopulateCopyWriteWorkerData(
             Pointer,
             (__int64)a4,
             (__int64)v20,
             a5,
             InitialState,
             p_Information,
             v26,
             v16,
             a9,
             SHIDWORD(Object),
             (__int64)&v38->ThreadListEntry);
    if ( File < 0 )
    {
      v38->IoStatus.Pointer = 0LL;
    }
    else
    {
      v27 = v54;
      if ( !v54 )
        goto LABEL_19;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      File = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      if ( File >= 0 )
      {
        Object = 0LL;
        v30 = ObReferenceObjectByHandle(EventHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
        File = v30;
        v44 = Object;
        if ( v30 >= 0 )
        {
          v31 = p_ThreadListEntry;
          (*p_ThreadListEntry)->UserEvent = (PKEVENT)Object;
          if ( !a3 )
          {
LABEL_43:
            v45 = *v31;
            v27 = v54;
LABEL_19:
            if ( PreviousMode )
              RtlCopyToUser(a4, &Src, 0x10uLL);
            else
              *(_OWORD *)a4 = Src;
            v28 = (struct _FILE_OBJECT **)p_Information;
            PsReferenceSiloContext(*(void **)p_Information);
            LODWORD(Length) = a5;
            File = IopReadFile(*v28, a3, 0LL, 0LL, a4, v20, Length, a6, a8, 0LL, 0LL, 0x40000000, 0LL, v28);
            v20 = 0LL;
            if ( File >= 0 && v27 )
            {
              File = IopWaitForSynchronousIoEvent(v45, PreviousMode, v41, v44);
              if ( File >= 0 )
              {
                if ( PreviousMode )
                {
                  v32 = RtlReadULongFromUser(a4);
                  if ( IoIs32bitProcess(0LL) )
                    v36 = RtlReadULongFromUser((unsigned int *)v32);
                  else
                    v36 = v32;
                  File = v36;
                }
                else if ( IoIs32bitProcess(0LL) )
                {
                  File = *(_DWORD *)*a4;
                }
                else
                {
                  File = *a4;
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
          File = ObReferenceObjectByHandle(a3, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
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
  if ( EventHandle != (HANDLE)-1LL )
    ObCloseHandle(EventHandle, 0);
  if ( v13 )
    ObfDereferenceObject(v13);
  return (unsigned int)File;
}
