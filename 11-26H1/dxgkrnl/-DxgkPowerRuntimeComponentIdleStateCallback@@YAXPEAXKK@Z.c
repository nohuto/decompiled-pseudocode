/*
 * XREFs of ?DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z @ 0x140033DE0
 * Callers:
 *     <none>
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

void __fastcall DxgkPowerRuntimeComponentIdleStateCallback(char *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r12
  char v6; // si
  __int64 v7; // r14
  __int64 v8; // rbp
  char v9; // r15
  _BYTE *v10; // rbx
  struct DXGTHREAD *v11; // r15
  struct DXGTHREAD *Current; // rax
  int v13; // eax
  struct DXGTHREAD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  DXGGLOBAL *v20; // rax
  __int64 v21; // rcx
  struct DXGGLOBAL *Global; // rbx
  int v23; // ecx
  struct DXGPROCESS *v24; // rax
  int v25; // ecx
  DXGGLOBAL *v26; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v28; // rcx
  PSLIST_ENTRY v29; // rax
  KIRQL v30; // al
  KIRQL CurrentIrql; // [rsp+50h] [rbp-98h]
  int v32; // [rsp+54h] [rbp-94h]
  unsigned int v33; // [rsp+5Ch] [rbp-8Ch]
  struct DXGTHREAD *v34; // [rsp+60h] [rbp-88h]
  __int64 v35; // [rsp+68h] [rbp-80h]
  char v36; // [rsp+70h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-70h] BYREF

  v4 = a2;
  v6 = 1;
  if ( *((_QWORD *)a1 + 510) && (a2 == 1 || a2 == 4) && _InterlockedIncrement((volatile signed __int32 *)a1 + 1008) > 1 )
  {
    while ( 1 )
    {
      v29 = ExpInterlockedPopEntrySList((PSLIST_HEADER)a1 + 254);
      if ( v29 )
        break;
      if ( KeGetCurrentIrql() < 2u )
        KeWaitForSingleObject(a1 + 4000, Executive, 0, 0, 0LL);
      else
        KeStallExecutionProcessor(0x64u);
    }
    LODWORD(v29[1].Next) = v4;
    HIDWORD(v29[1].Next) = a3;
    *((_BYTE *)&v29[1].Next + 8) = 0;
    ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 4040), (PLIST_ENTRY)v29, (PKSPIN_LOCK)a1 + 503);
    KeSetEvent((PRKEVENT)(a1 + 3952), 0, 0);
  }
  else if ( *((_DWORD *)a1 + 50) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer((__int64)a1, (__int64)&Dxgk_SetPowerComponentFState);
    v7 = *((_QWORD *)a1 + 408);
    v8 = 520 * v4;
    if ( *(_BYTE *)(v7 + 520 * v4 + 360) )
    {
      v6 = 0;
      v10 = (_BYTE *)(v8 + v7 + 359);
    }
    else
    {
      if ( (*((int *)a1 + 694) >= 0x2000 || a1[3076]) && *(_DWORD *)(v7 + v8 + 208) == 3 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        *(_DWORD *)(v7 + v8 + 344) = a3;
      }
      v10 = (_BYTE *)(v8 + v7 + 359);
      *v10 = 1;
      if ( a3 )
      {
        v21 = *(_QWORD *)(v7 + v8 + 512);
        if ( v21 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordEnteringIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v21 + 136));
      }
      if ( v9 )
      {
        v33 = *(_DWORD *)(v7 + v8 + 4);
        v11 = 0LL;
        v35 = qword_1401664C0 & 2;
        if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(5124LL, (__int64)&EventProfilerEnter);
        if ( KeGetCurrentIrql() < 2u )
        {
          Current = DXGTHREAD::GetCurrent();
          v11 = Current;
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
            v13 = *((_DWORD *)v11 + 13);
            if ( !v13 )
              *((_DWORD *)v11 + 14) = 5124;
            *((_DWORD *)v11 + 13) = v13 + 1;
          }
        }
        _InterlockedAdd((volatile signed __int32 *)a1 + 1213, 1u);
        CurrentIrql = KeGetCurrentIrql();
        v34 = 0LL;
        if ( CurrentIrql < 2u && (v14 = DXGTHREAD::GetCurrent(), (v34 = v14) != 0LL) )
          v32 = *((_DWORD *)v14 + 12);
        else
          v32 = 0;
        v36 = 0;
        if ( KeGetCurrentIrql() < 2u )
        {
          Global = DXGGLOBAL::GetGlobal();
          if ( *((_DWORD *)Global + 417) )
          {
            v23 = *((_DWORD *)a1 + 111);
            if ( (v23 & 0x20) == 0 && (v23 & 4) == 0 )
            {
              v24 = DXGPROCESS::GetCurrent();
              if ( v24 )
              {
                if ( (*((_BYTE *)v24 + 408) & 1) == 0 && (*((_DWORD *)v24 + 102) & 2) == 0 )
                {
                  v25 = *((_DWORD *)Global + 417);
                  if ( v25 == 2 || v25 == 1 && *((_BYTE *)v24 + 573) )
                  {
                    v26 = DXGGLOBAL::GetGlobal();
                    SessionData = DXGGLOBAL::GetSessionData(v26);
                    if ( SessionData )
                    {
                      v28 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                      if ( v28 )
                      {
                        KeStackAttachProcess(v28, &ApcState);
                        v36 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v15 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))a1 + 105))(*((_QWORD *)a1 + 36), v33, a3);
        if ( v36 )
          KeUnstackDetachProcess(&ApcState);
        if ( CurrentIrql != KeGetCurrentIrql() )
        {
          v30 = KeGetCurrentIrql();
          WdLogSingleEntry5(0LL, 275LL, 16LL, a1, CurrentIrql, v30);
          WdLogGlobalForLineNumber = 2578;
        }
        if ( v34 )
        {
          v16 = *((int *)v34 + 12);
          if ( (_DWORD)v16 != v32 )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, v16, v32, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)a1 + 1213);
        if ( (_DWORD)v15 != -1071775466 && (_DWORD)v15 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2580;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v15,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v11 )
        {
          if ( *((int *)v11 + 13) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 196;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ProfilerEntryCount > 0", 196LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( (*((_DWORD *)v11 + 13))-- == 1 )
            *((_DWORD *)v11 + 14) = -1;
        }
        v10 = (_BYTE *)(v8 + v7 + 359);
        if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
      }
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&Dxgk_SetPowerComponentFStateEnd);
    if ( (*(_DWORD *)(v7 + v8 + 216) & 2) == 0 )
    {
      *v10 = 0;
      PoFxCompleteIdleState(*((_QWORD *)a1 + 409), (unsigned int)v4);
      if ( v6 )
      {
        if ( !a3 )
        {
          v18 = *(_QWORD *)(v7 + v8 + 512);
          if ( v18 )
            DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v18 + 136));
        }
        if ( *(_DWORD *)(v7 + v8 + 208) == 7 )
        {
          v19 = *(_DWORD *)(v7 + v8 + 4);
          v20 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(v20, a1, v19, a3, 0);
        }
      }
    }
  }
  else
  {
    PoFxCompleteIdleState(*((_QWORD *)a1 + 409), a2);
  }
}
