/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x140330710
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1401D89D0 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1401EF878 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA?AU_LUID@@K@Z @ 0x140202EB8 (-GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA-AU_LUID@@K@Z.c)
 *     ?SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z @ 0x140204124 (-SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z.c)
 *     DxgkAcquireGdiViewIds @ 0x140204BA0 (DxgkAcquireGdiViewIds.c)
 *     DxgkCommitGdiViewIds @ 0x140204D64 (DxgkCommitGdiViewIds.c)
 *     DxgkReleaseGdiViewId @ 0x140205270 (DxgkReleaseGdiViewId.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x140330590 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        unsigned int a2)
{
  __int64 v2; // rsi
  bool v4; // zf
  DXGFASTMUTEX *v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rbx
  __int64 v9; // rdi
  struct _KTHREAD **v11; // [rsp+50h] [rbp-28h] BYREF
  char v12; // [rsp+58h] [rbp-20h]

  v2 = a2;
  v12 = 0;
  v4 = (DXGSESSIONMGR *)((char *)this + 88) == 0LL;
  v5 = (DXGSESSIONMGR *)((char *)this + 88);
  v11 = (struct _KTHREAD **)v5;
  if ( v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v5 = (DXGFASTMUTEX *)v11;
  }
  if ( DXGFASTMUTEX::IsOwner(v5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = v11;
  KeEnterCriticalRegion();
  if ( v6[3] == KeGetCurrentThread() )
  {
    if ( *((int *)v6 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)v6 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6 + 1, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)v6 + 9) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)"g");
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 2);
      ExAcquirePushLockExclusiveEx(v6 + 1, 0LL);
    }
    if ( v6[3] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 530;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v6 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 531;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
    }
    v6[3] = KeGetCurrentThread();
    *((_DWORD *)v6 + 8) = 1;
  }
  v12 = 1;
  if ( (unsigned int)v2 >= *((_DWORD *)this + 20) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v11);
    return 0LL;
  }
  else
  {
    v8 = v11;
    v9 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v2);
    v12 = 0;
    if ( v11[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v11, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( *((int *)v8 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
    }
    v4 = (*((_DWORD *)v8 + 8))-- == 1;
    if ( v4 )
    {
      v8[3] = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 1, 0LL);
    }
    KeLeaveCriticalRegion();
    return (struct DXGSESSIONDATA *)v9;
  }
}
