/*
 * XREFs of ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008C950
 * Callers:
 *     ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x14001DDE0 (-ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQU.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B62F4 (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B81B8 (-ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIsWoLPacketTypeSupported(enum _NDIS_PM_WOL_PACKET a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  unsigned int v7; // eax

  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 != 1 )
            return 0;
          LOBYTE(v7) = BYTE2(a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns);
        }
        else
        {
          v7 = a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns >> 3;
        }
      }
      else
      {
        v7 = a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns >> 2;
      }
    }
    else
    {
      v7 = a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns >> 1;
    }
  }
  else
  {
    LOBYTE(v7) = a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns;
  }
  return v7 & 1;
}
