/*
 * XREFs of IopShutdownBaseFileSystems @ 0x140BF150C
 * Callers:
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1403EAEB0 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetAttachedDevice @ 0x14044F180 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IoBuildSynchronousFsdRequest @ 0x140AD5C20 (IoBuildSynchronousFsdRequest.c)
 */

LONG_PTR __fastcall IopShutdownBaseFileSystems(LONG_PTR **a1)
{
  LONG_PTR *v2; // rbx
  LONG_PTR result; // rax
  PDEVICE_OBJECT v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  PDEVICE_OBJECT AttachedDevice; // rbx
  IRP *v8; // rax
  LONG_PTR v9; // rax
  __int64 v10; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v2 = *a1;
  if ( (LONG_PTR **)(*a1)[1] != a1 || (result = *v2, *(LONG_PTR **)(*v2 + 8) != v2) )
LABEL_14:
    __fastfail(3u);
  *a1 = (LONG_PTR *)result;
  *(_QWORD *)(result + 8) = a1;
  while ( v2 != (LONG_PTR *)a1 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    PsReferenceSiloContext(v2 - 10);
    LOBYTE(v5) = 1;
    IopIncrementDeviceObjectRefCount((ULONG_PTR)(v2 - 10), v5, v6);
    AttachedDevice = (PDEVICE_OBJECT)(v2 - 10);
    v4 = AttachedDevice;
    if ( AttachedDevice->AttachedDevice )
      AttachedDevice = IoGetAttachedDevice(AttachedDevice);
    v8 = IoBuildSynchronousFsdRequest(0x10u, AttachedDevice, 0LL, 0, 0LL, &Object, &IoStatusBlock);
    if ( v8 && IofCallDriver(AttachedDevice, v8) == 259 )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v2 = *a1;
    if ( (LONG_PTR **)(*a1)[1] != a1 )
      goto LABEL_14;
    v9 = *v2;
    if ( *(LONG_PTR **)(*v2 + 8) != v2 )
      goto LABEL_14;
    *a1 = (LONG_PTR *)v9;
    *(_QWORD *)(v9 + 8) = a1;
    KeResetEvent(&Object);
    LOBYTE(v10) = 1;
    IopDecrementDeviceObjectRef((ULONG_PTR)v4, 0LL, v10);
    result = ObfDereferenceObject(v4);
  }
  return result;
}
