/*
 * XREFs of NvmeNamespaceUpdateDiskProperties @ 0x1400C6CD4
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeNamespaceUpdateDiskProperties(__int64 a1)
{
  int v1; // eax
  int v3; // eax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v6; // rax
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v1 = *(_DWORD *)(a1 + 112);
  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( (v1 & 0x400) == 0 )
    return 3221225860LL;
  v3 = *(_DWORD *)(a1 + 96);
  if ( v3 != 1 && (unsigned int)(v3 - 3) > 1 )
    return 3221225860LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(a1 + 8));
  if ( !AttachedDeviceReference )
    return 3221225473LL;
  v6 = IoBuildDeviceIoControlRequest(0x70140u, AttachedDeviceReference, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( v6 )
  {
    Status = IofCallDriver(AttachedDeviceReference, v6);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
