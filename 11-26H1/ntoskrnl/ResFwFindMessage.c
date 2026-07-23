/*
 * XREFs of ResFwFindMessage @ 0x140C56D2C
 * Callers:
 *     BcpFindMessage @ 0x140D1A8AC (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x140A8DE20 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+48h] [rbp+10h] BYREF

  MessageEntry = 0LL;
  if ( *(_QWORD *)&gLoadedDiffHivesLock.AffinityPrimaryGroup
    && **(_QWORD **)&gLoadedDiffHivesLock.AffinityPrimaryGroup
    && RtlFindMessage(**(PVOID **)&gLoadedDiffHivesLock.AffinityPrimaryGroup, 0xBu, 0, MessageId, &MessageEntry) >= 0
    && (MessageEntry->Flags & 1) != 0 )
  {
    return MessageEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
