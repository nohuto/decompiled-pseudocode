/*
 * XREFs of QueuePowerRequest @ 0x1400E9340
 * Callers:
 *     UserPowerEventCallout @ 0x1400E906C (UserPowerEventCallout.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B003C (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1401B27F4 (UserPowerStateCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     EnterPowerCrit @ 0x1400E95D0 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9600 (LeavePowerCrit.c)
 *     EtwTraceCompletePowerRequest @ 0x1400E96A4 (EtwTraceCompletePowerRequest.c)
 *     ?NotifyPoRequestQueued@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1400EA2DC (-NotifyPoRequestQueued@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400EA3AC (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     McTemplateK0xdx_EtwWriteTransfer @ 0x1400EA500 (McTemplateK0xdx_EtwWriteTransfer.c)
 */

__int64 __fastcall QueuePowerRequest(_OWORD *a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  NTSTATUS v26; // edi

  v4 = Win32AllocPoolZInitImpl(64LL, 0x60uLL, 0x6F707355u);
  v5 = v4;
  if ( !v4 )
    return 3221225495LL;
  *(_DWORD *)(v4 + 88) = 32;
  if ( a1 )
  {
    v6 = (_OWORD *)(v4 + 48);
    *v6 = *a1;
    v6[1] = a1[1];
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(v5 + 80) = v6;
  if ( a2 )
    KeInitializeEvent((PRKEVENT)(v5 + 16), SynchronizationEvent, 0);
  *(_BYTE *)(v5 + 44) = a2;
  EnterPowerCrit();
  if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 2728) )
  {
    if ( a1 )
    {
      v10 = *((unsigned int *)a1 + 4);
      if ( (((_DWORD)v10 - 4) & 0xFFFFFFF3) == 0 && (_DWORD)v10 != 8 )
      {
        UserSessionState = W32GetUserSessionState(v10, v9);
        ++*(_DWORD *)(UserSessionState + 560);
        if ( *(_DWORD *)(W32GetUserSessionState(v13, v12) + 560) == 1 )
        {
          v16 = W32GetUserSessionState(v15, v14);
          ArmPowerWatchdog(*(_QWORD *)(v16 + 544), 16LL);
        }
      }
    }
    NotifyPoRequestQueued((struct tagPOWERREQUEST *)v5);
    v18 = *(_QWORD *)(v5 + 72);
    v19 = *(unsigned int *)(v5 + 64);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0xdx_EtwWriteTransfer(v18, v19, v17, v5, v19, *(_QWORD *)(v5 + 72));
    v20 = W32GetUserSessionState(v18, v19) + 496;
    v21 = *(_QWORD *)v20;
    if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 )
      __fastfail(3u);
    *(_QWORD *)v5 = v21;
    *(_QWORD *)(v5 + 8) = v20;
    *(_QWORD *)(v21 + 8) = v5;
    *(_QWORD *)v20 = v5;
    LeavePowerCrit();
    v24 = W32GetUserSessionState(v23, v22);
    KeSetEvent(*(PRKEVENT *)(v24 + 520), 1, 0);
    if ( !a2 )
      return 0LL;
    v26 = KeWaitForSingleObject((PVOID)(v5 + 16), WrUserRequest, 0, 0, 0LL);
    if ( v26 >= 0 )
      v26 = *(_DWORD *)(v5 + 40);
  }
  else
  {
    v26 = -2143420409;
    LeavePowerCrit();
  }
  EtwTraceCompletePowerRequest(v5, *(unsigned int *)(v5 + 40));
  GreDeleteFastMutex((char *)v5);
  return (unsigned int)v26;
}
