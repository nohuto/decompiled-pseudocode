/*
 * XREFs of NdisIfGetInterfaceIndexFromNetLuid @ 0x140053EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisIfGetInterfaceIndexFromNetLuid(NET_LUID NetLuid, PNET_IFINDEX pIfIndex)
{
  NDIS_STATUS v4; // edi
  KIRQL v5; // r8
  _DEVICE_OBJECT *i; // rax

  *pIfIndex = 0;
  v4 = -1071448021;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  for ( i = *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize;
        i != (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize;
        i = *(_DEVICE_OBJECT **)&i->Type )
  {
    if ( i->Queue.ListEntry.Flink == (_LIST_ENTRY *)NetLuid.Value )
    {
      v4 = 0;
      *pIfIndex = HIDWORD(i[-4].Queue.Wcb.DeviceContext);
      break;
    }
    if ( i->Queue.ListEntry.Flink > (_LIST_ENTRY *)NetLuid.Value )
      break;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v5);
  return v4;
}
