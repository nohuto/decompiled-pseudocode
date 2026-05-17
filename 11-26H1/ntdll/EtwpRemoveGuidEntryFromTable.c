/*
 * XREFs of EtwpRemoveGuidEntryFromTable @ 0x18010D7A0
 * Callers:
 *     EtwpDereferenceUmGuidEntry @ 0x18006D3C8 (EtwpDereferenceUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18006B8B0 (RtlRbRemoveNode.c)
 */

struct _TEB *__fastcall EtwpRemoveGuidEntryFromTable(__int64 a1, __int64 a2)
{
  void *UniqueThread; // rbx

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock, a2);
  EtwpProvLockOwner = (int)UniqueThread;
  RtlRbRemoveNode((__int64)&EtwpGuidEntryTable, a1);
  EtwpProvLockOwner = 0;
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
