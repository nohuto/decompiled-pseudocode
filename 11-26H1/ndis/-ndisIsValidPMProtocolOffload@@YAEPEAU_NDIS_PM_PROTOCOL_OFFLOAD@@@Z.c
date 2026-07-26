/*
 * XREFs of ?ndisIsValidPMProtocolOffload@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x14001FB20
 * Callers:
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F390 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z @ 0x14001FC70 (-ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z.c)
 */

bool __fastcall ndisIsValidPMProtocolOffload(struct _NDIS_PM_PROTOCOL_OFFLOAD *a1)
{
  UCHAR Revision; // al
  USHORT v2; // ax
  __int64 v3; // r8

  if ( a1->Header.Type != 0x80 )
    return 0;
  Revision = a1->Header.Revision;
  if ( Revision == 1 )
  {
    v2 = 240;
  }
  else
  {
    if ( Revision != 2 )
      return 0;
    v2 = 256;
  }
  return a1->Header.Size >= v2
      && ndisIsValidPmCountedString(&a1->FriendlyName)
      && !*(_DWORD *)(v3 + 152)
      && (*(_DWORD *)(v3 + 12) == 1 || *(_DWORD *)(v3 + 12) == 2 || (unsigned int)(*(_DWORD *)(v3 + 12) - 3) < 2);
}
