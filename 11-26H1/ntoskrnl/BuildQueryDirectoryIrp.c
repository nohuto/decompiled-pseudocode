/*
 * XREFs of BuildQueryDirectoryIrp @ 0x140982F50
 * Callers:
 *     NtQueryDirectoryFile @ 0x140982D50 (NtQueryDirectoryFile.c)
 *     NtQueryDirectoryFileEx @ 0x140982E60 (NtQueryDirectoryFileEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopFileObjectRevoked @ 0x1402692A0 (IopFileObjectRevoked.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140467B40 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopProbeAndLockPages_3 @ 0x140503E84 (IopProbeAndLockPages_3.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140AAB204 (IopAllocateIrpCleanup.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 BuildQueryDirectoryIrp(void *a1, void *a2, ...)
{
  PVOID v3; // r13
  _WORD *v4; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 PreviousMode; // si
  int ULongFromUser; // eax
  int v8; // ecx
  unsigned int v9; // eax
  ULONG v10; // r8d
  unsigned int *v11; // rbx
  __int128 v12; // xmm0
  void *v13; // rdi
  char *Pool2; // rax
  char *v15; // r14
  void *v16; // rcx
  __int64 v17; // rdx
  NTSTATUS v18; // ebx
  struct _KLOCK_ENTRIES *v19; // r9
  struct _FILE_OBJECT *v20; // rdi
  bool v21; // bl
  struct _KTHREAD *v22; // rax
  AutoBoost *v23; // rax
  void *v24; // rdx
  char v25; // r12
  NTSTATUS v26; // ebx
  _BYTE *v27; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v29; // r8
  __int64 Irp; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  IRP *v33; // rbx
  PVOID v34; // r12
  __int64 v35; // r14
  ULONG Flags; // eax
  __int64 v38; // rax
  PMDL Mdl; // rcx
  __int64 v40; // r8
  int v41; // esi
  PVOID v42; // [rsp+30h] [rbp-B8h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-80h]
  struct _KTHREAD *v45; // [rsp+70h] [rbp-78h]
  __int128 v46; // [rsp+80h] [rbp-68h]
  __int128 v47; // [rsp+90h] [rbp-58h]
  __int128 v48; // [rsp+A0h] [rbp-48h]
  __int64 v50; // [rsp+100h] [rbp+18h] BYREF
  va_list va; // [rsp+100h] [rbp+18h]
  __int64 v52; // [rsp+108h] [rbp+20h]
  unsigned int *v53; // [rsp+110h] [rbp+28h] BYREF
  va_list va1; // [rsp+110h] [rbp+28h]
  volatile void *Address; // [rsp+118h] [rbp+30h]
  SIZE_T Length; // [rsp+120h] [rbp+38h]
  __int64 v57; // [rsp+128h] [rbp+40h]
  __int64 v58; // [rsp+130h] [rbp+48h]
  unsigned int *v59; // [rsp+138h] [rbp+50h]
  __int64 v60; // [rsp+140h] [rbp+58h] BYREF
  va_list va2; // [rsp+140h] [rbp+58h]
  _BYTE *v62; // [rsp+148h] [rbp+60h]
  PDEVICE_OBJECT *v63; // [rsp+150h] [rbp+68h]
  __int64 *v64; // [rsp+158h] [rbp+70h]
  struct _FILE_OBJECT **v65; // [rsp+160h] [rbp+78h]
  PVOID Object; // [rsp+168h] [rbp+80h] BYREF
  va_list va3; // [rsp+168h] [rbp+80h]
  va_list va4; // [rsp+170h] [rbp+88h] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v50 = va_arg(va1, _QWORD);
  v52 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v53 = va_arg(va2, unsigned int *);
  Address = va_arg(va2, volatile void *);
  Length = va_arg(va2, _QWORD);
  v57 = va_arg(va2, _QWORD);
  v58 = va_arg(va2, _QWORD);
  v59 = va_arg(va2, unsigned int *);
  va_copy(va3, va2);
  v60 = va_arg(va3, _QWORD);
  v62 = va_arg(va3, _BYTE *);
  v63 = va_arg(va3, PDEVICE_OBJECT *);
  v64 = va_arg(va3, __int64 *);
  v65 = va_arg(va3, struct _FILE_OBJECT **);
  va_copy(va4, va3);
  Object = va_arg(va4, PVOID);
  v3 = 0LL;
  v42 = 0LL;
  v4 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v45 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(v60) = PreviousMode;
  *(_BYTE *)Object = PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(v53);
    RtlWriteULongToUser(v53, ULongFromUser);
    v8 = v57;
    if ( (_DWORD)v57 != 1 )
    {
      switch ( (int)v57 )
      {
        case 2:
        case 29:
          v9 = 72;
          goto LABEL_62;
        case 3:
        case 50:
        case 60:
          v9 = 96;
          goto LABEL_62;
        case 12:
        case 33:
          v9 = 16;
          goto LABEL_62;
        case 32:
          v9 = 56;
          v8 = v57;
          goto LABEL_4;
        case 37:
        case 79:
          v9 = 112;
          goto LABEL_62;
        case 38:
        case 78:
          v9 = 88;
          goto LABEL_62;
        case 63:
          v9 = 120;
          goto LABEL_62;
        case 80:
          v9 = 104;
          goto LABEL_62;
        case 81:
          v9 = 128;
LABEL_62:
          v8 = v57;
          goto LABEL_4;
        default:
          return 3221225475LL;
      }
    }
    v9 = 72;
LABEL_4:
    if ( (unsigned int)Length < v9 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].ReadyTime )
      v10 = 4;
    else
      v10 = *((unsigned __int8 *)IopQuerySetAlignmentRequirement + v8);
    ProbeForWrite(Address, (unsigned int)Length, v10);
  }
  if ( !v59 )
    goto LABEL_22;
  v11 = v59 + 2;
  if ( PreviousMode )
  {
    HIDWORD(Src[0]) = 0;
    LODWORD(Src[0]) = RtlReadULongFromUser(v59);
    Src[1] = (void *)RtlReadULong64FromUser(v11);
    v12 = *(_OWORD *)Src;
  }
  else
  {
    v46 = 0LL;
    LODWORD(v46) = *v59;
    *((_QWORD *)&v46 + 1) = *(_QWORD *)v11;
    v12 = v46;
  }
  v47 = v12;
  *(_OWORD *)Src = v12;
  v48 = v12;
  if ( (v12 & 1) != 0 )
    return 3221225485LL;
  if ( !(_WORD)v12 )
    goto LABEL_22;
  if ( !PreviousMode )
  {
    v13 = Src[1];
    goto LABEL_17;
  }
  v13 = Src[1];
  if ( (unsigned __int16)v12 >= 0x200u )
    return 3221225485LL;
LABEL_17:
  Pool2 = (char *)ExAllocatePool2(0x41uLL);
  v4 = Pool2;
  P = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v15 = Pool2 + 16;
  v16 = Pool2 + 16;
  if ( PreviousMode )
    RtlCopyFromUser(v16, v13, LOWORD(Src[0]));
  else
    RtlCopyVolatileMemory(v16, v13, LOWORD(Src[0]));
  *v4 = v12;
  v4[1] = v12;
  *((_QWORD *)v4 + 1) = v15;
  v3 = v42;
LABEL_22:
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, (PVOID *)va3, 0LL);
  v20 = (struct _FILE_OBJECT *)Object;
  if ( v18 >= 0 && IopFileObjectRevoked((__int64)Object) )
  {
    ObfDereferenceObject(v20);
    v18 = -1073739504;
    goto LABEL_50;
  }
  if ( v18 >= 0 )
  {
    *v65 = v20;
    if ( v20->CompletionContext && (v50 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(v20);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      return 3221225485LL;
    }
    if ( a2 )
    {
      v42 = 0LL;
      v26 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v42, 0LL);
      v3 = v42;
      if ( v26 < 0 )
      {
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        goto LABEL_67;
      }
      KeResetEvent((PRKEVENT)v42);
    }
    if ( (v20->Flags & 2) == 0 )
    {
      v27 = v62;
      *v62 = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((__int64 *)va1, (__int64 *)va, 0);
      goto LABEL_34;
    }
    v21 = (v20->Flags & 4) != 0;
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    v23 = (AutoBoost *)KeAbPreAcquire((__int64)&v20->Lock, 0LL, 0LL, v19);
    v25 = 0;
    LOBYTE(v60) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v20->Busy, 1) )
    {
      v26 = IopWaitAndAcquireFileObjectLock(v20, PreviousMode, v21, v23, (__int64 *)va2);
      v25 = v60;
    }
    else
    {
      if ( v23 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v23, v24);
        else
          *((_BYTE *)v23 + 10) = 1;
      }
      PsReferenceSiloContext(v20);
      v26 = 0;
    }
    if ( !v25 )
    {
      v27 = v62;
      *v62 = 1;
LABEL_34:
      IopResetEvent((__int64)v20, v17);
      RelatedDeviceObject = IoGetRelatedDeviceObject(v20);
      *v63 = RelatedDeviceObject;
      LOBYTE(v29) = *v27 == 0;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v29);
      v33 = (IRP *)Irp;
      v34 = v42;
      if ( Irp )
      {
        *v64 = Irp;
        *(_QWORD *)(Irp + 192) = v20;
        *(_QWORD *)(Irp + 152) = v45;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_QWORD *)(Irp + 80) = v34;
        *(_QWORD *)(Irp + 72) = v53;
        *(_QWORD *)(Irp + 88) = v50;
        *(_QWORD *)(Irp + 96) = v52;
        v35 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v35 - 72) = 268;
        *(_QWORD *)(v35 - 24) = v20;
        *(_QWORD *)(Irp + 160) = v4;
        *(_QWORD *)(Irp + 24) = 0LL;
        *(_QWORD *)(Irp + 8) = 0LL;
        Flags = RelatedDeviceObject->Flags;
        if ( (Flags & 4) == 0 )
        {
          if ( (Flags & 0x10) != 0 )
          {
            Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, v33);
            if ( Mdl )
            {
              v41 = IopProbeAndLockPages_3(
                      (unsigned __int64)Mdl,
                      PreviousMode,
                      v40,
                      (struct _LIST_ENTRY *)RelatedDeviceObject,
                      *(unsigned __int8 *)(v35 - 72));
              if ( v41 >= 0 )
                goto LABEL_38;
            }
            else
            {
              v41 = -1073741670;
            }
            IopExceptionCleanupEx((ULONG_PTR)v20, v33, v34, 0LL, (v20->Flags & 2) != 0);
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
            return (unsigned int)v41;
          }
LABEL_37:
          v33->UserBuffer = (PVOID)Address;
LABEL_38:
          *(_DWORD *)(v35 - 64) = Length;
          *(_DWORD *)(v35 - 48) = v57;
          *(_DWORD *)(v35 - 40) = 0;
          *(_QWORD *)(v35 - 56) = v4;
          *(_BYTE *)(v35 - 70) = v58 & 0x1B;
          v33->Flags |= 0x800u;
          return 0LL;
        }
        v38 = ExAllocatePool2(0x41uLL);
        v33->AssociatedIrp.MasterIrp = (struct _IRP *)v38;
        if ( v38 )
        {
          v33->Flags = 112;
          goto LABEL_37;
        }
        IopExceptionCleanupEx((ULONG_PTR)v20, v33, v34, 0LL, (v20->Flags & 2) != 0);
      }
      else
      {
        if ( v42 )
          ObfDereferenceObject(v42);
        if ( (v20->Flags & 2) != 0 )
          IopReleaseFileObjectLock((ULONG_PTR)v20, v31, v32);
        ObfDereferenceObject(v20);
      }
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      return 3221225626LL;
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v3 )
      ObfDereferenceObject(v3);
LABEL_67:
    ObfDereferenceObject(v20);
    return (unsigned int)v26;
  }
LABEL_50:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v18;
}
