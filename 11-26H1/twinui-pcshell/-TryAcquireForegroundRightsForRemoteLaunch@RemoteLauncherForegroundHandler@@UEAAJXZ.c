/*
 * XREFs of ?TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ @ 0x1803D8E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801A8400 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1801D2138 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RemoteLauncherForegroundHandler::TryAcquireForegroundRightsForRemoteLaunch(
        RemoteLauncherForegroundHandler *this)
{
  DWORD ProcessId; // edi
  int CallingProcessHandle; // ebx
  __int64 v4; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE Process; // [rsp+38h] [rbp+10h] BYREF

  ProcessId = 0;
  Process = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle((__int64)this, 0, &Process);
  if ( CallingProcessHandle >= 0 )
    ProcessId = GetProcessId(Process);
  CAutoHandle<void *>::~CAutoHandle<void *>(&Process);
  if ( CallingProcessHandle < 0 )
  {
    v4 = 31LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\remotelauncherforegroundhandler\\lib\\remotelauncherforegroundhandler.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    return (unsigned int)CallingProcessHandle;
  }
  CallingProcessHandle = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6));
  if ( CallingProcessHandle < 0 )
  {
    v4 = 32LL;
    goto LABEL_5;
  }
  if ( AllowSetForegroundWindow(ProcessId) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x21,
             (__int64)"pcshell\\twinui\\remotelauncherforegroundhandler\\lib\\remotelauncherforegroundhandler.cpp",
             v6);
}
