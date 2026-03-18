/*
 * XREFs of ??1CTokenManager@@AEAA@XZ @ 0x1400A1040
 * Callers:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1400A1150 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1400371B8 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x14005FCF0 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x1400614C4 (-DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x140061580 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x140061DC8 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::~CTokenManager(CTokenManager *this, unsigned int a2)
{
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  char *v7; // rsi
  char *v8; // rbx
  char *v9; // rax
  __int64 v10; // rcx

  *(_QWORD *)this = &CTokenManager::`vftable';
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
    ObCloseHandle(v3, 0);
  v4 = (void *)*((_QWORD *)this + 9);
  if ( v4 )
    ObCloseHandle(v4, 0);
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
    MmUnmapViewInSessionSpace(v5);
  v6 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 7) = 0LL;
  if ( v6 )
    ObfDereferenceObject(v6);
  CTokenManager::DeleteAllLegacyTokenBuffers(this, a2);
  CTokenManager::DeleteAllCompositionTokens(this);
  CTokenManager::DeleteAllFlipManagerTokens(this);
  v7 = (char *)this + 328;
  while ( 1 )
  {
    v9 = *(char **)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v10 = *(_QWORD *)v9, *(char **)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *(_QWORD *)v7 = v10;
    *(_QWORD *)(v10 + 8) = v7;
    if ( v9 == v7 )
      break;
    v8 = v9 - 8;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v9 - 1) + 56LL))(v9 - 8);
    (**(void (__fastcall ***)(char *, __int64))v8)(v8, 1LL);
  }
  CTokenManager::DeleteAllTokenQueues(this);
  CAdapterCollection::InternalDiscard((CTokenManager *)((char *)this + 104));
}
