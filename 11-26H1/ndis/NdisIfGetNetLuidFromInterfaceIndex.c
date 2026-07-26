/*
 * XREFs of NdisIfGetNetLuidFromInterfaceIndex @ 0x1400CE7D0
 * Callers:
 *     ?ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z @ 0x140147148 (-ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisIfGetNetLuidFromInterfaceIndex(NET_IFINDEX ifIndex, PNET_LUID pNetLuid)
{
  NDIS_STATUS v4; // ebx
  KIRQL v5; // al
  unsigned __int16 *i; // rdx

  pNetLuid->Value = 0LL;
  v4 = -1071448021;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  for ( i = *(unsigned __int16 **)&WPP_MAIN_CB.SectorSize; i != &WPP_MAIN_CB.SectorSize; i = *(unsigned __int16 **)i )
  {
    if ( *((_DWORD *)i - 307) == ifIndex )
    {
      v4 = 0;
      pNetLuid->Value = *(_QWORD *)(i + 40);
      break;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v5);
  return v4;
}
