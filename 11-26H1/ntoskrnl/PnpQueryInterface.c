/*
 * XREFs of PnpQueryInterface @ 0x1409DB9B4
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x1405DE598 (PnprQueryReplaceFeatures.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140774EE0 (IopQueryBusResourceUpdateInterface.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1407A4504 (PiGetDmaAdapterFromBusInterface.c)
 *     PnprIdentifyUnits @ 0x1407B23BC (PnprIdentifyUnits.c)
 *     PipUnprotectDevice @ 0x1407B7F58 (PipUnprotectDevice.c)
 *     PnpQueryExtendedAddress @ 0x1409DB148 (PnpQueryExtendedAddress.c)
 *     PiIommuGetInterface @ 0x1409DB224 (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x1409DB334 (PnpGetDeviceLocationStrings.c)
 *     IopQueryInterfaceRecurseUp @ 0x1409DBF3C (IopQueryInterfaceRecurseUp.c)
 *     IoQueryInterface @ 0x1409DC050 (IoQueryInterface.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1409DC0E8 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026F250 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404AD760 (IopBuildAsynchronousFsdRequest.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PnpQueryInterface(
        _QWORD *Object,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rsi
  __int64 v11; // rdx
  IRP *v12; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v14; // ebx
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v16 = 0LL;
  if ( a4 < 0x20u )
    return 3221225485LL;
  memset_0(a6, 0, a4);
  *a6 = a4;
  a6[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(Object, 0x49706E50u);
  v12 = (IRP *)IopBuildAsynchronousFsdRequest(
                 0x1Bu,
                 (__int64)AttachedDeviceReferenceWithTag,
                 0LL,
                 0,
                 0LL,
                 (__int64)&v16);
  if ( v12 )
  {
    v12->UserEvent = &Event;
    IopQueueThreadIrp((__int64)v12, v11);
    CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
    v12->RequestorMode = 0;
    v12->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = a4;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = a5;
    v14 = IofCallDriver(AttachedDeviceReferenceWithTag, v12);
    if ( v14 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v14 = v16;
    }
  }
  else
  {
    v14 = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x49706E50u);
  return v14;
}
