/*
 * XREFs of ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x140010CF8
 * Callers:
 *     ?NotifyMemorySegmentHasData@DXGADAPTER@@QEAAJIE@Z @ 0x140034AA0 (-NotifyMemorySegmentHasData@DXGADAPTER@@QEAAJIE@Z.c)
 *     DXGADAPTER_DdiSetPowerComponentFState @ 0x140074ED0 (DXGADAPTER_DdiSetPowerComponentFState.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiSetPowerComponentFState(DXGADAPTER *this, unsigned int a2, unsigned int a3)
{
  struct DXGTHREAD *v4; // rdi
  __int64 v5; // r12
  struct DXGTHREAD *Current; // rax
  int v7; // eax
  KIRQL CurrentIrql; // al
  __int64 v9; // r15
  struct DXGTHREAD *v10; // rbx
  struct DXGTHREAD *v11; // rax
  int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // rcx
  struct DXGGLOBAL *Global; // rsi
  int v18; // ecx
  struct DXGPROCESS *v19; // rax
  int v20; // ecx
  DXGGLOBAL *v21; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v23; // rcx
  KIRQL v24; // al
  char v27; // [rsp+58h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-78h] BYREF

  v4 = 0LL;
  v5 = qword_1401664C0 & 2;
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v4 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 186;
        DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_ProfilerEntryCount >= 0", 186LL, 0LL, 0LL, 0LL, 0LL);
      }
      v7 = *((_DWORD *)v4 + 13);
      if ( !v7 )
        *((_DWORD *)v4 + 14) = 5124;
      *((_DWORD *)v4 + 13) = v7 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 1213);
  CurrentIrql = KeGetCurrentIrql();
  v9 = CurrentIrql;
  v10 = 0LL;
  if ( CurrentIrql < 2u && (v11 = DXGTHREAD::GetCurrent(), (v10 = v11) != 0LL) )
    v12 = *((_DWORD *)v11 + 12);
  else
    v12 = 0;
  v27 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( *((_DWORD *)Global + 417) )
    {
      v18 = *((_DWORD *)this + 111);
      if ( (v18 & 0x20) == 0 && (v18 & 4) == 0 )
      {
        v19 = DXGPROCESS::GetCurrent();
        if ( v19 )
        {
          if ( (*((_BYTE *)v19 + 408) & 1) == 0 && (*((_DWORD *)v19 + 102) & 2) == 0 )
          {
            v20 = *((_DWORD *)Global + 417);
            if ( v20 == 2 || v20 == 1 && *((_BYTE *)v19 + 573) )
            {
              v21 = DXGGLOBAL::GetGlobal();
              SessionData = DXGGLOBAL::GetSessionData(v21);
              if ( SessionData )
              {
                v23 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                if ( v23 )
                {
                  KeStackAttachProcess(v23, &ApcState);
                  v27 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  v13 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 105))(*((_QWORD *)this + 36), a2, a3);
  if ( v27 )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v9 != KeGetCurrentIrql() )
  {
    v24 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v24);
    WdLogGlobalForLineNumber = 2578;
  }
  if ( v10 )
  {
    v14 = *((int *)v10 + 12);
    if ( (_DWORD)v14 != v12 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v10 + 12), v12, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1213);
  if ( (_DWORD)v13 != -1071775466 && (_DWORD)v13 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2580;
    DxgkLogInternalTriageEvent(
      0,
      0x40000,
      -1,
      (unsigned int)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v4 )
  {
    if ( *((int *)v4 + 13) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 196;
      DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_ProfilerEntryCount > 0", 196LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v4 + 13))-- == 1 )
      *((_DWORD *)v4 + 14) = -1;
  }
  if ( v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
  return (unsigned int)v13;
}
