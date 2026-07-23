/*
 * XREFs of PipKsrCallback @ 0x1407B5D70
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     PipKsrDeferredHardwareInit @ 0x1407B5E64 (PipKsrDeferredHardwareInit.c)
 *     PipKsrNotifyDrivers @ 0x1407B5F5C (PipKsrNotifyDrivers.c)
 */

void __fastcall PipKsrCallback(PVOID CallbackContext, char *Argument1, int *Argument2)
{
  char *v3; // rdx
  char *v4; // rdx
  char *v5; // rdx
  char *v6; // rdx
  char *v7; // rdx
  GUID *v8; // rcx
  int SystemInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( Argument1 )
  {
    v3 = Argument1 - 1;
    if ( !v3 )
    {
      if ( !PnpKsrPrepared )
        return;
      PnpKsrPrepared = 0;
      v8 = &GUID_KERNEL_SOFT_RESTART_CANCEL;
      PnpKsrIsHhrPrepare = 0;
      goto LABEL_16;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      v8 = &GUID_KERNEL_SOFT_RESTART_PRE_COMPLETE;
LABEL_16:
      PipKsrNotifyDrivers(v8);
      return;
    }
    v5 = v4 - 3;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
      {
        PipKsrDeferredHardwareInit(CallbackContext);
        return;
      }
      v7 = v6 - 14;
      if ( v7 )
      {
        if ( v7 != (char *)5 )
          return;
        v8 = &GUID_RECOVERY_PCI_PREPARE_SHUTDOWN;
      }
      else
      {
        v8 = &GUID_RECOVERY_NVMED_PREPARE_SHUTDOWN;
      }
      goto LABEL_16;
    }
    if ( *Argument2 >= 0 )
      *Argument2 = PipKsrNotifyDrivers(&GUID_KERNEL_SOFT_RESTART_FINALIZE);
  }
  else if ( *Argument2 >= 0 )
  {
    *Argument2 = PipKsrNotifyDrivers(&GUID_KERNEL_SOFT_RESTART_PREPARE);
    PnpKsrPrepared = 1;
    SystemInformation = 0;
    ZwQuerySystemInformation(SystemSoftRebootInformation, &SystemInformation, 4u, 0LL);
    PnpKsrIsHhrPrepare = (SystemInformation & 0x40) != 0;
  }
}
