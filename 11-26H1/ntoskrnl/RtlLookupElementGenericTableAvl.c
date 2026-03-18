/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x14042F140
 * Callers:
 *     IopCleanupFileObjectIosbRange @ 0x1407944C0 (IopCleanupFileObjectIosbRange.c)
 *     PiSwFindBusRelations @ 0x14090DE64 (PiSwFindBusRelations.c)
 *     PiSwStopDestroy @ 0x14090FEE8 (PiSwStopDestroy.c)
 *     PiDqQueryApplyObjectEvent @ 0x14098F6F0 (PiDqQueryApplyObjectEvent.c)
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140998C60 (PiCMGetRelatedDeviceInstance.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140999B20 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiDmGetObject @ 0x1409A2D70 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1409A47F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1409A6390 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiControlGetSetDeviceStatus @ 0x1409A74C0 (PiControlGetSetDeviceStatus.c)
 *     PiGetRelatedDevice @ 0x1409A8A10 (PiGetRelatedDevice.c)
 *     PiDmLookupObject @ 0x1409D92F0 (PiDmLookupObject.c)
 *     PiUpdateDriverDBCache @ 0x140A24D48 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x140A25C14 (PiLookupInDDBCache.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140A3CEBC (PopDirectedDripsUmMarkTestDevices.c)
 *     SshpCacheLookupBlocker @ 0x140A899FC (SshpCacheLookupBlocker.c)
 *     PiDcHandleDeviceEvent @ 0x140AD7178 (PiDcHandleDeviceEvent.c)
 *     PopPowerRequestTableLookupEntry @ 0x140AFDC50 (PopPowerRequestTableLookupEntry.c)
 *     PiSwFindSwDevice @ 0x140B23A48 (PiSwFindSwDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rsi
  _RTL_BALANCED_LINKS *i; // rbx
  int v6; // eax
  int v7; // eax
  _RTL_BALANCED_LINKS *v8; // rbx

  v2 = 0LL;
  i = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        v6 = guard_dispatch_icall_no_overrides(Table, Buffer);
        if ( !v6 )
          break;
        if ( v6 != 1 )
        {
          v7 = 1;
          goto LABEL_10;
        }
        if ( !i->RightChild )
        {
          v7 = 3;
          goto LABEL_10;
        }
        i = i->RightChild;
      }
      if ( !i->LeftChild )
        break;
    }
    v7 = 2;
  }
  else
  {
    v7 = 0;
  }
LABEL_10:
  v8 = i + 1;
  if ( v7 == 1 )
    return v8;
  return v2;
}
