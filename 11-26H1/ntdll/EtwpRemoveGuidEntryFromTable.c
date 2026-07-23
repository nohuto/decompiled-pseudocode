/*
 * XREFs of EtwpRemoveGuidEntryFromTable @ 0x18010D2F0
 * Callers:
 *     EtwpDereferenceUmGuidEntry @ 0x18008D818 (EtwpDereferenceUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18008BD00 (RtlRbRemoveNode.c)
 */

void __fastcall EtwpRemoveGuidEntryFromTable(PRTL_BALANCED_NODE Node)
{
  void *UniqueThread; // rbx

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  EtwpProvLockOwner = (int)UniqueThread;
  RtlRbRemoveNode(&EtwpGuidEntryTable, Node);
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
