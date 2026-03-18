/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1402C30E8
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14019275C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401BADEC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401F80B0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401F8310 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401F8A30 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401F8BC0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1402C0A40 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryStatisticsInternal @ 0x1402C12E8 (DxgkQueryStatisticsInternal.c)
 *     DxgkQueryProcessOfferInfo @ 0x1402C3CA0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14033BBA0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkTrimProcessCommitment @ 0x14040B170 (DxgkTrimProcessCommitment.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1404144A0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1404257E0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x14042B1B0 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140042470 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, char a2)
{
  struct DXGGLOBAL *Global; // rax
  DXGFASTMUTEX *v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  ACCESS_MASK v8; // edi
  void *v9; // rbx
  struct DXGGLOBAL *v10; // rax
  NTSTATUS v11; // eax
  PVOID v12; // rsi
  __int64 v13; // rdi
  __int64 ProcessDxgProcess; // rdi
  struct _KTHREAD **v15; // rbx
  bool v16; // zf
  struct _KTHREAD **v18; // rbx
  int ProcessSessionId; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  struct _KTHREAD **v25; // rbx
  __int64 v26; // rcx
  __int64 CurrentProcess; // rax
  void *v28; // rbx
  struct _KTHREAD **v29; // [rsp+50h] [rbp-10h] BYREF
  char v30; // [rsp+58h] [rbp-8h]
  PVOID Object; // [rsp+A0h] [rbp+40h] BYREF
  LUID PrivilegeValue; // [rsp+B0h] [rbp+50h]

  Global = DXGGLOBAL::GetGlobal();
  v30 = 0;
  v5 = (struct DXGGLOBAL *)((char *)Global + 376);
  v29 = (struct _KTHREAD **)((char *)Global + 376);
  if ( Global == (struct DXGGLOBAL *)-376LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v5 = (DXGFASTMUTEX *)v29;
  }
  if ( DXGFASTMUTEX::IsOwner(v5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = v29;
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
  v8 = *((_DWORD *)this + 6);
  v9 = (void *)*((_QWORD *)this + 1);
  v30 = 1;
  v10 = DXGGLOBAL::GetGlobal();
  if ( !DXGFASTMUTEX::IsOwner((struct DXGGLOBAL *)((char *)v10 + 376)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3238;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->IsProcessCalloutMutexOwner()",
      3238LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_WORD *)((char *)this + 29) = 0;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(v9, v8, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v12 = Object;
  v13 = v11;
  if ( v11 < 0 )
  {
    if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 416) & 1) != 0 )
    {
      WdLogSingleEntry5(0LL, 275LL, 33LL, v13, 0LL, 0LL);
      WdLogGlobalForLineNumber = 3265;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3268;
    goto LABEL_26;
  }
  if ( !Object )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3272;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pEProcess", 3272LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned __int8)PsGetProcessExitProcessCalled(v12) )
  {
    LODWORD(v13) = -1073741558;
    WdLogSingleEntry3(4LL, v12, v9, -1073741558LL);
    WdLogGlobalForLineNumber = 3277;
    goto LABEL_25;
  }
  ProcessDxgProcess = PsGetProcessDxgProcess(v12);
  if ( !ProcessDxgProcess )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3289;
    LODWORD(v13) = -1073741811;
LABEL_25:
    ObfDereferenceObject(v12);
LABEL_26:
    if ( v30 )
    {
      v15 = v29;
      v30 = 0;
      if ( v29[3] != KeGetCurrentThread() )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v29, 0LL, 0LL);
        WdLogGlobalForLineNumber = 553;
      }
      if ( *((int *)v15 + 8) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 556;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
      }
      v16 = (*((_DWORD *)v15 + 8))-- == 1;
      if ( v16 )
      {
        v15[3] = 0LL;
        ExReleasePushLockExclusiveEx(v15 + 1, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    return (unsigned int)v13;
  }
  ProcessSessionId = PsGetProcessSessionId(v12);
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v21, v20, v22, v23) )
  {
    if ( a2 )
    {
      CurrentProcess = PsGetCurrentProcess(v24);
      WdLogSingleEntry2(3LL, CurrentProcess, v12);
      WdLogGlobalForLineNumber = 3316;
    }
    else
    {
      PrivilegeValue = (LUID)14LL;
      *((_BYTE *)this + 30) = SeSinglePrivilegeCheck((LUID)14LL, 1) != 0;
      KeStackAttachProcess((PRKPROCESS)v12, (PRKAPC_STATE)((char *)this + 32));
      *((_BYTE *)this + 29) = 1;
    }
  }
  if ( *(PVOID *)(ProcessDxgProcess + 56) != v12 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3332;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgProcess->GetEProcess() == pEProcess",
      3332LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  _InterlockedAdd64((volatile signed __int64 *)(ProcessDxgProcess + 32), 1uLL);
  if ( *(__int64 *)(ProcessDxgProcess + 32) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1145;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ReferenceCount > 0", 1145LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !v30 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v29, 0LL, 0LL);
    WdLogGlobalForLineNumber = 685;
  }
  v25 = v29;
  v30 = 0;
  if ( v29[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v29, 0LL, 0LL);
    WdLogGlobalForLineNumber = 553;
  }
  if ( *((int *)v25 + 8) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 556;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
  }
  v16 = (*((_DWORD *)v25 + 8))-- == 1;
  if ( v16 )
  {
    v25[3] = 0LL;
    ExReleasePushLockExclusiveEx(v25 + 1, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(ProcessDxgProcess + 104)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3408;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!pProcess->IsMutexOwner()", 3408LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_BYTE *)this + 28) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 3413;
  }
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(ProcessDxgProcess + 128) == KeGetCurrentThread() )
  {
    if ( *(int *)(ProcessDxgProcess + 136) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(ProcessDxgProcess + 136);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(ProcessDxgProcess + 112, 0LL) )
    {
      if ( bTracingEnabled
        && *(_DWORD *)(ProcessDxgProcess + 140) != -1
        && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)"g");
      }
      _InterlockedAdd64((volatile signed __int64 *)(ProcessDxgProcess + 120), 1uLL);
      ExAcquirePushLockExclusiveEx(ProcessDxgProcess + 112, 0LL);
    }
    if ( *(_QWORD *)(ProcessDxgProcess + 128) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 530;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(ProcessDxgProcess + 136) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 531;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(ProcessDxgProcess + 128) = KeGetCurrentThread();
    *(_DWORD *)(ProcessDxgProcess + 136) = 1;
  }
  if ( *(_DWORD *)(ProcessDxgProcess + 40) == 1 )
  {
    *((_QWORD *)this + 2) = ProcessDxgProcess;
    *((_BYTE *)this + 28) = 1;
    if ( v30 )
    {
      v18 = v29;
      v30 = 0;
      if ( v29[3] != KeGetCurrentThread() )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v29, 0LL, 0LL);
        WdLogGlobalForLineNumber = 553;
      }
      if ( *((int *)v18 + 8) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 556;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
      }
      v16 = (*((_DWORD *)v18 + 8))-- == 1;
      if ( v16 )
      {
        v18[3] = 0LL;
        ExReleasePushLockExclusiveEx(v18 + 1, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    return 0LL;
  }
  else
  {
    DXGFASTMUTEX::Release((struct _KTHREAD **)(ProcessDxgProcess + 104));
    v28 = *(void **)(ProcessDxgProcess + 56);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v29);
    DXGPROCESS::ReleaseReference((DXGPROCESS *)ProcessDxgProcess);
    if ( *((_BYTE *)this + 29) )
    {
      KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
      *((_BYTE *)this + 29) = 0;
    }
    ObfDereferenceObject(v28);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v29);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v29);
    return 3221226166LL;
  }
}
