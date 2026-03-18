/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1402A65F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140034914 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkReleaseHandleDataCB(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v6; // rbp
  struct DXGPROCESS *v7; // rdi
  struct DXGTHREAD *v8; // rbx
  char *v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  struct _EX_RUNDOWN_REF *v12; // rcx
  int v13; // eax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v17; // rbx
  _BYTE v18[8]; // [rsp+50h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-50h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v18);
    CurrentProcess = PsGetCurrentProcess(v3);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v6 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
    {
      Current = DXGTHREAD::GetCurrent();
      if ( Current )
      {
        v7 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
        if ( v7 )
          goto LABEL_5;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v7 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
        if ( v7 )
          goto LABEL_5;
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 3080;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v7 = v6;
LABEL_5:
    v8 = DXGTHREAD::GetCurrent();
    v9 = (char *)v7 + 248;
    if ( v9 && *((struct _KTHREAD **)v9 + 1) == KeGetCurrentThread() )
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
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)v9 + 6) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)"g");
      ExAcquirePushLockSharedEx(v9, 0LL);
    }
    _InterlockedIncrement((volatile signed __int32 *)v9 + 4);
    v11 = *((_DWORD *)a1 + 2);
    if ( v11 == 1 )
    {
      v12 = (struct _EX_RUNDOWN_REF *)(v1 + 88);
    }
    else
    {
      if ( v11 != 2 )
      {
        v17 = *((int *)a1 + 2);
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 371;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver supplied invalid handle type (0x%I64x), cannot release reference",
          v17,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_19:
        _InterlockedDecrement((volatile signed __int32 *)v9 + 4);
        ExReleasePushLockSharedEx(v9, 0LL);
        KeLeaveCriticalRegion();
        if ( v18[0] )
          KeUnstackDetachProcess(&ApcState);
        return;
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 80));
      v12 = (struct _EX_RUNDOWN_REF *)(v1 + 72);
    }
    ExReleaseRundownProtection(v12);
    if ( v8 )
    {
      v13 = *((_DWORD *)v8 + 12) - 1;
      *((_DWORD *)v8 + 12) = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, v13, 0LL, 0LL);
        WdLogGlobalForLineNumber = 58;
      }
    }
    goto LABEL_19;
  }
}
