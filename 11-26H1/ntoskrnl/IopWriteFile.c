/*
 * XREFs of IopWriteFile @ 0x140982A60
 * Callers:
 *     IopIoRingDispatchWrite @ 0x14079B2EC (IopIoRingDispatchWrite.c)
 *     NtWriteFile @ 0x14092B660 (NtWriteFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     IopValidateAndGetWriteParameters @ 0x1404B3AFC (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404B3F40 (IopAllocateAndPopulateWriteIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
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
  __int64 v18; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  ULONG_PTR FastIoWrite; // r13
  char v21; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  PRKEVENT v27; // rcx
  __int128 Src; // [rsp+50h] [rbp-C8h] BYREF
  struct _KTHREAD *v29; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v30; // [rsp+68h] [rbp-B0h]
  char v31; // [rsp+6Ah] [rbp-AEh]
  int v32; // [rsp+6Bh] [rbp-ADh]
  char v33; // [rsp+6Fh] [rbp-A9h]
  ULONG_PTR v34; // [rsp+70h] [rbp-A8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-A0h]
  PRKEVENT Event; // [rsp+80h] [rbp-98h]
  __int64 v37; // [rsp+88h] [rbp-90h]
  __int64 v38; // [rsp+90h] [rbp-88h]
  struct _DRIVER_OBJECT *v39; // [rsp+98h] [rbp-80h]
  __int64 v40; // [rsp+A0h] [rbp-78h]
  int v41; // [rsp+A8h] [rbp-70h]
  int v42; // [rsp+ACh] [rbp-6Ch]
  _QWORD v43[4]; // [rsp+B0h] [rbp-68h] BYREF
  int v44; // [rsp+D0h] [rbp-48h]
  int v45; // [rsp+D4h] [rbp-44h]
  __int64 v46; // [rsp+D8h] [rbp-40h]
  __int64 v47; // [rsp+E0h] [rbp-38h]
  PIRP Irp; // [rsp+130h] [rbp+18h] BYREF

  v32 = 0;
  v33 = 0;
  v42 = 0;
  v43[1] = 0LL;
  v45 = 0;
  v15 = 0LL;
  Irp = 0LL;
  v29 = 0LL;
  v30 = 0;
  v31 = 1;
  v34 = BugCheckParameter2;
  DeviceObject = 0LL;
  Event = 0LL;
  v37 = a3;
  v38 = a4;
  v16 = DriverObject;
  v39 = DriverObject;
  v40 = a6;
  v41 = a7;
  v43[0] = 0LL;
  v43[2] = a11;
  v43[3] = a12;
  v44 = a13;
  v46 = a14;
  v47 = 0LL;
  result = IopValidateAndGetWriteParameters(&v29, a2, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    if ( !HIBYTE(v30) || !*(_QWORD *)(BugCheckParameter2 + 48) )
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
    v21 = guard_dispatch_icall_no_overrides(BugCheckParameter2, (__int64)v43);
    if ( v15 )
      VfFastIoCheckState(v15, FastIoWrite);
    if ( v21 && !(_DWORD)Src )
    {
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2EE0u);
      v23 = KeGetCurrentThread();
      v24 = DWORD2(Src);
      v23->WriteTransferCount += DWORD2(Src);
      __addgsqword(0x2EF0u, v24);
      if ( (_BYTE)v30 )
        RtlCopyToUser(v16, &Src, 0x10uLL);
      else
        RtlCopyVolatileMemory(v16, &Src, 0x10uLL);
      v27 = Event;
      if ( Event )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 80) & 0x8000000) == 0 )
        {
          KeSetEvent(Event, 0, 0);
          v27 = Event;
        }
        ObfDereferenceObject(v27);
      }
      IopReleaseFileObjectLock(BugCheckParameter2, v25, v26);
      ObfDereferenceObject((PVOID)BugCheckParameter2);
      return (unsigned int)Src;
    }
    else
    {
LABEL_3:
      result = IopAllocateAndPopulateWriteIrp((__int64)&v29, (__int64)&Irp, v18);
      if ( (int)result >= 0 )
        return IopSynchronousServiceTail(DeviceObject, Irp, BugCheckParameter2, v30, SHIBYTE(v30), 1);
    }
  }
  return result;
}
