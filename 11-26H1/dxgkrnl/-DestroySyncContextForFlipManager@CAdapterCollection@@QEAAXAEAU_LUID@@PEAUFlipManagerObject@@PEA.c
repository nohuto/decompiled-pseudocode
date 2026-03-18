/*
 * XREFs of ?DestroySyncContextForFlipManager@CAdapterCollection@@QEAAXAEAU_LUID@@PEAUFlipManagerObject@@PEA_N@Z @ 0x1400A1490
 * Callers:
 *     ?DestroySyncContextForFlipManager@CTokenManager@@UEAAXAEAU_LUID@@PEAUFlipManagerObject@@@Z @ 0x1400A1330 (-DestroySyncContextForFlipManager@CTokenManager@@UEAAXAEAU_LUID@@PEAUFlipManagerObject@@@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x140037180 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z @ 0x1400A2008 (-FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CAdapterCollection::DestroySyncContextForFlipManager(
        CAdapterCollection *this,
        struct _LUID *a2,
        struct FlipManagerObject *a3,
        bool *a4)
{
  CPushLockCriticalSection *v4; // rbp
  char *v9; // rdx
  char *i; // r10
  __int64 v11; // rbx
  struct CAdapter::FlipManagerSyncContext *v12; // rax
  struct CAdapter::FlipManagerSyncContext *v13; // rdi
  __int64 Win32kImportTable; // rax
  struct FlipManagerObject *Buffer; // [rsp+20h] [rbp-18h] BYREF
  int v16; // [rsp+28h] [rbp-10h]
  char v17; // [rsp+2Ch] [rbp-Ch]

  v4 = (CAdapterCollection *)((char *)this + 40);
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  v9 = (char *)this + 24;
  *((_BYTE *)v4 + 8) = 1;
  for ( i = (char *)*((_QWORD *)this + 3); i != v9; i = *(char **)i )
  {
    v11 = (unsigned __int64)(i - 8) & -(__int64)(i != 0LL);
    if ( a2->LowPart == *(_DWORD *)(v11 + 0x18)
      && a2->HighPart == *(_DWORD *)(((unsigned __int64)(i - 8) & -(__int64)(i != 0LL)) + 0x1C) )
    {
      Buffer = a3;
      v16 = 0;
      v17 = 0;
      v12 = (struct CAdapter::FlipManagerSyncContext *)RtlLookupElementGenericTable(
                                                         (PRTL_GENERIC_TABLE)(v11 + 120),
                                                         &Buffer);
      *a4 = 0;
      v13 = v12;
      if ( v12 )
      {
        Win32kImportTable = DxgkGetWin32kImportTable();
        if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
        {
          CAdapter::FreeFlipManagerSyncContext((CAdapter *)v11, v13);
        }
        else
        {
          *((_BYTE *)v13 + 12) = 1;
          *a4 = 1;
        }
      }
      break;
    }
  }
  CPushLockCriticalSection::Release(v4);
}
