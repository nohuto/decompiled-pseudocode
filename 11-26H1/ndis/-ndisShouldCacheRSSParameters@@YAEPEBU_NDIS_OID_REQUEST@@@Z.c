/*
 * XREFs of ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1400C28E0
 * Callers:
 *     ?ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140035780 (-ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BF3A0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400BFDF8 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisShouldCacheRSSParameters(const struct _NDIS_OID_REQUEST *a1)
{
  NDIS_OBJECT_HEADER Header; // edx
  unsigned __int8 result; // al

  if ( (*(_DWORD *)&a1->NdisReserved[16] & 0x4000) == 0 && a1->Header.Revision < 2u )
    return 1;
  if ( (a1[1].RequestType & 1) == 0 )
    return 1;
  Header = a1[1].Header;
  result = 0;
  if ( !*(_DWORD *)&Header || Header == -1 )
    return 1;
  return result;
}
