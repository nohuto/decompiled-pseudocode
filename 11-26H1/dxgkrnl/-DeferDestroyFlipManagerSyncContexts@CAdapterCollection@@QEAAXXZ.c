/*
 * XREFs of ?DeferDestroyFlipManagerSyncContexts@CAdapterCollection@@QEAAXXZ @ 0x1400A13EC
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1400224D0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x140037180 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z @ 0x1400A2008 (-FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z.c)
 */

void __fastcall CAdapterCollection::DeferDestroyFlipManagerSyncContexts(CAdapterCollection *this)
{
  CPushLockCriticalSection *v1; // rdi
  _QWORD **v2; // r14
  _QWORD *i; // rbx
  struct CAdapter::FlipManagerSyncContext *v4; // rax
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CAdapterCollection *)((char *)this + 40);
  v2 = (_QWORD **)((char *)this + 24);
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_BYTE *)v1 + 8) = 1;
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
LABEL_6:
    RestartKey = 0LL;
    while ( 1 )
    {
      v4 = (struct CAdapter::FlipManagerSyncContext *)RtlEnumerateGenericTableWithoutSplaying(
                                                        (PRTL_GENERIC_TABLE)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL))
                                                                           + 120),
                                                        &RestartKey);
      if ( !v4 )
        break;
      if ( *((_BYTE *)v4 + 12) )
      {
        CAdapter::FreeFlipManagerSyncContext((CAdapter *)((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)), v4);
        goto LABEL_6;
      }
    }
  }
  CPushLockCriticalSection::Release(v1);
}
