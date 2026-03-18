/*
 * XREFs of EtwActivityIdControl @ 0x140466BF0
 * Callers:
 *     IoReuseIrp @ 0x140268650 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x140481F80 (IopInitActivityIdIrp.c)
 *     IoSetActivityIdIrp @ 0x140482190 (IoSetActivityIdIrp.c)
 *     IoCaptureLiveDump @ 0x14051255C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405CC298 (IoWriteDeferredLiveDumpData.c)
 *     PopAdaptiveStandbyActivatorCallback @ 0x140610CE0 (PopAdaptiveStandbyActivatorCallback.c)
 *     PopAdaptiveStandbyActionWorker @ 0x1407DE5F0 (PopAdaptiveStandbyActionWorker.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407DF87C (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407DFAF8 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyInitializeActivator @ 0x1407DFE6C (PopAdaptiveStandbyInitializeActivator.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407DFFD0 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x1407E0110 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopAdaptiveStandbyPowerSettingCallback @ 0x1407E0230 (PopAdaptiveStandbyPowerSettingCallback.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E1100 (PopAdaptiveStandbyWnfCallback.c)
 *     VrpPostOpenOrCreate @ 0x1408A5A98 (VrpPostOpenOrCreate.c)
 *     VrpPreRenameKey @ 0x1408A5E90 (VrpPreRenameKey.c)
 *     VrpRegistryCallback @ 0x140973A30 (VrpRegistryCallback.c)
 *     VrpPreOpenOrCreate @ 0x140975760 (VrpPreOpenOrCreate.c)
 *     VrpPostEnumerateKey @ 0x140976950 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140976F10 (VrpPostQueryKey.c)
 *     VrpIoctlDeviceDispatch @ 0x140977F10 (VrpIoctlDeviceDispatch.c)
 *     VrpPreQueryKeyName @ 0x140AA9B60 (VrpPreQueryKeyName.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 *     VrpPostUnloadKey @ 0x140B60EDC (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x140B60F54 (VrpPreFlushKey.c)
 * Callees:
 *     EtwpCreateActivityId @ 0x140466D9C (EtwpCreateActivityId.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
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
