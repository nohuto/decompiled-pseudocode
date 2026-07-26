/*
 * XREFs of ndisEtwRundownProtocolDrivers @ 0x140098FCC
 * Callers:
 *     ndisEtwWriteRundown @ 0x140099830 (ndisEtwWriteRundown.c)
 * Callees:
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x14005B870 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x14005C6F0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisEtwWriteProtocolDriverRundown@@YAXPEBU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140099748 (-ndisEtwWriteProtocolDriverRundown@@YAXPEBU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 */

void ndisEtwRundownProtocolDrivers()
{
  KIRQL v0; // al
  struct _NDIS_PROTOCOL_BLOCK *v1; // rbx
  KIRQL v2; // di
  int v3; // r9d

  v0 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  v1 = ndisProtocolList;
  v2 = v0;
  while ( v1 )
  {
    if ( ndisReferenceProtocol(v1, 0xFu) )
    {
      KeReleaseSpinLock(&ndisProtocolListLock, v2);
      ndisEtwWriteProtocolDriverRundown(v1);
      v2 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
      ndisDereferenceProtocol(v1, 1, 0xFu, v3);
    }
    v1 = v1->NextProtocol;
  }
  KeReleaseSpinLock(&ndisProtocolListLock, v2);
}
