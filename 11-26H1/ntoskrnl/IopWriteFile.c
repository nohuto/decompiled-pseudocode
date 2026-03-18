/*
 * XREFs of IopWriteFile @ 0x1409B19A0
 * Callers:
 *     IopIoRingDispatchWrite @ 0x1407987BC (IopIoRingDispatchWrite.c)
 *     NtWriteFile @ 0x1408FB6D0 (NtWriteFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MmIsDriverVerifying @ 0x1403B79E0 (MmIsDriverVerifying.c)
 *     IopValidateAndGetWriteParameters @ 0x1404BA26C (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404BA6B0 (IopAllocateAndPopulateWriteIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     IopSynchronousServiceTail @ 0x1409B2704 (IopSynchronousServiceTail.c)
 *     VfFastIoCheckState @ 0x140C47F24 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4824C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopWriteFile(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        __int64 a3,
        __int64 a4,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a6,
        int a7,
        struct _KTHREAD **a8,
        _DWORD *a9,
        char a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14)
{
  void *v15; // rdi
  struct _DRIVER_OBJECT *v16; // r12
  __int64 result; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  ULONG_PTR FastIoWrite; // r13
  char v20; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  PRKEVENT v26; // rcx
  __int128 Src; // [rsp+50h] [rbp-C8h] BYREF
  struct _KTHREAD *v28; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v29; // [rsp+68h] [rbp-B0h]
  char v30; // [rsp+6Ah] [rbp-AEh]
  int v31; // [rsp+6Bh] [rbp-ADh]
  char v32; // [rsp+6Fh] [rbp-A9h]
  ULONG_PTR v33; // [rsp+70h] [rbp-A8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-A0h]
  PRKEVENT Event; // [rsp+80h] [rbp-98h]
  __int64 v36; // [rsp+88h] [rbp-90h]
  __int64 v37; // [rsp+90h] [rbp-88h]
  struct _DRIVER_OBJECT *v38; // [rsp+98h] [rbp-80h]
  __int64 v39; // [rsp+A0h] [rbp-78h]
  int v40; // [rsp+A8h] [rbp-70h]
  int v41; // [rsp+ACh] [rbp-6Ch]
  _QWORD v42[4]; // [rsp+B0h] [rbp-68h] BYREF
  int v43; // [rsp+D0h] [rbp-48h]
  int v44; // [rsp+D4h] [rbp-44h]
  __int64 v45; // [rsp+D8h] [rbp-40h]
  __int64 v46; // [rsp+E0h] [rbp-38h]
  PIRP Irp; // [rsp+130h] [rbp+18h] BYREF

  v31 = 0;
  v32 = 0;
  v41 = 0;
  v42[1] = 0LL;
  v44 = 0;
  v15 = 0LL;
  Irp = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 1;
  v33 = BugCheckParameter2;
  DeviceObject = 0LL;
  Event = 0LL;
  v36 = a3;
  v37 = a4;
  v16 = DriverObject;
  v38 = DriverObject;
  v39 = a6;
  v40 = a7;
  v42[0] = 0LL;
  v42[2] = a11;
  v42[3] = a12;
  v43 = a13;
  v45 = a14;
  v46 = 0LL;
  result = IopValidateAndGetWriteParameters(&v28, a2, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    if ( !HIBYTE(v29) || !*(_QWORD *)(BugCheckParameter2 + 48) )
      goto LABEL_3;
    FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
    Src = 0LL;
    FastIoWrite = (ULONG_PTR)FastIoDispatch->FastIoWrite;
    if ( (MmVerifierData & 0x10) != 0 )
    {
      DriverObject = DeviceObject->DriverObject;
      if ( MmIsDriverVerifying(DriverObject) )
        v15 = (void *)VfFastIoSnapState(DriverObject);
    }
    v20 = guard_dispatch_icall_no_overrides(BugCheckParameter2, (__int64)v42);
    if ( v15 )
      VfFastIoCheckState(v15, FastIoWrite);
    if ( v20 && !(_DWORD)Src )
    {
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2EE0u);
      v22 = KeGetCurrentThread();
      v23 = DWORD2(Src);
      v22->WriteTransferCount += DWORD2(Src);
      __addgsqword(0x2EF0u, v23);
      if ( (_BYTE)v29 )
        RtlCopyToUser(v16, &Src, 0x10uLL);
      else
        RtlCopyVolatileMemory(v16, &Src, 0x10uLL);
      v26 = Event;
      if ( Event )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 80) & 0x8000000) == 0 )
        {
          KeSetEvent(Event, 0, 0);
          v26 = Event;
        }
        ObfDereferenceObject(v26);
      }
      IopReleaseFileObjectLock(BugCheckParameter2, v24, v25);
      ObfDereferenceObject((PVOID)BugCheckParameter2);
      return (unsigned int)Src;
    }
    else
    {
LABEL_3:
      result = IopAllocateAndPopulateWriteIrp((__int64)&v28, &Irp);
      if ( (int)result >= 0 )
        return IopSynchronousServiceTail(DeviceObject, Irp, BugCheckParameter2, v29, SHIBYTE(v29), 1);
    }
  }
  return result;
}
