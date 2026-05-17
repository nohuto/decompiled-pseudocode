/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x18006D3C8
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180102F40 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpRemoveGuidEntryFromTable @ 0x18010D7A0 (EtwpRemoveGuidEntryFromTable.c)
 */

__int64 __fastcall EtwpDereferenceUmGuidEntry(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(a1);
    EtwpRemoveGuidEntryFromTable(a1);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
    if ( *(_QWORD *)(a1 + 168) )
      RtlFreeHeap_0();
    return RtlFreeHeap_0();
  }
  return result;
}
