/*
 * XREFs of EtwActivityIdControl @ 0x140460340
 * Callers:
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x14047B8F0 (IopInitActivityIdIrp.c)
 *     IoSetActivityIdIrp @ 0x14047BB00 (IoSetActivityIdIrp.c)
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405CEAAC (IoWriteDeferredLiveDumpData.c)
 *     PopAdaptiveStandbyActivatorCallback @ 0x140613F50 (PopAdaptiveStandbyActivatorCallback.c)
 *     PopAdaptiveStandbyActionWorker @ 0x1407E2C70 (PopAdaptiveStandbyActionWorker.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407E4270 (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407E44EC (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyInitializeActivator @ 0x1407E48B4 (PopAdaptiveStandbyInitializeActivator.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407E4A18 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x1407E4B50 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopAdaptiveStandbyPowerSettingCallback @ 0x1407E4C70 (PopAdaptiveStandbyPowerSettingCallback.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E6000 (PopAdaptiveStandbyWnfCallback.c)
 *     VrpPostOpenOrCreate @ 0x1408ABF08 (VrpPostOpenOrCreate.c)
 *     VrpPreRenameKey @ 0x1408AC300 (VrpPreRenameKey.c)
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 *     VrpPreOpenOrCreate @ 0x140937770 (VrpPreOpenOrCreate.c)
 *     VrpPostEnumerateKey @ 0x140938960 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140938F20 (VrpPostQueryKey.c)
 *     VrpIoctlDeviceDispatch @ 0x140939F20 (VrpIoctlDeviceDispatch.c)
 *     VrpPreQueryKeyName @ 0x140AA5E64 (VrpPreQueryKeyName.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 *     VrpPostUnloadKey @ 0x140B63F7C (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x140B63FF4 (VrpPreFlushKey.c)
 * Callees:
 *     EtwpCreateActivityId @ 0x1404604EC (EtwpCreateActivityId.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

NTSTATUS __stdcall EtwActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  NTSTATUS v3; // edi
  struct _KTHREAD *CurrentThread; // rdx
  char *Teb; // r8
  void *v6; // rsi
  _KPROCESS *Process; // rdx
  __int16 v9; // ax
  ULONG v10; // ecx
  ULONG v11; // ecx
  volatile signed __int64 *EtwSupport; // rdx
  GUID v13; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( ControlCode == 3 )
  {
    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
    *(_QWORD *)ActivityId->Data4 = _InterlockedIncrement64(EtwSupport + 1);
    RtlCopyVolatileMemory(ActivityId, (const void *)EtwSupport, 8uLL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = (char *)CurrentThread->Teb;
    if ( !Teb )
      return -1073741637;
    v6 = Teb + 5904;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v9 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v9 == 332 || v9 == 452 )
        v6 = Teb + 12112;
    }
    if ( ControlCode == 1 )
    {
      RtlCopyFromUser(ActivityId, v6, 0x10uLL);
    }
    else
    {
      v10 = ControlCode - 2;
      if ( v10 )
      {
        v11 = v10 - 2;
        if ( v11 )
        {
          if ( v11 == 1 )
          {
            RtlCopyFromUser(ActivityId, v6, 0x10uLL);
            EtwpCreateActivityId(v6);
          }
          else
          {
            return -1073741811;
          }
        }
        else
        {
          v13 = 0LL;
          RtlCopyFromUser(&v13, v6, 0x10uLL);
          RtlCopyToUser(v6, ActivityId, 0x10uLL);
          *ActivityId = v13;
        }
      }
      else
      {
        RtlCopyToUser(v6, ActivityId, 0x10uLL);
      }
    }
  }
  return v3;
}
