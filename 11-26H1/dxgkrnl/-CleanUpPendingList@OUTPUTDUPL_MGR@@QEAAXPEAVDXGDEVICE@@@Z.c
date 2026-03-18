/*
 * XREFs of ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402C7424
 * Callers:
 *     OutputDuplCleanUpPendingList @ 0x14035B7CC (OutputDuplCleanUpPendingList.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x14007F970 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECE1C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x14036C144 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x14036C388 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::CleanUpPendingList(struct _KTHREAD **this, struct DXGDEVICE *a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rcx
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KTHREAD *v10; // r14
  struct _KTHREAD *v11; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v17; // rcx
  OUTPUTDUPL_MGR *v18; // rcx
  __int64 v19; // rcx
  struct _KTHREAD **v20; // rax
  struct _KTHREAD *v21; // r12
  struct _KTHREAD *v22; // rsi
  struct _KTHREAD *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rax
  const wchar_t *v26; // r9

  v2 = 0;
  if ( *this )
  {
    v5 = *((_QWORD *)*this + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1469;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
        1469LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( *this )
  {
    v6 = *((_QWORD *)*this + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v6 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 168)) )
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
  v7 = (char *)(this + 3);
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
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(this + 3), v8, v9);
    ExAcquirePushLockExclusiveEx(this + 3, 0LL);
  }
  v10 = (struct _KTHREAD *)(this + 7);
  this[4] = KeGetCurrentThread();
  v11 = this[7];
  while ( v11 != v10 )
  {
    v21 = v11;
    v22 = v11;
    v23 = v11;
    v11 = *(struct _KTHREAD **)v11;
    if ( a2 && a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice(v22) )
    {
      if ( *((_DWORD *)v22 + 10) )
      {
        do
          DXGDXGIKEYEDMUTEX::CloseFromDevice(*((DXGDXGIKEYEDMUTEX **)v23 + v2++ + 6), v24);
        while ( v2 < *((_DWORD *)v22 + 10) );
      }
      v2 = 0;
    }
    if ( !OUTPUTDUPL_CONTEXT::GetProducerDevice(v22) )
    {
      v19 = *(_QWORD *)v21;
      if ( *(struct _KTHREAD **)(*(_QWORD *)v21 + 8LL) != v22
        || (v20 = (struct _KTHREAD **)*((_QWORD *)v22 + 1), *v20 != v22) )
      {
        __fastfail(3u);
      }
      *v20 = (struct _KTHREAD *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(v22);
    }
  }
  *((_QWORD *)v7 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v13, v14, v15);
  if ( !SessionData )
  {
    WdLogSingleEntry0(2LL);
    v25 = 3956LL;
    v26 = L"DXGSESSIONDATA is NULL";
LABEL_34:
    WdLogGlobalForLineNumber = v25;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v26, v25, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  v17 = *((_QWORD *)SessionData + 1);
  if ( !v17 )
  {
    WdLogSingleEntry0(2LL);
    v25 = 3963LL;
    v26 = L"OUTPUTDUPL_SESSION_MGR is NULL";
    goto LABEL_34;
  }
  v18 = *(OUTPUTDUPL_MGR **)(v17 + 120);
  if ( v18 )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(v18, a2, 0);
}
