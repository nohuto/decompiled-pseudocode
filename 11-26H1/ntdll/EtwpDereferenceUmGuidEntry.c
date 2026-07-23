/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x18008D818
 * Callers:
 *     EtwDeliverDataBlock @ 0x18003CB30 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x1801022C0 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpRemoveGuidEntryFromTable @ 0x18010D2F0 (EtwpRemoveGuidEntryFromTable.c)
 */

LOGICAL __fastcall EtwpDereferenceUmGuidEntry(PRTL_BALANCED_NODE Node)
{
  LOGICAL result; // eax
  _RTL_BALANCED_NODE *v3; // r8

  result = _InterlockedExchangeAdd((volatile signed __int32 *)&Node[2].Left + 1, 0xFFFFFFFF);
  if ( result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(Node);
    EtwpRemoveGuidEntryFromTable(Node);
    LODWORD(Node[2].Children[0]) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&Node[1].16);
    v3 = Node[7].Children[0];
    if ( v3 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v3);
    return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Node);
  }
  return result;
}
