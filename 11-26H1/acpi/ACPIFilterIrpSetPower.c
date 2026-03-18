/*
 * XREFs of ACPIFilterIrpSetPower @ 0x1400262F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x14001DAA0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x14002507C (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1400254E0 (ACPIDispatchForwardPowerIrp.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIBuildRegRequest @ 0x14002B4CC (ACPIBuildRegRequest.c)
 *     ACPIInternalCheckPowerReferences @ 0x1400448C4 (ACPIInternalCheckPowerReferences.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x14005CFCC (ACPIDeviceIrpWarmEjectRequest.c)
 */

__int64 __fastcall ACPIFilterIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  ULONG_PTR v3; // r13
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rbx
  __int64 *v7; // rbp
  _IO_STACK_LOCATION *v8; // rax
  _IO_STACK_LOCATION *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // r14
  void *v12; // r8
  __int64 v14; // rdx
  __int64 v15; // rsi
  KIRQL v16; // al
  _QWORD *v17; // r15
  _QWORD *v18; // r13
  _QWORD *v19; // rcx
  ULONG_PTR v20; // rsi
  KIRQL v21; // al
  int v22; // ecx
  void *v23; // r12
  KIRQL NewIrql; // [rsp+68h] [rbp+10h]

  v3 = a1;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  v7 = 0LL;
  CurrentStackLocation->Control |= 1u;
  if ( CurrentStackLocation->Parameters.Create.Options )
  {
    if ( !_bittest64((const signed __int64 *)(DeviceExtension + 8), 0x33u) )
      v7 = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 760), 1195725407);
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    {
      if ( !v7 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
        v8 = a2->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
        *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
        v8[-1].FileObject = v8->FileObject;
        v8[-1].Control = 0;
        v9 = a2->Tail.Overlay.CurrentStackLocation;
        v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIDeviceIrpDeviceFilterRequest;
        v9[-1].Context = ACPIDeviceIrpCompleteRequest;
        v9[-1].Control = -32;
        PoCallDriver(*(PDEVICE_OBJECT *)(v6 + 776), a2);
        return 259LL;
      }
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
      ACPIBuildRegRequest(v3, a2, &ACPIDeviceIrpDelayedDeviceOffRequest);
LABEL_17:
      AMLIDereferenceHandleEx((__int64)v7);
      return 259LL;
    }
    *(_BYTE *)(v6 + 556) = 1;
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
    v10 = *(_QWORD **)(v6 + 416);
    while ( v10 )
    {
      v14 = v10[1];
      v10 = (_QWORD *)*v10;
      if ( (*(_DWORD *)(v14 + 16) & 0x810LL) == 0 )
        _InterlockedOr64((volatile signed __int64 *)(v14 + 16), 0x800uLL);
    }
    v11 = *(_QWORD **)(v6 + 416);
    if ( v11 )
    {
      do
      {
        v15 = v11[1];
        v11 = (_QWORD *)*v11;
        if ( (*(_BYTE *)(v15 + 16) & 0x10) == 0 )
        {
          v16 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v17 = *(_QWORD **)(v15 + 48);
          if ( v17 != (_QWORD *)(v15 + 48) )
          {
            v18 = (_QWORD *)(v15 + 48);
            do
            {
              v19 = v17;
              v17 = (_QWORD *)*v17;
              v20 = *(v19 - 1);
              if ( *((_DWORD *)v19 - 5) == 1 )
              {
                KeReleaseSpinLock(&AcpiPowerLock, v16);
                v21 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
                NewIrql = v21;
                if ( v20
                  && v20 != v6
                  && ((v22 = *(_DWORD *)(v20 + 368), v22 == 2) || v22 == 3)
                  && !*(_BYTE *)(v20 + 556)
                  && (v23 = *(void **)(v20 + 784)) != 0LL )
                {
                  ACPIInitReferenceDeviceExtension(v20);
                  ObfReferenceObject(v23);
                  KeReleaseSpinLock(&AcpiDeviceTreeLock, NewIrql);
                  if ( (unsigned __int8)ACPIInternalCheckPowerReferences(v20) == 1 )
                  {
                    *(_BYTE *)(v20 + 556) = 1;
                    PoFxNotifySurprisePowerOn(v23);
                  }
                  ObfDereferenceObject(v23);
                  ACPIInitDereferenceDeviceExtensionUnlocked(v20);
                }
                else
                {
                  KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
                }
                v16 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
              }
            }
            while ( v17 != v18 );
          }
          KeReleaseSpinLock(&AcpiPowerLock, v16);
        }
      }
      while ( v11 );
      v3 = a1;
    }
    v12 = &ACPIDeviceIrpDelayedDeviceOnRequest;
    if ( !v7 )
      v12 = &ACPIDeviceIrpForwardRequest;
    ACPIDeviceIrpDeviceRequest(v3, a2, v12);
    if ( v7 )
      goto LABEL_17;
  }
  else if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 728), 1u);
    ACPIDeviceIrpWarmEjectRequest(DeviceExtension, a2, &ACPIDeviceIrpForwardRequest, 0LL);
  }
  else
  {
    ACPIDispatchForwardPowerIrp(v3, a2);
  }
  return 259LL;
}
