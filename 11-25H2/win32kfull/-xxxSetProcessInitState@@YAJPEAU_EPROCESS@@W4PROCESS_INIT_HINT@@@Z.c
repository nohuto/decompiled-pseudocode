/*
 * XREFs of ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x14018F204
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x14018E78C (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140289B08 (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     ?xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140289DC0 (-xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1401A4014 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ??1CWinEventNoopDeferral@@QEAA@XZ @ 0x1402450AC (--1CWinEventNoopDeferral@@QEAA@XZ.c)
 *     zzzCalcStartCursorHide @ 0x140245FC0 (zzzCalcStartCursorHide.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall xxxSetProcessInitState(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 ProcessWin32Process; // rdi
  int W32ProcessImpl; // ebx
  int v12; // eax
  struct _KEVENT *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // bl
  bool v22; // r14
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _BYTE v29[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v30; // [rsp+58h] [rbp-30h]
  int v31; // [rsp+A0h] [rbp+18h] BYREF

  v29[0] = 0;
  v30 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v29);
  if ( *(_DWORD *)(W32GetUserSessionState(v5, v4) + 70600) && !AtomicExecutionCheck::GetCount() )
  {
    v31 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1063LL);
  }
  UserSessionState = W32GetUserSessionState(v7, v6);
  ++*(_DWORD *)(UserSessionState + 70600);
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process )
  {
LABEL_7:
    if ( a2 )
    {
      v14 = *(_QWORD *)(W32GetUserGdiSessionState(v9) + 40);
      if ( PsGetCurrentProcess(v15) != v14 )
      {
        v31 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 170LL);
      }
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x20) != 0 )
      {
        v31 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 171LL);
      }
      *(_DWORD *)(ProcessWin32Process + 12) |= 0x20u;
      v18 = W32GetUserSessionState(v17, v16);
      *(_DWORD *)(v18 + 66800) |= 0x8000000u;
      v20 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v21 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v25,
          v24,
          *(_QWORD *)(v23 + 69160),
          4,
          2,
          10,
          (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
          ProcessWin32Process);
      }
      if ( a1 == *(_QWORD *)(W32GetUserGdiSessionState(v20) + 40) )
      {
        v31 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 183LL);
      }
      if ( a2 == 2 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) |= 2u;
        v26 = 0LL;
        v27 = 0LL;
      }
      else
      {
        if ( a2 != 1 )
        {
          v31 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 194LL);
        }
        v26 = 2000LL;
        v27 = ProcessWin32Process;
      }
      zzzCalcStartCursorHide(v27, v26);
      goto LABEL_37;
    }
    if ( (*(_DWORD *)(ProcessWin32Process + 808) & 0x10000000) != 0 )
    {
      v31 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 153LL);
    }
    v12 = *(_DWORD *)(ProcessWin32Process + 12);
    if ( (v12 & 4) != 0 )
    {
      if ( (v12 & 0x20) == 0 )
      {
        v31 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 159LL);
      }
      *(_DWORD *)(ProcessWin32Process + 12) &= ~4u;
      zzzCalcStartCursorHide(0LL, 0LL);
    }
    *(_DWORD *)(ProcessWin32Process + 12) |= 1u;
    v13 = *(struct _KEVENT **)(ProcessWin32Process + 16);
    if ( v13 )
    {
      if ( v13 == (struct _KEVENT *)-1LL )
      {
LABEL_37:
        W32ProcessImpl = 0;
        goto LABEL_38;
      }
      KeSetEvent(v13, 1, 0);
      ObfDereferenceObject(*(PVOID *)(ProcessWin32Process + 16));
    }
    *(_QWORD *)(ProcessWin32Process + 16) = -1LL;
    goto LABEL_37;
  }
  W32ProcessImpl = AllocateW32ProcessImpl(a1);
  if ( W32ProcessImpl >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(a1);
    goto LABEL_7;
  }
LABEL_38:
  CWinEventNoopDeferral::~CWinEventNoopDeferral((CWinEventNoopDeferral *)&v31);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v29);
  return (unsigned int)W32ProcessImpl;
}
