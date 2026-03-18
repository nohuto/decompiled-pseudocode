/*
 * XREFs of DxgNotifyVSyncCB @ 0x140035C30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x14003602C (-NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z.c)
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1400802B0 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

void __fastcall DxgNotifyVSyncCB(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdi
  struct DXGTHREAD *v7; // rbx
  __int64 v8; // r14
  struct DXGTHREAD *Current; // rax
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  ADAPTER_DISPLAY *v13; // rcx
  __int64 v14; // rcx
  unsigned int i; // esi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v19; // rbx
  struct _KPROCESS *ThreadProcess; // rax
  __int64 v21; // rdx
  __int64 v22; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-39h] BYREF
  char v25; // [rsp+78h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF

  v25 = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 417) )
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData )
        {
          v19 = *((_QWORD *)SessionData + 2341);
          if ( v19 == PsGetCurrentProcess() )
          {
            ThreadProcess = PsGetThreadProcess(KeGetCurrentThread());
            if ( ThreadProcess )
            {
              KeStackAttachProcess(ThreadProcess, &ApcState);
              v25 = 1;
            }
          }
        }
      }
    }
  }
  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2166;
LABEL_33:
    v6 = 0LL;
    goto LABEL_7;
  }
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 || *(_DWORD *)(v5 + 16) != 1953656900 || *(_DWORD *)(v5 + 20) != 2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2173;
    goto LABEL_33;
  }
  v6 = *(_QWORD *)(v5 + 4032);
LABEL_7:
  v7 = 0LL;
  v8 = qword_1401664C0 & 2;
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter);
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v7 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 186;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ProfilerEntryCount >= 0", 186LL, 0LL, 0LL, 0LL, 0LL);
      }
      v10 = *((_DWORD *)v7 + 13);
      if ( !v10 )
        *((_DWORD *)v7 + 14) = 8009;
      *((_DWORD *)v7 + 13) = v10 + 1;
    }
  }
  v22 = 0LL;
  v11 = KeQueryInterruptTimePrecise(&v22);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v23 = v11 / 0xA;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 4432), &LockHandle);
  v12 = (*(_DWORD *)(v6 + 3016) & 0x10) != 0 ? a2 : 0;
  if ( !*(_DWORD *)(*(_QWORD *)(v6 + 4352) + 4 * v12) )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(v6 + 4440) + 8 * v12);
    if ( v21 )
      _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v6 + 4448) + 8 * v12), v22 - v21);
    *(_QWORD *)(*(_QWORD *)(v6 + 4440) + 8 * v12) = v22;
  }
  v13 = *(ADAPTER_DISPLAY **)(v6 + 3160);
  if ( v13 )
    ADAPTER_DISPLAY::NotifyVSync(v13, a2, &v23);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  for ( i = 0; i < *(_DWORD *)(v6 + 4480); ++i )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync((DXGPOWERSTATISTICSTRANSITIONENGINE *)(*(_QWORD *)(v6 + 4472)
                                                                                         + 136LL
                                                                                         + 248LL * i));
  if ( v7 )
  {
    if ( *((int *)v7 + 13) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 196;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ProfilerEntryCount > 0", 196LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v7 + 13))-- == 1 )
      *((_DWORD *)v7 + 14) = -1;
  }
  if ( v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
  if ( v25 )
    KeUnstackDetachProcess(&ApcState);
}
