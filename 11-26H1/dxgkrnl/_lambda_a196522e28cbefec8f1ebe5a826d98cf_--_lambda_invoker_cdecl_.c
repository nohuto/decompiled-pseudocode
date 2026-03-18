/*
 * XREFs of _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1402C70B0
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

__int64 __fastcall lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(__int64 a1, struct DXGDEVICE *a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // r14
  _QWORD *v11; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v17; // rcx
  OUTPUTDUPL_MGR *v18; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // r12
  _QWORD *v23; // rsi
  _QWORD *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rax
  const wchar_t *v27; // r9

  v2 = 0;
  if ( *(_QWORD *)a1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
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
  if ( *(_QWORD *)a1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
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
  v7 = a1 + 24;
  if ( a1 != -24 && *(struct _KTHREAD **)(a1 + 32) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + 24, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(a1 + 24), v8, v9);
    ExAcquirePushLockExclusiveEx(a1 + 24, 0LL);
  }
  v10 = (_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 32) = KeGetCurrentThread();
  v11 = *(_QWORD **)(a1 + 56);
  while ( v11 != v10 )
  {
    v22 = v11;
    v23 = v11;
    v24 = v11;
    v11 = (_QWORD *)*v11;
    if ( a2 && a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v23) )
    {
      if ( *((_DWORD *)v23 + 10) )
      {
        do
          DXGDXGIKEYEDMUTEX::CloseFromDevice((DXGDXGIKEYEDMUTEX *)v24[v2++ + 6], v25);
        while ( v2 < *((_DWORD *)v23 + 10) );
      }
      v2 = 0;
    }
    if ( !OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v23) )
    {
      v20 = *v22;
      if ( *(_QWORD **)(*v22 + 8LL) != v23 || (v21 = (_QWORD *)v23[1], (_QWORD *)*v21 != v23) )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'((OUTPUTDUPL_CONTEXT *)v23);
    }
  }
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v13, v14, v15);
  if ( !SessionData )
  {
    WdLogSingleEntry0(2LL);
    v26 = 3956LL;
    v27 = L"DXGSESSIONDATA is NULL";
LABEL_35:
    WdLogGlobalForLineNumber = v26;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, v26, 0LL, 0LL, 0LL, 0LL);
    return 0LL;
  }
  v17 = *((_QWORD *)SessionData + 1);
  if ( !v17 )
  {
    WdLogSingleEntry0(2LL);
    v26 = 3963LL;
    v27 = L"OUTPUTDUPL_SESSION_MGR is NULL";
    goto LABEL_35;
  }
  v18 = *(OUTPUTDUPL_MGR **)(v17 + 120);
  if ( v18 )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(v18, a2, 0);
  return 0LL;
}
