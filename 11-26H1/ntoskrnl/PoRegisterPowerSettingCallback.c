/*
 * XREFs of PoRegisterPowerSettingCallback @ 0x140B05F90
 * Callers:
 *     HvlPhase2Initialize @ 0x1405B8B08 (HvlPhase2Initialize.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1407DA2F0 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407DFAF8 (PopAdaptiveStandbyInitialize.c)
 *     SSHSupportRegisterPowerSettingCallback @ 0x1407E4508 (SSHSupportRegisterPowerSettingCallback.c)
 *     CmpInitializeLazyWriters @ 0x14085CCE4 (CmpInitializeLazyWriters.c)
 *     TtmInitCurrentSession @ 0x140A3A0D4 (TtmInitCurrentSession.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     VslRegisterIumPowerCallbacks @ 0x140CB99FC (VslRegisterIumPowerCallbacks.c)
 *     PopInitializePowerSettingCallbacks @ 0x140CD0CDC (PopInitializePowerSettingCallbacks.c)
 *     PpmInfoRegisterCallbacks @ 0x140CD2CF4 (PpmInfoRegisterCallbacks.c)
 *     PopNetInitialize @ 0x140CD4E38 (PopNetInitialize.c)
 *     PopEsInit @ 0x140CD59F4 (PopEsInit.c)
 *     PopModernStandbyNotificationInit @ 0x140CD6534 (PopModernStandbyNotificationInit.c)
 *     PopPowerAggregatorInitialize @ 0x140D0B4DC (PopPowerAggregatorInitialize.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     RtlPcToFileName @ 0x140419600 (RtlPcToFileName.c)
 *     PopSetNotificationWork @ 0x1404385A0 (PopSetNotificationWork.c)
 *     PopEnsureErratumSubscribed @ 0x140606D90 (PopEnsureErratumSubscribed.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopStateIsSessionSpecific @ 0x140A3E980 (PopStateIsSessionSpecific.c)
 *     PopFindPowerSettingConfiguration @ 0x140A3E9D0 (PopFindPowerSettingConfiguration.c)
 *     EmClientRuleEvaluate @ 0x140C03A80 (EmClientRuleEvaluate.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall PoRegisterPowerSettingCallback(
        PDEVICE_OBJECT DeviceObject,
        LPCGUID SettingGuid,
        PPOWER_SETTING_CALLBACK Callback,
        PVOID Context,
        PVOID *Handle)
{
  GUID *v7; // rdi
  bool v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 Pool2; // rax
  unsigned __int64 v12; // rbx
  GUID v13; // xmm0
  volatile unsigned int *PowerSettingConfiguration; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  volatile unsigned int **v17; // rcx
  NTSTATUS v18; // edi
  _KSCB *QueuedScb; // rax
  struct _LIST_ENTRY **p_Blink; // rax
  int v22; // [rsp+20h] [rbp-E0h] BYREF
  int v23; // [rsp+24h] [rbp-DCh]
  __int128 *v24; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING v25; // [rsp+30h] [rbp-D0h] BYREF
  PDEVICE_OBJECT v26; // [rsp+40h] [rbp-C0h]
  __int128 v27; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v28[528]; // [rsp+60h] [rbp-A0h] BYREF

  v26 = DeviceObject;
  v22 = 0;
  v27 = 0LL;
  v7 = (GUID *)SettingGuid;
  v25 = 0LL;
  v24 = 0LL;
  v8 = 0;
  v23 = dword_140F106CC;
  if ( PopStateIsSessionSpecific(SettingGuid) )
    return -1073741811;
  v9 = 0LL;
  if ( Callback )
  {
    v10 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *(_QWORD *)&v7->Data1;
    if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *(_QWORD *)&v7->Data1 )
      v10 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - *(_QWORD *)v7->Data4;
    if ( !v10 )
    {
      memset_0(v28, 0, 0x208uLL);
      v25.MaximumLength = 520;
      v25.Buffer = (wchar_t *)v28;
      if ( (int)RtlPcToFileName((unsigned __int64)Callback, &v25) >= 0 )
      {
        DWORD2(v27) = 16;
        *(_QWORD *)&v27 = &v25;
        v24 = &v27;
        if ( (int)EmClientRuleEvaluate(&GUID_EM_PO_CONSOLE_STATE_CHANGE_REMAP_RULE, &v24, 1LL, &v22) >= 0 )
        {
          p_Blink = &stru_140F11D08.WaitBlock[3].WaitListEntry.Blink;
          if ( v22 != 2 )
            p_Blink = 0LL;
          v9 = (unsigned __int64 *)p_Blink;
        }
      }
    }
  }
  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  Pool2 = ExAllocatePool2(0x100uLL);
  v12 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 1952797520;
    v13 = *v7;
    *(_QWORD *)(Pool2 + 80) = Callback;
    *(_QWORD *)(Pool2 + 88) = Context;
    *(GUID *)(Pool2 + 52) = v13;
    *(_QWORD *)(Pool2 + 96) = v26;
    if ( v9 )
    {
      PopEnsureErratumSubscribed(v9);
      v7 = (GUID *)(v9 + 2);
    }
    *(GUID *)(v12 + 36) = *v7;
    PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, -1);
    if ( PowerSettingConfiguration )
    {
      v15 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1 )
        v15 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_IDLE_BACKGROUND_TASK.Data4;
      if ( !v15 )
        goto LABEL_33;
      v16 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1 )
        v16 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_BACKGROUND_TASK_NOTIFICATION.Data4;
      if ( !v16 )
LABEL_33:
        *(_QWORD *)(v12 + 72) = *(_QWORD *)&PowerSettingConfiguration[2 * v23 + 16];
      v17 = (volatile unsigned int **)*((_QWORD *)PowerSettingConfiguration + 3);
      if ( *v17 != PowerSettingConfiguration + 4 )
LABEL_17:
        __fastfail(3u);
      *(_QWORD *)v12 = PowerSettingConfiguration + 4;
      *(_QWORD *)(v12 + 8) = v17;
      *v17 = (volatile unsigned int *)v12;
      *((_QWORD *)PowerSettingConfiguration + 3) = v12;
    }
    else
    {
      QueuedScb = stru_140F10828.QueuedScb;
      if ( (__int64 *)stru_140F10828.QueuedScb->GenerationCycles != &stru_140F10828.OtherTransferCount )
        goto LABEL_17;
      *(_QWORD *)v12 = &stru_140F10828.OtherTransferCount;
      *(_QWORD *)(v12 + 8) = QueuedScb;
      QueuedScb->GenerationCycles = v12;
      stru_140F10828.QueuedScb = (_KSCB *)v12;
    }
    v18 = 0;
    v8 = HIDWORD(stru_140F10070.Spare35[0]) >= 3;
    if ( Handle )
      *Handle = (PVOID)v12;
  }
  else
  {
    v18 = -1073741670;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  if ( v8 )
    PopSetNotificationWork(0x20u);
  return v18;
}
