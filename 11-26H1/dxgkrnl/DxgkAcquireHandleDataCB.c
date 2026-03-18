/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x140361780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140034914 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x140310550 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1403105B0 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(_DWORD *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rcx
  ULONG_PTR Count; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rsi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v10; // rbp
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *DxgThread; // rsi
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rbp
  struct _EX_RUNDOWN_REF *v19; // rbp
  __int64 v20; // r9
  struct DXGPROCESS *v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // rbp
  __int64 v24; // rbp
  __int64 v25; // r9
  struct DXGTHREAD *v27; // [rsp+50h] [rbp-78h] BYREF
  char v28[8]; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v28);
  Count = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 172;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"nullptr != pReleaseHandle", 172LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_10;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v10 )
      goto LABEL_11;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3080;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_10;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v10 )
LABEL_10:
    v10 = v8;
LABEL_11:
  v27 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v27) >= 0 )
  {
    DxgThread = v27;
    if ( !v27 )
    {
      DxgThread = DxgkThreadObjectCreateDxgThread(1);
      v27 = DxgThread;
    }
  }
  else
  {
    DxgThread = 0LL;
  }
  v14 = (volatile signed __int32 *)((char *)v10 + 248);
  if ( v10 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v10 + 32) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 248, 0LL) )
  {
    if ( bTracingEnabled && *((_DWORD *)v10 + 68) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)"g");
    ExAcquirePushLockSharedEx((char *)v10 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v10 + 66);
  v16 = a1[1];
  if ( v16 == 1 )
  {
    v17 = (*a1 >> 6) & 0xFFFFFF;
    if ( v17 < *((_DWORD *)v10 + 74)
      && (v18 = 16LL * v17 + *((_QWORD *)v10 + 35), ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v18 + 8) & 0x60))
      && (*(_DWORD *)(v18 + 8) & 0x6000) != 0x2000
      && (*(_DWORD *)(v18 + 8) & 0x1F) == 5
      && (v19 = *(struct _EX_RUNDOWN_REF **)v18) != 0LL )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(v19[1].Count + 16) + 16LL);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
        {
          WdLogSingleEntry5(0LL, 275LL, 20LL, v20, 0LL, 0LL);
          WdLogGlobalForLineNumber = 199;
        }
      }
      DxgkReferenceDxgAllocation(v19);
      if ( DxgThread )
        ++*((_DWORD *)DxgThread + 12);
      *a2 = v19;
      if ( (a1[2] & 1) != 0 )
        Count = v19[4].Count;
      else
        Count = *(_QWORD *)(v19[6].Count + 16);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 233;
    }
    goto LABEL_54;
  }
  if ( v16 != 2 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 294;
    goto LABEL_54;
  }
  v21 = DXGPROCESS::GetCurrent(v15);
  v22 = (*a1 >> 6) & 0xFFFFFF;
  if ( v22 >= *((_DWORD *)v21 + 74)
    || (v23 = *((_QWORD *)v21 + 35) + 16LL * v22, ((*a1 >> 25) & 0x60) != (*(_BYTE *)(v23 + 8) & 0x60))
    || (*(_DWORD *)(v23 + 8) & 0x6000) == 0x2000
    || (*(_DWORD *)(v23 + 8) & 0x1F) != 4
    || (v24 = *(_QWORD *)v23) == 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 288;
LABEL_54:
    _InterlockedDecrement(v14 + 4);
    ExReleasePushLockSharedEx(v14, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_55;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) + 16LL) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
    {
      WdLogSingleEntry5(0LL, 275LL, 20LL, v25, 0LL, 0LL);
      WdLogGlobalForLineNumber = 248;
    }
  }
  DxgkReferenceDxgResource((struct _EX_RUNDOWN_REF *)v24);
  if ( DxgThread )
    ++*((_DWORD *)DxgThread + 12);
  _InterlockedDecrement(v14 + 4);
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v24 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v24;
  Count = *(_QWORD *)(v24 + 56);
  if ( (*(_DWORD *)(v24 + 4) & 1) != 0 )
    Count = *(_QWORD *)(Count + 16);
LABEL_55:
  if ( v28[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
