/*
 * XREFs of ADAPTER_RENDER_DdiSubmitCommandToHwQueue @ 0x140010540
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSubmitCommandToHwQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct DXGTHREAD *v4; // rdi
  __int64 v5; // r13
  struct DXGTHREAD *Current; // rax
  int v7; // eax
  KIRQL CurrentIrql; // al
  __int64 v9; // r12
  struct DXGTHREAD *v10; // rbp
  int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(_QWORD, __int64); // rax
  int v15; // esi
  __int64 v16; // rcx
  __int64 v19; // rbx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // eax
  struct DXGPROCESS *v24; // rax
  int v25; // ecx
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v27; // rcx
  int v28; // edx
  int v29; // r8d
  struct DXGTHREAD *v30; // rax
  KIRQL v31; // al
  char v33; // [rsp+70h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-70h] BYREF

  v2 = a2;
  v4 = 0LL;
  v5 = qword_1401664C0 & 2;
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
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
        *((_DWORD *)v4 + 14) = 5112;
      *((_DWORD *)v4 + 13) = v7 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v9 = CurrentIrql;
  v10 = 0LL;
  if ( CurrentIrql < 2u && (v30 = DXGTHREAD::GetCurrent(), (v10 = v30) != 0LL) )
    v11 = *((_DWORD *)v30 + 12);
  else
    v11 = 0;
  v12 = *(_QWORD *)(a1 + 16);
  v33 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2650;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v21,
            v20,
            v22,
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
    v19 = *(_QWORD *)&DXGGLOBAL::m_pGlobal;
    if ( *(_DWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 1668LL) )
    {
      v23 = *(_DWORD *)(v12 + 444);
      if ( (v23 & 0x20) == 0 && (v23 & 4) == 0 )
      {
        v24 = DXGPROCESS::GetCurrent();
        if ( v24 )
        {
          if ( (*((_BYTE *)v24 + 408) & 1) == 0 && (*((_DWORD *)v24 + 102) & 2) == 0 )
          {
            v25 = *(_DWORD *)(v19 + 1668);
            if ( v25 == 2 || v25 == 1 && *((_BYTE *)v24 + 573) )
            {
              if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2650;
                if ( bTracingEnabled )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
                    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                      2650,
                      v28,
                      v29,
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
              SessionData = DXGGLOBAL::GetSessionData(*(DXGGLOBAL **)&DXGGLOBAL::m_pGlobal);
              if ( SessionData )
              {
                v27 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                if ( v27 )
                {
                  KeStackAttachProcess(v27, &ApcState);
                  v33 = 1;
                }
              }
            }
          }
        }
      }
    }
    v2 = a2;
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(__int64 (__fastcall **)(_QWORD, __int64))(v13 + 1120);
  if ( v14 )
    v15 = v14(*(_QWORD *)(v13 + 288), v2);
  else
    v15 = -1073741822;
  if ( v33 )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v9 != KeGetCurrentIrql() )
  {
    v31 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, a1, v9, v31);
    WdLogGlobalForLineNumber = 1490;
  }
  if ( v10 )
  {
    v16 = *((int *)v10 + 12);
    if ( (_DWORD)v16 != v11 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v10 + 12), v11, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 4852LL));
  if ( v15 != -1073741822 && v15 != -1073741811 && v15 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1492;
    DxgkLogInternalTriageEvent(
      0,
      0x40000,
      -1,
      (unsigned int)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v15,
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
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
  return (unsigned int)v15;
}
