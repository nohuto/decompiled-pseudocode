/*
 * XREFs of NtSetSystemPowerState @ 0x140C032E0
 * Callers:
 *     DifNtSetSystemPowerStateWrapper @ 0x1406917F0 (DifNtSetSystemPowerStateWrapper.c)
 *     NtShutdownSystem @ 0x1406CF7D0 (NtShutdownSystem.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     PsTerminateServerSilo @ 0x1407F4380 (PsTerminateServerSilo.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

NTSTATUS __cdecl NtSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE LightestSystemState, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // di
  NTSTATUS v8; // ebx
  unsigned __int64 CurrentServerSilo; // rsi
  __int64 v10; // rdx
  int v11; // eax
  PVOID v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v23; // kr00_16
  PLARGE_INTEGER Timeouta; // [rsp+28h] [rbp-39h]
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-39h]
  _DWORD v27[4]; // [rsp+38h] [rbp-29h] BYREF
  __int128 v28; // [rsp+48h] [rbp-19h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE Event[32]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v31; // [rsp+88h] [rbp+27h] BYREF
  __int128 *v32; // [rsp+98h] [rbp+37h]

  v32 = 0LL;
  v27[2] = 0;
  v28 = 0LL;
  *(_OWORD *)P = 0LL;
  memset(Event, 0, sizeof(Event));
  v31 = 0LL;
  if ( (unsigned int)(LightestSystemState - 1) > 5
    || (unsigned int)(SystemAction - 1) > 6
    || (Flags & 0xCFFFFC0) != 0
    || SystemAction < PowerActionShutdown && dword_140F10434 >= 17 )
  {
    v8 = -1073741811;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    PreviousMode = CurrentThread->PreviousMode;
    if ( !PreviousMode || SeSinglePrivilegeCheck(SeShutdownPrivilege, CurrentThread->PreviousMode) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      if ( PsIsHostSilo(CurrentServerSilo) )
      {
        v27[0] = SystemAction;
        LOBYTE(v10) = PreviousMode;
        v27[1] = Flags;
        *(_QWORD *)&v28 = 0xA000000005LL;
        v11 = PoCaptureReasonContext(0LL, v10, 0LL, 0, 0LL, P);
        v12 = P[0];
        if ( v11 < 0 )
          v12 = 0LL;
        P[0] = v12;
        KeInitializeEvent((PRKEVENT)Event, NotificationEvent, 0);
        v32 = &v28;
        *((_QWORD *)&v28 + 1) = Event;
        PopAcquirePolicyLock(v14, v13);
        PopExecutePowerAction(&v28, 0, v27, LightestSystemState, 1u);
        PopReleasePolicyLock(v16, v15, v17, v18, Timeouta);
        if ( (_QWORD)v31 )
        {
          KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
          PopAcquirePolicyLock(v20, v19);
          v23 = v31;
          if ( *(__int128 **)(v31 + 8) != &v31 || **((__int128 ***)&v31 + 1) != &v31 )
            __fastfail(3u);
          **((_QWORD **)&v31 + 1) = v31;
          *(_QWORD *)(v23 + 8) = *((_QWORD *)&v23 + 1);
          PopReleasePolicyLock(v23, &v31, v21, v22, Timeout);
        }
        v8 = *(_DWORD *)&Event[24];
      }
      else if ( (unsigned int)(SystemAction - 4) > 2 )
      {
        v8 = -1073741637;
      }
      else
      {
        PsTerminateServerSilo(CurrentServerSilo);
        v8 = 0;
      }
    }
    else
    {
      v8 = -1073741727;
    }
  }
  if ( P[0] )
    PoDestroyReasonContext((_QWORD *)P[0]);
  return v8;
}
