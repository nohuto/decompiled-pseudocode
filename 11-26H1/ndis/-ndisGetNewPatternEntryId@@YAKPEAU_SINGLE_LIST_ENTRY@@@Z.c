/*
 * XREFs of ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140074560
 * Callers:
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400214B0 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B62F4 (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B85CC (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetNewPatternEntryId(struct _SINGLE_LIST_ENTRY *a1)
{
  _SINGLE_LIST_ENTRY *Next; // r8
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // r9d

  Next = a1->Next;
  v2 = 0;
  v3 = 0;
  if ( Next )
  {
    do
    {
      v4 = (unsigned int)Next[5].Next;
      if ( v4 > v2 + 1 )
        break;
      Next = Next->Next;
      v2 = v4;
      v3 = v4;
    }
    while ( Next );
    if ( v3 == 65279 )
      NT_ASSERT("0x0000FF00 != PrevId + 1");
  }
  return v2 + 1;
}
