/*
 * XREFs of PnpSurpriseFailUnsafeDmaDevices @ 0x140B130B4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14090E200 (PnpSynchronizeDeviceEventQueue.c)
 *     PiIommuIsDeviceSafeWhileConsoleLocked @ 0x140B131EC (PiIommuIsDeviceSafeWhileConsoleLocked.c)
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x140B1320C (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140B13278 (PipDmgEnforceEnumerationPolicy.c)
 *     PiCslIsConsoleLocked @ 0x140B133D8 (PiCslIsConsoleLocked.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140B46AD8 (PnpPowerStateTransitionWatchdogPopRecord.c)
 */

void PnpSurpriseFailUnsafeDmaDevices()
{
  int v0; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v2; // ebx
  __int64 v3; // rdx
  char v4; // di
  int v5; // ebx
  _QWORD *i; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx

  if ( PipDmaGuardPolicy != 2 || !(unsigned __int8)PiCslIsConsoleLocked() )
    return;
  v0 = PnpPowerStateTransitionWatchdogPushRecord();
  CurrentThread = KeGetCurrentThread();
  v2 = v0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  if ( v2 >= 0 )
    PnpPowerStateTransitionWatchdogPopRecord();
  v4 = 0;
  if ( IopRootDeviceNode )
  {
    for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); ; i = v8 )
    {
LABEL_11:
      if ( !i )
        break;
      v7 = i[90];
      if ( v7 && (*(_BYTE *)(v7 + 16) & 2) != 0 && !(unsigned __int8)PiIommuIsDeviceSafeWhileConsoleLocked(v7, v3) )
      {
        PipDmgEnforceEnumerationPolicy((ULONG_PTR)i);
        v4 = 1;
      }
      else
      {
        v8 = (_QWORD *)i[1];
        if ( v8 )
          continue;
      }
      v8 = (_QWORD *)*i;
      if ( !*i )
      {
        while ( i != IopRootDeviceNode )
        {
          i = (_QWORD *)i[2];
          v9 = (_QWORD *)*i;
          if ( *i )
          {
            i = (_QWORD *)*i;
            if ( v9 != IopRootDeviceNode )
              goto LABEL_11;
            goto LABEL_7;
          }
        }
        break;
      }
    }
  }
LABEL_7:
  ExReleaseResourceLite(&IopDeviceTreeLock);
  ExReleaseResourceLite(&PiEngineLock);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    v5 = PnpPowerStateTransitionWatchdogPushRecord();
    PnpSynchronizeDeviceEventQueue();
    if ( v5 >= 0 )
      PnpPowerStateTransitionWatchdogPopRecord();
  }
}
