/*
 * XREFs of QueuePowerRequest @ 0x140111D40
 * Callers:
 *     UserPowerStateCallout @ 0x1401118A8 (UserPowerStateCallout.c)
 *     UserPowerEventCallout @ 0x140111CEC (UserPowerEventCallout.c)
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B6474 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?NotifyPoRequestQueued@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x140111F88 (-NotifyPoRequestQueued@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     McTemplateK0xdx_EtwWriteTransfer @ 0x140112020 (McTemplateK0xdx_EtwWriteTransfer.c)
 *     EtwTraceCompletePowerRequest @ 0x140112440 (EtwTraceCompletePowerRequest.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1401C1404 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 */

__int64 __fastcall QueuePowerRequest(_OWORD *a1, char a2)
{
  __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rbx
  _OWORD *v9; // rax
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  int v26; // r8d
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rax
  NTSTATUS v30; // edi
  __int64 v31; // rax
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9

  v4 = Win32AllocPoolZInitImpl(64LL, 0x60uLL, 0x6F707355u);
  v8 = v4;
  if ( !v4 )
    return 3221225495LL;
  *(_DWORD *)(v4 + 88) = 32;
  if ( a1 )
  {
    v9 = (_OWORD *)(v4 + 48);
    *v9 = *a1;
    v9[1] = a1[1];
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)(v8 + 80) = v9;
  if ( a2 )
    KeInitializeEvent((PRKEVENT)(v8 + 16), SynchronizationEvent, 0);
  *(_BYTE *)(v8 + 44) = a2;
  UserSessionState = W32GetUserSessionState(v6, v5, v7);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 512));
  if ( *(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 2728) )
  {
    if ( a1 )
    {
      v17 = *((_DWORD *)a1 + 4);
      if ( v17 == 4 || ((v17 - 12) & 0xFFFFFFFB) == 0 )
      {
        v18 = W32GetUserSessionState(v15, v14, v16);
        ++*(_DWORD *)(v18 + 560);
        if ( *(_DWORD *)(W32GetUserSessionState(v20, v19, v21) + 560) == 1 )
        {
          v25 = W32GetUserSessionState(v23, v22, v24);
          ArmPowerWatchdog(*(_QWORD *)(v25 + 544), 16LL);
        }
      }
    }
    NotifyPoRequestQueued((struct tagPOWERREQUEST *)v8);
    v27 = *(_QWORD *)(v8 + 72);
    v28 = *(_DWORD *)(v8 + 64);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0xdx_EtwWriteTransfer(v27, v28, v26, v8, v28, *(_QWORD *)(v8 + 72));
    v29 = W32GetUserSessionState(v27, v28, v26) + 496;
    v15 = *(_QWORD *)v29;
    if ( *(_QWORD *)(*(_QWORD *)v29 + 8LL) != v29 )
      __fastfail(3u);
    *(_QWORD *)v8 = v15;
    v30 = 0;
    *(_QWORD *)(v8 + 8) = v29;
    *(_QWORD *)(v15 + 8) = v8;
    *(_QWORD *)v29 = v8;
  }
  else
  {
    v30 = -2143420409;
  }
  v31 = W32GetUserSessionState(v15, v14, v16);
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v31 + 512));
  if ( v30 >= 0 )
  {
    v35 = W32GetUserSessionState(v33, v32, v34);
    KeSetEvent(*(PRKEVENT *)(v35 + 520), 1, 0);
    if ( !a2 )
      return 0LL;
    v30 = KeWaitForSingleObject((PVOID)(v8 + 16), WrUserRequest, 0, 0, 0LL);
    if ( v30 >= 0 )
      v30 = *(_DWORD *)(v8 + 40);
  }
  EtwTraceCompletePowerRequest(v8, *(unsigned int *)(v8 + 40));
  GreDeleteFastMutex((char *)v8, v37, v38, v39);
  return (unsigned int)v30;
}
