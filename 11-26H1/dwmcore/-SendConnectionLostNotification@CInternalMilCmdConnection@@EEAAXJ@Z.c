/*
 * XREFs of ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x18022C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x18011560C (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z @ 0x1801A3DE0 (-TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801AAD1C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 */

void __fastcall CInternalMilCmdConnection::SendConnectionLostNotification(RTL_SRWLOCK *this)
{
  unsigned int i; // ebx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *MasterTableEntry; // rax
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v4; // rsi
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this + 16;
  CReadWriteLock::AcquireExclusive(this + 16);
  for ( i = 1; i < HIDWORD(this[7].Ptr); ++i )
  {
    MasterTableEntry = CChannelTable::TryGetMasterTableEntry((CChannelTable *)&this[6], i);
    v4 = MasterTableEntry;
    if ( MasterTableEntry )
    {
      SetEvent(*(HANDLE *)(*((_QWORD *)MasterTableEntry + 1) + 96LL));
      SetEvent(*((HANDLE *)v4 + 2));
    }
  }
  CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>((__int64 *)&v5);
}
