/*
 * XREFs of NtUserGetWindowProcessHandle @ 0x1402995F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsShellProcess @ 0x1401A7FD8 (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x14027A188 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x140292A58 (-GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z.c)
 *     Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline @ 0x1402943A8 (Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline.c)
 */

void *__fastcall NtUserGetWindowProcessHandle(__int64 a1, ACCESS_MASK a2)
{
  const struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdi
  struct tagTHREADINFO *v11; // r14
  KPROCESSOR_MODE AccessMode; // bp
  __int64 *v13; // rbx
  int v14; // ecx
  void *v15; // rbx
  UIPrivilegeIsolation *v17; // rcx
  const struct tagUIPI_INFO *v18; // r8
  bool v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  const struct tagUIPI_INFO *v22; // rdx
  UIPrivilegeIsolation *v23; // rcx
  HANDLE ThreadProcessId; // rax
  PEPROCESS Process; // [rsp+40h] [rbp-38h] BYREF
  void *Handle; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  v4 = (const struct tagTHREADINFO *)EnterSharedCrit(0LL, 1LL);
  v6 = (struct tagWND *)ValidateHwnd(a1);
  if ( v6 )
  {
    if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    {
      Handle = GetWindowProcessHandleUnsafe(v6, v4, a2);
      goto LABEL_11;
    }
    v9 = PtiCurrent(v8, v7);
    v10 = *((_QWORD *)v6 + 2);
    v11 = v9;
    AccessMode = 0;
    if ( *(_QWORD *)(v10 + 496) != *((_QWORD *)v9 + 62) )
      goto LABEL_9;
    v13 = (__int64 *)((char *)v9 + 464);
    if ( a2 != 120 && (!(unsigned int)IsShellProcess(*v13) || a2 != 4096) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 28685);
      goto LABEL_9;
    }
    if ( (unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline() )
    {
      v22 = (const struct tagUIPI_INFO *)(*(_QWORD *)(v10 + 464) + 864LL);
      v23 = (UIPrivilegeIsolation *)(*v13 + 864);
    }
    else
    {
      v19 = UIPrivilegeIsolation::Enforced(v17);
      v20 = *(_QWORD *)(v10 + 464);
      v21 = *v13;
      if ( !v19 )
      {
        if ( *(_DWORD *)(v20 + 764) != *(_DWORD *)(v21 + 764) || *(_DWORD *)(v20 + 768) != *(_DWORD *)(v21 + 768) )
          goto LABEL_9;
LABEL_22:
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 528), 0, 0) & 0xC) == 0
          && ((unsigned int)Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline()
            ? (unsigned int)IsProcessDwm(**((_QWORD **)v11 + 58)) == 0
            : (*(_BYTE *)(v10 + 1360) & 4) == 0) )
        {
          Process = 0LL;
          ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v10);
          if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) >= 0 )
          {
            ObOpenObjectByPointer(Process, 0, 0LL, a2, (POBJECT_TYPE)PsProcessType, AccessMode, &Handle);
            ObfDereferenceObject(Process);
            goto LABEL_11;
          }
          v14 = 87;
          goto LABEL_10;
        }
LABEL_9:
        v14 = 5;
LABEL_10:
        Handle = 0LL;
        UserSetLastError(v14);
        goto LABEL_11;
      }
      v22 = (const struct tagUIPI_INFO *)(v20 + 864);
      v23 = (UIPrivilegeIsolation *)(v21 + 864);
    }
    if ( !UIPrivilegeIsolation::CheckAccess(v23, v22, v18) )
    {
      if ( *(int *)(*v13 + 12) >= 0 )
        goto LABEL_9;
      AccessMode = 1;
    }
    goto LABEL_22;
  }
LABEL_11:
  v15 = Handle;
  UserSessionSwitchLeaveCrit(v5);
  return v15;
}
