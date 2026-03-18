/*
 * XREFs of DpiFdoHandleRemoveDevice @ 0x14041A370
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     DpiCheckSpbResourceLeakage @ 0x140093730 (DpiCheckSpbResourceLeakage.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x140194A18 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoRemoveChildDescriptors @ 0x140245DB0 (DpiFdoRemoveChildDescriptors.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x140254F00 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoDestroyPendingPdoObjects @ 0x140255FE0 (DpiPdoDestroyPendingPdoObjects.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     DpiDxgkDdiRemoveDevice @ 0x14041A7F0 (DpiDxgkDdiRemoveDevice.c)
 *     DpiFdoResetFdo @ 0x140424504 (DpiFdoResetFdo.c)
 */

__int64 __fastcall DpiFdoHandleRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rbx
  __int64 v5; // r14
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  PVOID *v11; // rax
  __int64 v12; // rcx
  void *v13; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  void *v17; // rcx
  int v18; // eax
  struct _IO_WORKITEM *v19; // rcx
  void (__fastcall *v20)(_QWORD); // rax
  void (__fastcall *v21)(_QWORD); // rax
  void (__fastcall *v22)(_QWORD); // rax
  void (__fastcall *v23)(_QWORD); // rax
  unsigned int v24; // ebp
  PVOID v25; // rsi
  struct SYSMM_ADAPTER *v26; // rcx

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_140169078 == DeviceObject )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6997;
    qword_140169078 = 0LL;
  }
  ReleaseMiniportListMutex();
  if ( DeviceExtension && *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    v6 = *((_DWORD *)DeviceExtension + 5);
    if ( v6 == 2 || v6 == 3 )
    {
      v7 = *((_DWORD *)DeviceExtension + 60);
      if ( v7 == 1 || v7 == 2 )
        DpiFdoHandleStopDevice(DeviceObject, Irp);
    }
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
      DpiPdoDestroyPendingPdoObjects((__int64)DeviceObject);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Irp, 0x20u);
  if ( DeviceExtension && *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DpiFdoRemoveChildDescriptors((__int64)DeviceObject);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v8 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v8;
  *((_DWORD *)DeviceExtension + 59) = 7;
  AcquireMiniportListMutex();
  if ( DpiFdoIsPostDevice((__int64)DeviceObject) )
    qword_140169080 = 0LL;
  if ( DpiFdoIsMsBddAnchoredDevice(v9) )
    qword_140169128 = 0LL;
  ReleaseMiniportListMutex();
  KeWaitForSingleObject((PVOID)(v5 + 72), Executive, 0, 0, 0LL);
  v10 = *(_QWORD **)DeviceExtension;
  if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
    || (v11 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v11 != DeviceExtension) )
  {
    __fastfail(3u);
  }
  *v11 = v10;
  v10[1] = v11;
  --*(_DWORD *)(v5 + 128);
  v12 = *((_QWORD *)DeviceExtension + 21);
  if ( *(_DWORD *)(v12 + 104) == 1 )
  {
    ExDeleteResourceLite((PERESOURCE)v12);
    v13 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)DeviceExtension + 21) = 0LL;
    }
  }
  if ( DeviceExtension )
  {
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
    {
      v14 = *((_DWORD *)DeviceExtension + 5);
      if ( v14 == 2 || v14 == 3 )
      {
        v15 = (_DWORD *)*((_QWORD *)DeviceExtension + 185);
        if ( v15[2] == 1 && v15 )
        {
          ExFreePoolWithTag(v15, 0);
          *((_QWORD *)DeviceExtension + 185) = 0LL;
        }
        v16 = (_DWORD *)*((_QWORD *)DeviceExtension + 186);
        if ( v16[2] == 1 && v16 )
        {
          ExFreePoolWithTag(v16, 0);
          *((_QWORD *)DeviceExtension + 186) = 0LL;
        }
        if ( *((_DWORD *)DeviceExtension + 126) )
          DpiLdaUnLinkDeviceFromChain((__int64)DeviceObject);
        v17 = (void *)*((_QWORD *)DeviceExtension + 139);
        if ( v17 )
        {
          ExFreePoolWithTag(v17, 0);
          *((_QWORD *)DeviceExtension + 139) = 0LL;
        }
        DpiCheckSpbResourceLeakage((__int64)DeviceExtension);
      }
    }
  }
  KeReleaseMutex((PRKMUTEX)(v5 + 72), 0);
  if ( DeviceExtension && *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    v18 = *((_DWORD *)DeviceExtension + 5);
    if ( v18 == 2 )
    {
      DpiFdoResetFdo(DeviceObject);
    }
    else if ( v18 != 3 )
    {
      goto LABEL_60;
    }
    v19 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 346);
    if ( v19 )
    {
      IoFreeWorkItem(v19);
      *((_QWORD *)DeviceExtension + 346) = 0LL;
    }
    if ( DeviceExtension[1157] == 1 )
      DpiAcpiUnregisterAcpiCallbacks((__int64)DeviceObject);
    v20 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 73);
    if ( v20 )
    {
      v20(*((_QWORD *)DeviceExtension + 71));
      memset(DeviceExtension + 560, 0, 0x40uLL);
    }
    v21 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 81);
    if ( v21 )
    {
      v21(*((_QWORD *)DeviceExtension + 79));
      *((_OWORD *)DeviceExtension + 39) = 0LL;
      *((_OWORD *)DeviceExtension + 40) = 0LL;
      *((_OWORD *)DeviceExtension + 41) = 0LL;
    }
    v22 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 87);
    if ( v22 )
    {
      v22(*((_QWORD *)DeviceExtension + 85));
      memset(DeviceExtension + 672, 0, 0xB8uLL);
    }
    v23 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 110);
    if ( v23 )
    {
      v23(*((_QWORD *)DeviceExtension + 108));
      memset(DeviceExtension + 856, 0, 0x58uLL);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 32);
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 33);
    KeSetEvent((PRKEVENT)(DeviceExtension + 1288), 0, 0);
  }
LABEL_60:
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = 0;
  v24 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  DpiDxgkDdiRemoveDevice(v5, *((_QWORD *)DeviceExtension + 6));
  if ( DeviceExtension )
  {
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v25 = DeviceObject->DeviceExtension;
      v26 = (struct SYSMM_ADAPTER *)*((_QWORD *)v25 + 728);
      if ( v26 )
      {
        SysMmDestroyAdapter(v26);
        *((_QWORD *)v25 + 728) = 0LL;
      }
    }
  }
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 20));
  IoDeleteDevice(DeviceObject);
  return v24;
}
