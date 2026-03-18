/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1402C2A40
 * Callers:
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401F8A30 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1402C2A24 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1404144A0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1404257E0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x14042B1B0 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this)
{
  __int64 v2; // rbx
  bool v3; // zf
  struct DXGGLOBAL *Global; // rax
  DXGFASTMUTEX *v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  void *v9; // rsi
  struct _KTHREAD **v10; // rbx
  struct _KTHREAD **v11; // rbx
  struct _KTHREAD **v12; // [rsp+50h] [rbp-10h] BYREF
  char v13; // [rsp+58h] [rbp-8h]

  if ( !*((_BYTE *)this + 28) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 3466;
  }
  v2 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 28) = 0;
  if ( *(struct _KTHREAD **)(v2 + 128) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v2 + 104, 0LL, 0LL);
    WdLogGlobalForLineNumber = 553;
  }
  if ( *(int *)(v2 + 136) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 556;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (*(_DWORD *)(v2 + 136))-- == 1;
  if ( v3 )
  {
    *(_QWORD *)(v2 + 128) = 0LL;
    ExReleasePushLockExclusiveEx(v2 + 112, 0LL);
  }
  KeLeaveCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  v13 = 0;
  v5 = (struct DXGGLOBAL *)((char *)Global + 376);
  v12 = (struct _KTHREAD **)((char *)Global + 376);
  if ( Global == (struct DXGGLOBAL *)-376LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v5 = (DXGFASTMUTEX *)v12;
  }
  if ( DXGFASTMUTEX::IsOwner(v5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = v12;
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
      _InterlockedAdd64((volatile signed __int64 *)v6 + 2, 1uLL);
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
  v8 = *((_QWORD *)this + 2);
  v13 = 1;
  v9 = *(void **)(v8 + 56);
  if ( *(__int64 *)(v8 + 32) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1158;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ReferenceCount > 0", 1158LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 && v8 )
    (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 29) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
    *((_BYTE *)this + 29) = 0;
  }
  ObfDereferenceObject(v9);
  if ( !v13 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v12, 0LL, 0LL);
    WdLogGlobalForLineNumber = 685;
  }
  v10 = v12;
  v13 = 0;
  if ( v12[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v12, 0LL, 0LL);
    WdLogGlobalForLineNumber = 553;
  }
  if ( *((int *)v10 + 8) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 556;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (*((_DWORD *)v10 + 8))-- == 1;
  if ( v3 )
  {
    v10[3] = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 1, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v13 )
  {
    v11 = v12;
    v13 = 0;
    if ( v12[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v12, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( *((int *)v11 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
    }
    v3 = (*((_DWORD *)v11 + 8))-- == 1;
    if ( v3 )
    {
      v11[3] = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 1, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
