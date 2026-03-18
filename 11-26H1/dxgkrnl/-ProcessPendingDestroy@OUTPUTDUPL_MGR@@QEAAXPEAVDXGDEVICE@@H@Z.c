/*
 * XREFs of ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x14036C144
 * Callers:
 *     _lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_ @ 0x1401EC960 (_lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_--_lambda_invoker_cdecl_.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1402C70B0 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402C7424 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x14036B2C4 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x14036BB68 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x14036BBE8 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x14007F970 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECE1C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x14036C388 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingDestroy(struct _KTHREAD **this, struct DXGDEVICE *a2, int a3)
{
  struct _KTHREAD *v4; // rcx
  unsigned int v5; // ebp
  __int64 v7; // rcx
  char *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KTHREAD *v11; // r14
  struct _KTHREAD *v12; // rdi
  struct _KTHREAD *v13; // r12
  struct _KTHREAD *v14; // rsi
  struct _KTHREAD *v15; // r15
  __int64 v16; // rcx
  struct _KTHREAD **v17; // rax
  __int64 v18; // rdx

  v4 = *this;
  v5 = 0;
  if ( v4 )
  {
    v7 = *((_QWORD *)v4 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v7 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v7 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2331;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
        2331LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v8 = (char *)(this + 3);
  if ( this != (struct _KTHREAD **)-24LL && this[4] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 3, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(this + 3), v9, v10);
    ExAcquirePushLockExclusiveEx(this + 3, 0LL);
  }
  v11 = (struct _KTHREAD *)(this + 7);
  this[4] = KeGetCurrentThread();
  v12 = this[7];
  while ( v12 != v11 )
  {
    v13 = v12;
    v14 = v12;
    v15 = v12;
    v12 = *(struct _KTHREAD **)v12;
    if ( a2 && a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice(v14) )
    {
      if ( *((_DWORD *)v14 + 10) )
      {
        do
          DXGDXGIKEYEDMUTEX::CloseFromDevice(*((DXGDXGIKEYEDMUTEX **)v15 + v5++ + 6), v18);
        while ( v5 < *((_DWORD *)v14 + 10) );
      }
      v5 = 0;
    }
    if ( a3 || !OUTPUTDUPL_CONTEXT::GetProducerDevice(v14) )
    {
      v16 = *(_QWORD *)v13;
      if ( *(struct _KTHREAD **)(*(_QWORD *)v13 + 8LL) != v14
        || (v17 = (struct _KTHREAD **)*((_QWORD *)v14 + 1), *v17 != v14) )
      {
        __fastfail(3u);
      }
      *v17 = (struct _KTHREAD *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(v14);
    }
  }
  *((_QWORD *)v8 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
}
