/*
 * XREFs of ?XFilterAdjust@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@I@Z @ 0x140035530
 * Callers:
 *     ?ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140034460 (-ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C25A8 (-ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XFilterAdjust(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2, unsigned int a3)
{
  unsigned int v4; // eax
  _NDIS_OPEN_BLOCK *i; // rcx
  _NDIS_OPEN_BLOCK *j; // rcx
  _NDIS_OPEN_BLOCK *k; // rcx

  if ( a2 )
  {
    if ( a3 && (a3 & 0x10080) == 0x10080 )
      a3 &= ~0x10000u;
    a2->OldPacketFilters = a2->PacketFilters;
    a2->PacketFilters = a3;
  }
  a1->OldCombinedPacketFilter = a1->CombinedPacketFilter;
  v4 = 0;
  a1->CombinedPacketFilter = 0;
  for ( i = a1->OpenList; i; i = i->FilterNextOpen )
  {
    v4 |= i->PacketFilters;
    a1->CombinedPacketFilter = v4;
  }
  for ( j = a1->NoFTypeOpenList; j; j = j->FilterNextOpen )
  {
    v4 |= j->PacketFilters;
    a1->CombinedPacketFilter = v4;
  }
  for ( k = a1->FTypeOpenList; k; k = k->FilterNextOpen )
  {
    v4 |= k->PacketFilters;
    a1->CombinedPacketFilter = v4;
  }
  if ( (v4 & 0x10000) != 0 )
    a1->CombinedPacketFilter = v4 & 0xFFFEFFFF;
  return 259LL;
}
