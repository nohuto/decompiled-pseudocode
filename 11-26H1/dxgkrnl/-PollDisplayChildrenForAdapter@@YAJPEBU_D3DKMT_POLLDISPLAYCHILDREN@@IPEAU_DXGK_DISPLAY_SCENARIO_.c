/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140410DCC
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x140410AB0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1402599CC (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403CFBC8 (-MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     DpiPollDisplayChildren @ 0x1403E6480 (DpiPollDisplayChildren.c)
 *     ?MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403E7D00 (-MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct DXGADAPTER *v6; // rsi
  struct _KTHREAD **v7; // rbx
  __int64 CurrentProcess; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  D3DKMT_HANDLE hAdapter; // edx
  struct DXGADAPTER *v13; // r13
  struct _KTHREAD **v14; // r8
  unsigned __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rdi
  PVOID v18; // rbx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v24; // eax
  int v25; // eax
  __int64 v26; // rsi
  int v27; // eax
  struct DXGADAPTER *v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h]
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v33; // [rsp+70h] [rbp-90h]
  DXGADAPTER *v34[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v35[144]; // [rsp+90h] [rbp-70h] BYREF

  Timeout.QuadPart = (LONGLONG)a3;
  v30 = a2;
  v33 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1);
  v6 = 0LL;
  v7 = Current;
  if ( Current )
  {
    hAdapter = a1->hAdapter;
    v29 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v34, hAdapter, Current, &v29, 1);
    v13 = v29;
    if ( v29 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v29, 0LL);
      LODWORD(v17) = COREADAPTERACCESS::AcquireExclusive((__int64)v35, (unsigned int)(v16 + 1));
      if ( (int)v17 >= 0 )
      {
        v18 = (PVOID)*((_QWORD *)v13 + 27);
        v29 = 0LL;
        Object = v18;
        ObfReferenceObject(v18);
        if ( (*((_DWORD *)a1 + 1) & 2) != 0
          && (v19 = MonitorAcquireMonitorPendingEvent(v13, &v29), v6 = v29, v17 = v19, v19 < 0) )
        {
          if ( v29 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1997;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pMonitorPendingEvent == NULL",
              1997LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1999;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed in acquiring monitor pending event (Status == 0x%I64x)!",
            v17,
            0LL,
            0LL,
            0LL,
            0LL);
          v18 = Object;
        }
        else if ( (*((_DWORD *)v33 + 1) & 4) != 0 )
        {
          v20 = DmmEnableModeResetOnMonitorEvent((PERESOURCE *)v13, 0);
          v17 = v20;
          if ( v20 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 2015;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed in disabling mode reset on monitor event (Status == 0x%I64x)!",
              v17,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v35);
        if ( (int)v17 >= 0 )
        {
          LODWORD(v17) = DpiPollDisplayChildren((__int64)v18, v30, (__int128 *)Timeout.QuadPart);
          ObfDereferenceObject(v18);
          if ( v6 )
          {
            if ( (int)v17 >= 0 )
            {
              Timeout.QuadPart = -10000000LL;
              PreviousMode = ExGetPreviousMode();
              v24 = KeWaitForSingleObject((char *)v6 + 24, UserRequest, PreviousMode, 0, &Timeout);
              v17 = v24;
              if ( v24 == 258 )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 2062;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Monitor pending event wait has been timeouted!",
                  2062LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else if ( v24 < 0 )
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 2067;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed in waiting for pending monitor event (Status == 0x%I64x)!",
                  v17,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            MonitorReleaseMonitorPendingEvent(v6, v22);
          }
          if ( (*((_DWORD *)v33 + 1) & 4) != 0 )
          {
            v25 = COREADAPTERACCESS::AcquireExclusive((__int64)v35, 1LL);
            v26 = v25;
            if ( v25 < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 2110;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!",
                v26,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            else
            {
              v27 = DmmEnableModeResetOnMonitorEvent((PERESOURCE *)v13, 1);
              v26 = v27;
              if ( v27 < 0 )
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 2102;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed in re-enabling mode reset on monitor event (Status == 0x%I64x)!",
                  v26,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v35);
            }
            if ( !(_DWORD)v17 )
              LODWORD(v17) = v26;
          }
        }
        else
        {
          ObfDereferenceObject(v18);
          if ( v6 )
            MonitorReleaseMonitorPendingEvent(v6, v21);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
      v9 = v17;
    }
    else
    {
      v14 = v7;
      v9 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, v14, a1->hAdapter);
      WdLogGlobalForLineNumber = 1963;
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v34, v15);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 1951;
    v11 = PsGetCurrentProcess(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v11,
      0LL,
      0LL,
      0LL);
  }
  return v9;
}
