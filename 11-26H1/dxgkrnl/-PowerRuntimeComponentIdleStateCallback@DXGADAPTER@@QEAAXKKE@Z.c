/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1400336C8
 * Callers:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x140011AE0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x140012110 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z @ 0x1400344C4 (-NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z.c)
 *     ?RecordEnteringIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x14006C270 (-RecordEnteringIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140080180 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  char v4; // r15
  unsigned int v5; // r13d
  DXGADAPTER *v6; // rdi
  __int64 v7; // r12
  char v8; // si
  __int64 v9; // r14
  __int64 v10; // rbp
  char v11; // r15
  _BYTE *v12; // rbx
  struct DXGTHREAD *v13; // r15
  struct DXGTHREAD *Current; // rax
  int v15; // eax
  struct DXGTHREAD *v16; // r13
  struct DXGTHREAD *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  DXGGLOBAL *v23; // rax
  struct DXGGLOBAL *Global; // rbx
  int v25; // ecx
  struct DXGPROCESS *v26; // rax
  int v27; // ecx
  DXGGLOBAL *v28; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v30; // rcx
  PSLIST_ENTRY v31; // rax
  KIRQL v32; // al
  KIRQL CurrentIrql; // [rsp+51h] [rbp-97h]
  int v36; // [rsp+58h] [rbp-90h]
  unsigned int v37; // [rsp+60h] [rbp-88h]
  __int64 v38; // [rsp+68h] [rbp-80h]
  char v39; // [rsp+70h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-70h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = this;
  v7 = a2;
  v8 = 1;
  if ( *((_QWORD *)this + 510)
    && (a2 == 1 || a2 == 4)
    && _InterlockedIncrement((volatile signed __int32 *)this + 1008) > 1 )
  {
    while ( 1 )
    {
      v31 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 254);
      if ( v31 )
        break;
      if ( KeGetCurrentIrql() < 2u )
        KeWaitForSingleObject((char *)v6 + 4000, Executive, 0, 0, 0LL);
      else
        KeStallExecutionProcessor(0x64u);
    }
    LODWORD(v31[1].Next) = v7;
    HIDWORD(v31[1].Next) = v5;
    *((_BYTE *)&v31[1].Next + 8) = v4;
    ExInterlockedInsertTailList((PLIST_ENTRY)((char *)v6 + 4040), (PLIST_ENTRY)v31, (PKSPIN_LOCK)v6 + 503);
    KeSetEvent((PRKEVENT)((char *)v6 + 3952), 0, 0);
  }
  else if ( *((_DWORD *)this + 50) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer((__int64)this, (__int64)&Dxgk_SetPowerComponentFState);
    v9 = *((_QWORD *)v6 + 408);
    v10 = 520 * v7;
    if ( !v4 && *(_BYTE *)(v9 + v10 + 360) )
    {
      v8 = 0;
      v12 = (_BYTE *)(v10 + v9 + 359);
    }
    else
    {
      if ( (*((int *)v6 + 694) >= 0x2000 || *((_BYTE *)v6 + 3076)) && *(_DWORD *)(v9 + v10 + 208) == 3 )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        *(_DWORD *)(v9 + v10 + 344) = v5;
      }
      v12 = (_BYTE *)(v10 + v9 + 359);
      *v12 = 1;
      if ( v5 )
      {
        this = *(DXGADAPTER **)(v9 + v10 + 512);
        if ( this )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordEnteringIdleFState((DXGADAPTER *)((char *)this + 136));
      }
      if ( v11 )
      {
        v13 = 0LL;
        v37 = *(_DWORD *)(v9 + v10 + 4);
        v38 = qword_1401664C0 & 2;
        if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
        if ( KeGetCurrentIrql() < 2u )
        {
          Current = DXGTHREAD::GetCurrent();
          v13 = Current;
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
            v15 = *((_DWORD *)v13 + 13);
            if ( !v15 )
              *((_DWORD *)v13 + 14) = 5124;
            *((_DWORD *)v13 + 13) = v15 + 1;
          }
        }
        _InterlockedAdd((volatile signed __int32 *)v6 + 1213, 1u);
        CurrentIrql = KeGetCurrentIrql();
        v16 = 0LL;
        if ( CurrentIrql < 2u && (v17 = DXGTHREAD::GetCurrent(), (v16 = v17) != 0LL) )
          v36 = *((_DWORD *)v17 + 12);
        else
          v36 = 0;
        v39 = 0;
        if ( KeGetCurrentIrql() < 2u )
        {
          Global = DXGGLOBAL::GetGlobal();
          if ( *((_DWORD *)Global + 417) )
          {
            v25 = *((_DWORD *)v6 + 111);
            if ( (v25 & 0x20) == 0 && (v25 & 4) == 0 )
            {
              v26 = DXGPROCESS::GetCurrent();
              if ( v26 )
              {
                if ( (*((_BYTE *)v26 + 408) & 1) == 0 && (*((_DWORD *)v26 + 102) & 2) == 0 )
                {
                  v27 = *((_DWORD *)Global + 417);
                  if ( v27 == 2 || v27 == 1 && *((_BYTE *)v26 + 573) )
                  {
                    v28 = DXGGLOBAL::GetGlobal();
                    SessionData = DXGGLOBAL::GetSessionData(v28);
                    if ( SessionData )
                    {
                      v30 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                      if ( v30 )
                      {
                        KeStackAttachProcess(v30, &ApcState);
                        v39 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v18 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))v6 + 105))(*((_QWORD *)v6 + 36), v37, a3);
        if ( v39 )
          KeUnstackDetachProcess(&ApcState);
        if ( CurrentIrql != KeGetCurrentIrql() )
        {
          v32 = KeGetCurrentIrql();
          WdLogSingleEntry5(0LL, 275LL, 16LL, v6, CurrentIrql, v32);
          WdLogGlobalForLineNumber = 2578;
        }
        if ( v16 )
        {
          v19 = *((int *)v16 + 12);
          if ( (_DWORD)v19 != v36 )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v16 + 12), v36, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)v6 + 1213);
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
        if ( v13 )
        {
          if ( *((int *)v13 + 13) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 196;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ProfilerEntryCount > 0", 196LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( (*((_DWORD *)v13 + 13))-- == 1 )
            *((_DWORD *)v13 + 14) = -1;
        }
        v12 = (_BYTE *)(v10 + v9 + 359);
        if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
        v5 = a3;
      }
      v4 = a4;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&Dxgk_SetPowerComponentFStateEnd);
    if ( (*(_DWORD *)(v9 + v10 + 216) & 2) == 0 )
    {
      *v12 = 0;
      if ( !v4 )
        PoFxCompleteIdleState(*((_QWORD *)v6 + 409), (unsigned int)v7);
      if ( v8 )
      {
        if ( !v5 )
        {
          v21 = *(_QWORD *)(v9 + v10 + 512);
          if ( v21 )
            DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v21 + 136));
        }
        if ( *(_DWORD *)(v9 + v10 + 208) == 7 )
        {
          v22 = *(_DWORD *)(v9 + v10 + 4);
          v23 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(v23, v6, v22, v5, 0);
        }
      }
    }
  }
  else if ( !a4 )
  {
    PoFxCompleteIdleState(*((_QWORD *)this + 409), a2);
  }
}
