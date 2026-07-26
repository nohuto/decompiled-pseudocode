/*
 * XREFs of NdisMRegisterDevice @ 0x1401741A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

NDIS_STATUS __stdcall NdisMRegisterDevice(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_STRING DeviceName,
        PNDIS_STRING SymbolicName,
        PDRIVER_DISPATCH *MajorFunctions,
        PDEVICE_OBJECT *pDeviceObject,
        NDIS_HANDLE *NdisDeviceHandle)
{
  PDEVICE_OBJECT *v6; // r15
  NDIS_HANDLE *v7; // r12
  char *DriverObjectExtension; // rbp
  NTSTATUS SymbolicLink; // edi
  unsigned int v12; // ebx
  _WORD *DeviceExtension; // r13
  _QWORD *v14; // rbx
  PDRIVER_DISPATCH *v15; // rax
  __int128 v16; // xmm0
  void *v17; // rcx
  KSPIN_LOCK *v18; // rsi
  KIRQL v19; // al
  char *v20; // rbp
  __int64 v21; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp+8h] BYREF
  PDRIVER_DISPATCH *v24; // [rsp+98h] [rbp+20h]

  v24 = MajorFunctions;
  v6 = pDeviceObject;
  v7 = NdisDeviceHandle;
  DeviceObject = 0LL;
  *pDeviceObject = 0LL;
  *v7 = 0LL;
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)NdisWrapperHandle, (PVOID)0x4E4D4944);
  if ( !DriverObjectExtension )
    return -1073741637;
  SymbolicLink = IoCreateDevice(
                   *((PDRIVER_OBJECT *)DriverObjectExtension + 5),
                   SymbolicName->Length + 308 + DeviceName->Length,
                   DeviceName,
                   0x12u,
                   0x100u,
                   0,
                   &DeviceObject);
  if ( SymbolicLink >= 0 )
  {
    DeviceObject->Flags &= ~0x80u;
    SymbolicLink = IoCreateSymbolicLink(SymbolicName, DeviceName);
    if ( SymbolicLink >= 0 )
    {
      v12 = DeviceName->Length + 308 + SymbolicName->Length;
      DeviceExtension = DeviceObject->DeviceExtension;
      memset(DeviceExtension, 0, v12);
      DeviceExtension[1] = v12;
      *DeviceExtension = 265;
      v14 = DeviceExtension + 4;
      *((_QWORD *)DeviceExtension + 2) = DeviceExtension + 4;
      *((_QWORD *)DeviceExtension + 1) = DeviceExtension + 4;
      *((_QWORD *)DeviceExtension + 3) = DriverObjectExtension;
      *((_QWORD *)DeviceExtension + 4) = DeviceObject;
      v15 = v24;
      *((_OWORD *)DeviceExtension + 3) = *(_OWORD *)v24;
      *((_OWORD *)DeviceExtension + 4) = *((_OWORD *)v15 + 1);
      *((_OWORD *)DeviceExtension + 5) = *((_OWORD *)v15 + 2);
      *((_OWORD *)DeviceExtension + 6) = *((_OWORD *)v15 + 3);
      *((_OWORD *)DeviceExtension + 7) = *((_OWORD *)v15 + 4);
      *((_OWORD *)DeviceExtension + 8) = *((_OWORD *)v15 + 5);
      *((_OWORD *)DeviceExtension + 9) = *((_OWORD *)v15 + 6);
      v16 = *((_OWORD *)v15 + 7);
      v15 += 16;
      *((_OWORD *)DeviceExtension + 10) = v16;
      *((_OWORD *)DeviceExtension + 11) = *(_OWORD *)v15;
      *((_OWORD *)DeviceExtension + 12) = *((_OWORD *)v15 + 1);
      *((_OWORD *)DeviceExtension + 13) = *((_OWORD *)v15 + 2);
      *((_OWORD *)DeviceExtension + 14) = *((_OWORD *)v15 + 3);
      *((_OWORD *)DeviceExtension + 15) = *((_OWORD *)v15 + 4);
      *((_QWORD *)DeviceExtension + 32) = v15[10];
      *((_QWORD *)DeviceExtension + 35) = DeviceExtension + 152;
      DeviceExtension[136] = DeviceName->Length;
      DeviceExtension[137] = DeviceName->Length + 2;
      memmove(DeviceExtension + 152, DeviceName->Buffer, DeviceName->Length);
      v17 = (void *)(*((_QWORD *)DeviceExtension + 35) + (unsigned __int16)DeviceExtension[137]);
      *((_QWORD *)DeviceExtension + 37) = v17;
      DeviceExtension[144] = SymbolicName->Length;
      DeviceExtension[145] = SymbolicName->Length + 2;
      memmove(v17, SymbolicName->Buffer, SymbolicName->Length);
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      v18 = (KSPIN_LOCK *)(DriverObjectExtension + 392);
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DriverObjectExtension + 49);
      v20 = DriverObjectExtension + 80;
      v21 = *(_QWORD *)v20;
      if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 )
        __fastfail(3u);
      *v14 = v21;
      *((_QWORD *)DeviceExtension + 2) = v20;
      *(_QWORD *)(v21 + 8) = v14;
      *(_QWORD *)v20 = v14;
      KeReleaseSpinLock(v18, v19);
      ndisDereferencePackage((PVOID *)&ndisPkgs);
      *v6 = DeviceObject;
      *v7 = DeviceExtension;
    }
    else
    {
      IoDeleteDevice(DeviceObject);
    }
  }
  return SymbolicLink;
}
