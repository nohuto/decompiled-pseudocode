/*
 * XREFs of ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402A47D0
 * Callers:
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1401BEF70 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x14020E5D0 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x140211790 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x14033EAD0 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     DxgkNotifySessionStateChange @ 0x1403FDDC0 (DxgkNotifySessionStateChange.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x140409050 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionData(
        DXGSESSIONMGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int CurrentProcessSessionId; // eax
  __int64 v6; // rbx
  DXGFASTMUTEX *v7; // rcx
  __int64 v8; // r15
  DXGFASTMUTEX *v9; // rdi
  __int64 v10; // rcx
  int *v11; // rdi
  __int64 v12; // rsi
  DXGFASTMUTEX *v15; // [rsp+50h] [rbp-10h] BYREF
  char v16; // [rsp+58h] [rbp-8h]

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  v6 = 0LL;
  v7 = (DXGSESSIONMGR *)((char *)this + 88);
  v8 = CurrentProcessSessionId;
  v15 = (DXGSESSIONMGR *)((char *)this + 88);
  v16 = 0;
  if ( this == (DXGSESSIONMGR *)-88LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v7 = v15;
  }
  if ( DXGFASTMUTEX::IsOwner(v7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = v15;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v9 + 3) == KeGetCurrentThread() )
  {
    if ( *((int *)v9 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)v9 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v9 + 8, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)v9 + 9) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)"g");
      _InterlockedAdd64((volatile signed __int64 *)v9 + 2, 1uLL);
      ExAcquirePushLockExclusiveEx((char *)v9 + 8, 0LL);
    }
    if ( *((_QWORD *)v9 + 3) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 530;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v9 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 531;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)v9 + 3) = KeGetCurrentThread();
    *((_DWORD *)v9 + 8) = 1;
  }
  v16 = 1;
  if ( (unsigned int)v8 >= *((_DWORD *)this + 20) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v15);
  }
  else
  {
    v11 = (int *)v15;
    v12 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8);
    v16 = 0;
    if ( *((struct _KTHREAD **)v15 + 3) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v15, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( v11[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v11[8]-- == 1 )
    {
      *((_QWORD *)v11 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
    return (struct DXGSESSIONDATA *)v12;
  }
  return (struct DXGSESSIONDATA *)v6;
}
