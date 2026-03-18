/*
 * XREFs of ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18022C1B0
 * Callers:
 *     ??1CChannel@@AEAA@XZ @ 0x1802322A4 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x18011560C (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180116A94 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801AAD1C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x18022C80C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::DestroyChannel(RTL_SRWLOCK *this, unsigned int a2)
{
  CChannelTable *v2; // rsi
  int MasterTableEntry; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v8; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = (CChannelTable *)&this[6];
  v9 = this + 16;
  CReadWriteLock::AcquireExclusive(this + 16);
  v8 = 0LL;
  MasterTableEntry = CChannelTable::GetMasterTableEntry(v2, a2, &v8);
  v5 = MasterTableEntry;
  if ( MasterTableEntry >= 0 )
  {
    CChannelTable::DestroyHandle(v2, a2);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)(unsigned int)MasterTableEntry);
  }
  CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>((__int64 *)&v9);
  return v5;
}
