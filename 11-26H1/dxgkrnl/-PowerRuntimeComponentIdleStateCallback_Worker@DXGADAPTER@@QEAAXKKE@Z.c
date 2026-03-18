/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x140036284
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ @ 0x14019D1E8 (-PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RecordEnteringIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x14006C270 (-RecordEnteringIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140080180 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  char v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // r13d
  DXGADAPTER *v7; // rbp
  __int64 v8; // r15
  __int64 v9; // r14
  char v10; // si
  _BYTE *v11; // rbx
  struct DXGTHREAD *v12; // rsi
  struct DXGTHREAD *Current; // rax
  int v14; // eax
  struct DXGTHREAD *v15; // r13
  struct DXGTHREAD *v16; // rax
  int v17; // r12d
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // r15
  struct _KTHREAD **v23; // rbx
  _QWORD *i; // r14
  _QWORD *v25; // rsi
  struct DXGGLOBAL *Global; // rbx
  int v27; // ecx
  struct DXGPROCESS *v28; // rax
  int v29; // ecx
  DXGGLOBAL *v30; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v32; // rcx
  int v33; // edx
  int v34; // r8d
  KIRQL v35; // al
  KIRQL v36; // al
  unsigned int v37; // [rsp+28h] [rbp-F0h]
  char v38; // [rsp+60h] [rbp-B8h]
  char v39; // [rsp+60h] [rbp-B8h]
  KIRQL CurrentIrql; // [rsp+61h] [rbp-B7h]
  KIRQL v41; // [rsp+61h] [rbp-B7h]
  unsigned int v45; // [rsp+6Ch] [rbp-ACh]
  unsigned int v46; // [rsp+6Ch] [rbp-ACh]
  __int64 v47; // [rsp+70h] [rbp-A8h]
  __int64 v48; // [rsp+78h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-98h] BYREF
  char v50; // [rsp+98h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-78h] BYREF

  v4 = a4;
  v5 = a2;
  v6 = a3;
  v7 = this;
  if ( *((_DWORD *)this + 50) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      v37 = a3;
      McTemplateK0pqq_EtwWriteTransfer((__int64)this, (__int64)&Dxgk_SetPowerComponentFState);
    }
    v8 = *((_QWORD *)v7 + 408);
    v9 = 520 * v5;
    if ( !v4 && *(_BYTE *)(v9 + v8 + 360) )
    {
      v38 = 0;
      v11 = (_BYTE *)(v9 + v8 + 359);
    }
    else
    {
      v38 = 1;
      if ( (*((int *)v7 + 694) >= 0x2000 || *((_BYTE *)v7 + 3076)) && *(_DWORD *)(v9 + v8 + 208) == 3 )
      {
        v10 = 0;
      }
      else
      {
        v10 = 1;
        *(_DWORD *)(v9 + v8 + 344) = v6;
      }
      v11 = (_BYTE *)(v9 + v8 + 359);
      *v11 = 1;
      if ( v6 )
      {
        this = *(DXGADAPTER **)(v9 + v8 + 512);
        if ( this )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordEnteringIdleFState((DXGADAPTER *)((char *)this + 136));
      }
      if ( v10 )
      {
        v12 = 0LL;
        v45 = *(_DWORD *)(v9 + v8 + 4);
        v48 = qword_1401664C0 & 2;
        if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
        if ( KeGetCurrentIrql() < 2u )
        {
          Current = DXGTHREAD::GetCurrent();
          v12 = Current;
          if ( Current )
          {
            if ( *((int *)Current + 13) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 186;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_ProfilerEntryCount >= 0",
                186LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v14 = *((_DWORD *)v12 + 13);
            if ( !v14 )
              *((_DWORD *)v12 + 14) = 5124;
            *((_DWORD *)v12 + 13) = v14 + 1;
          }
        }
        _InterlockedIncrement((volatile signed __int32 *)v7 + 1213);
        CurrentIrql = KeGetCurrentIrql();
        v15 = 0LL;
        if ( CurrentIrql < 2u && (v16 = DXGTHREAD::GetCurrent(), (v15 = v16) != 0LL) )
          v17 = *((_DWORD *)v16 + 12);
        else
          v17 = 0;
        v50 = 0;
        if ( KeGetCurrentIrql() < 2u )
        {
          Global = DXGGLOBAL::GetGlobal();
          if ( *((_DWORD *)Global + 417) )
          {
            v27 = *((_DWORD *)v7 + 111);
            if ( (v27 & 0x20) == 0 && (v27 & 4) == 0 )
            {
              v28 = DXGPROCESS::GetCurrent();
              if ( v28 )
              {
                if ( (*((_BYTE *)v28 + 408) & 1) == 0 && (*((_DWORD *)v28 + 102) & 2) == 0 )
                {
                  v29 = *((_DWORD *)Global + 417);
                  if ( v29 == 2 || v29 == 1 && *((_BYTE *)v28 + 573) )
                  {
                    v30 = DXGGLOBAL::GetGlobal();
                    SessionData = DXGGLOBAL::GetSessionData(v30);
                    if ( SessionData )
                    {
                      v32 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                      if ( v32 )
                      {
                        KeStackAttachProcess(v32, &ApcState);
                        v50 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v18 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))v7 + 105))(*((_QWORD *)v7 + 36), v45, a3);
        if ( v50 )
          KeUnstackDetachProcess(&ApcState);
        if ( CurrentIrql != KeGetCurrentIrql() )
        {
          v35 = KeGetCurrentIrql();
          WdLogSingleEntry5(0LL, 275LL, 16LL, v7, CurrentIrql, v35);
          WdLogGlobalForLineNumber = 2578;
        }
        if ( v15 )
        {
          v19 = *((int *)v15 + 12);
          if ( (_DWORD)v19 != v17 )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v15 + 12), v17, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)v7 + 1213);
        if ( (_DWORD)v18 != -1071775466 && (_DWORD)v18 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2580;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v18,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v12 )
        {
          if ( *((int *)v12 + 13) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 196;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ProfilerEntryCount > 0", 196LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( (*((_DWORD *)v12 + 13))-- == 1 )
            *((_DWORD *)v12 + 14) = -1;
        }
        v11 = (_BYTE *)(v9 + v8 + 359);
        if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
        v4 = a4;
        v6 = a3;
      }
      LODWORD(v5) = a2;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&Dxgk_SetPowerComponentFStateEnd);
    if ( (*(_DWORD *)(v9 + v8 + 216) & 2) == 0 )
    {
      *v11 = 0;
      if ( !v4 )
        PoFxCompleteIdleState(*((_QWORD *)v7 + 409), (unsigned int)v5);
      if ( v38 )
      {
        if ( !v6 )
        {
          v21 = *(_QWORD *)(v9 + v8 + 512);
          if ( v21 )
            DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v21 + 136));
        }
        if ( *(_DWORD *)(v9 + v8 + 208) == 7 )
        {
          v46 = *(_DWORD *)(v9 + v8 + 4);
          if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2650;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  2650,
                  v33,
                  v34,
                  0LL,
                  2,
                  -1,
                  (__int64)L"m_pGlobal != NULL",
                  2650LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
          v22 = *(_QWORD *)&DXGGLOBAL::m_pGlobal;
          v39 = 0;
          memset(&LockHandle, 0, sizeof(LockHandle));
          v23 = (struct _KTHREAD **)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 1776LL);
          v47 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 1776LL;
          if ( KeGetCurrentIrql() < 2u )
          {
            if ( v23[1] != KeGetCurrentThread() )
            {
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v23);
              v39 = 1;
            }
          }
          else
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v22 + 1768), &LockHandle);
            v47 = (__int64)v23;
          }
          for ( i = *(_QWORD **)(v22 + 1808); ; i = (_QWORD *)*i )
          {
            v25 = 0LL;
            if ( i != (_QWORD *)(v22 + 1808) )
              v25 = i;
            if ( !v25 )
              break;
            if ( (DXGADAPTER *)v25[4] == v7 )
            {
              if ( v25[7] )
              {
                v41 = KeGetCurrentIrql();
                ((void (__fastcall *)(DXGADAPTER *, _QWORD, _QWORD, _QWORD, _QWORD, unsigned int))v25[7])(
                  v7,
                  v46,
                  a3,
                  0LL,
                  v25[3],
                  v37);
                if ( v41 != KeGetCurrentIrql() )
                {
                  v36 = KeGetCurrentIrql();
                  WdLogSingleEntry5(0LL, 275LL, 16LL, v22, v41, v36);
                  WdLogGlobalForLineNumber = 7182;
                }
              }
            }
          }
          if ( KeGetCurrentIrql() < 2u )
          {
            if ( v39 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v47 + 16));
              ExReleasePushLockSharedEx(v47, 0LL);
              KeLeaveCriticalRegion();
            }
          }
          else
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
        }
      }
    }
  }
  else if ( !a4 )
  {
    PoFxCompleteIdleState(*((_QWORD *)this + 409), a2);
  }
}
