/*
 * XREFs of ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x180116970
 * Callers:
 *     ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x1801172AC (-SyncFlushInternal@CChannel@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x18011560C (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180116A94 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801AAD1C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802015DC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::WaitForSyncFlush(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v2; // rbx
  int MasterTableEntry; // eax
  unsigned int v6; // edi
  void *v7; // rdi
  const char *v8; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 16;
  v14 = (struct CLIENT_CHANNEL_HANDLE_ENTRY *)&this[16];
  CReadWriteLock::AcquireExclusive(this + 16);
  if ( LOBYTE(this[3].Ptr) )
  {
    v14 = 0LL;
    MasterTableEntry = CChannelTable::GetMasterTableEntry((CChannelTable *)&this[6], a2, &v14);
    v6 = MasterTableEntry;
    if ( MasterTableEntry < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
        (const char *)(unsigned int)MasterTableEntry);
      if ( v2 )
      {
        LODWORD(v2[1].Ptr) = 0;
        ReleaseSRWLockExclusive(v2);
      }
      return v6;
    }
    else
    {
      v7 = (void *)*((_QWORD *)v14 + 2);
      if ( v2 )
      {
        LODWORD(v2[1].Ptr) = 0;
        ReleaseSRWLockExclusive(v2);
      }
      if ( WaitForSingleObject(v7, 0xFFFFFFFF) == -1 )
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0xBE,
                 (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
                 v8);
      else
        return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)0x88980416LL);
    CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(&v14, v10, v11, v12);
    return 2291663894LL;
  }
}
