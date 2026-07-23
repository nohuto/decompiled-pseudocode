/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x14041C050
 * Callers:
 *     IopCleanupFileObjectIosbRange @ 0x140796FF0 (IopCleanupFileObjectIosbRange.c)
 *     PiDqQueryApplyObjectEvent @ 0x140950150 (PiDqQueryApplyObjectEvent.c)
 *     PiPnpRtlObjectEventWorker @ 0x1409517A4 (PiPnpRtlObjectEventWorker.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409596C0 (PiCMGetRelatedDeviceInstance.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140965250 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140966DF0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiControlGetSetDeviceStatus @ 0x140967F20 (PiControlGetSetDeviceStatus.c)
 *     PiGetRelatedDevice @ 0x140969420 (PiGetRelatedDevice.c)
 *     PiDmLookupObject @ 0x1409AA1E0 (PiDmLookupObject.c)
 *     PiSwFindBusRelations @ 0x1409AFF94 (PiSwFindBusRelations.c)
 *     PiSwStopDestroy @ 0x1409B2018 (PiSwStopDestroy.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1409F88DC (PopDirectedDripsUmMarkTestDevices.c)
 *     PiUpdateDriverDBCache @ 0x140A37858 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x140A38CB4 (PiLookupInDDBCache.c)
 *     SshpCacheLookupBlocker @ 0x140A908EC (SshpCacheLookupBlocker.c)
 *     PiDcHandleDeviceEvent @ 0x140AD3C20 (PiDcHandleDeviceEvent.c)
 *     PopPowerRequestTableLookupEntry @ 0x140AFFCC0 (PopPowerRequestTableLookupEntry.c)
 *     PiSwFindSwDevice @ 0x140B25E48 (PiSwFindSwDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
