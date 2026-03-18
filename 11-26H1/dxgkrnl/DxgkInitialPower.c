/*
 * XREFs of DxgkInitialPower @ 0x14023F3A4
 * Callers:
 *     DriverEntry @ 0x14044C078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitialPower()
{
  NTSTATUS v0; // ebx
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  OutputBuffer = 0;
  v0 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  if ( v0 >= 0 )
  {
    byte_140168DD8 = OutputBuffer;
    if ( OutputBuffer )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 4915;
      v0 = PoRegisterPowerSettingCallback(
             g_pDeviceObject,
             &GUID_MONITOR_POWER_ON,
             DpiMiracastHandlePowerCallback,
             0LL,
             &Handle);
      if ( v0 >= 0 )
      {
        v0 = PoRegisterPowerSettingCallback(
               g_pDeviceObject,
               &GUID_LOW_POWER_EPOCH,
               DpiMiracastHandlePowerCallback,
               0LL,
               &qword_1401692B0);
        if ( v0 >= 0 )
        {
          byte_140168DDA = 0;
          dword_1401692B8 = 0;
          qword_140169340 = (__int64)IoAllocateWorkItem(g_pDeviceObject);
          if ( qword_140169340 )
          {
            KeInitializeTimerEx(&Timer, SynchronizationTimer);
            KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)DpiMiracastConnectedStandbyDelayTimerDpc, 0LL);
          }
          else
          {
            v0 = -1073741801;
            WdLogSingleEntry1(6LL);
            WdLogGlobalForLineNumber = 4974;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4953;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4932;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4900;
  }
  return (unsigned int)v0;
}
