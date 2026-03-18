/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140999B20
 * Callers:
 *     NtReplacePartitionUnit @ 0x14071EC70 (NtReplacePartitionUnit.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407A7DB0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14090AD94 (PnpQueueQueryAndRemoveEvent.c)
 *     PiSwProcessRemove @ 0x14090B360 (PiSwProcessRemove.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 *     PiCMDeviceAction @ 0x14098CC84 (PiCMDeviceAction.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140998C60 (PiCMGetRelatedDeviceInstance.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiGetRelatedDevice @ 0x1409A8A10 (PiGetRelatedDevice.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 *     PiSwGetChildPdo @ 0x140A7AAD4 (PiSwGetChildPdo.c)
 *     PiSwIrpCleanup @ 0x140A7AF04 (PiSwIrpCleanup.c)
 *     PiSwCloseDevice @ 0x140A7B100 (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 *     PiControlGetPropertyData @ 0x140A8E690 (PiControlGetPropertyData.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140A97BAC (IopDeviceObjectFromSymbolicName.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     PiQueryDeviceRelations @ 0x140AC9E30 (PiQueryDeviceRelations.c)
 *     PiGetDeviceDepth @ 0x140AD6F94 (PiGetDeviceDepth.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF6F40 (PnpIsDeviceInstanceEnabled.c)
 *     PnpDriverLoadingFailed @ 0x140B4655C (PnpDriverLoadingFailed.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 *     PiQueueDeviceRequest @ 0x140B60570 (PiQueueDeviceRequest.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140CC12F4 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     RtlLookupElementGenericTableAvl @ 0x14042F140 (RtlLookupElementGenericTableAvl.c)
 */

_QWORD *__fastcall PnpDeviceObjectFromDeviceInstanceWithTag(__int64 a1, ULONG a2)
{
  _QWORD *v2; // rbx
  _QWORD **v4; // rax
  __int64 v5; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  v2 = 0LL;
  Buffer[0] = 0LL;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v4 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( v4 )
  {
    v2 = *v4;
    if ( *v4 )
    {
      if ( *(_WORD *)v2 == 3 && (v5 = *(_QWORD *)(v2[39] + 40LL)) != 0 && *(_QWORD **)(v5 + 32) == v2 )
        ObfReferenceObjectWithTag(v2, a2);
      else
        v2 = 0LL;
    }
  }
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
