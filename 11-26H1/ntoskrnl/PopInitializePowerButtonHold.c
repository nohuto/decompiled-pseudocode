/*
 * XREFs of PopInitializePowerButtonHold @ 0x140CDB3CC
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopInitializeWorkItem @ 0x1407CBD0C (PopInitializeWorkItem.c)
 *     PopPowerButtonBugcheckConfigure @ 0x1407DE904 (PopPowerButtonBugcheckConfigure.c)
 *     RtlGetPersistedStateLocation @ 0x140A0FF10 (RtlGetPersistedStateLocation.c)
 *     RtlIsStateSeparationEnabled @ 0x140AF6E60 (RtlIsStateSeparationEnabled.c)
 */

void __fastcall PopInitializePowerButtonHold(int a1)
{
  char v1; // bl
  struct _KLOCK_ENTRIES *v2; // r9
  struct _KLOCK_ENTRIES *v3; // r9
  __int64 v4; // [rsp+48h] [rbp-C0h] BYREF
  struct _LIST_ENTRY *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES KeyHandle_8; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  ULONG BufferLengthOut[4]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR SourceString[264]; // [rsp+A8h] [rbp-60h] BYREF

  KeyHandle = 0LL;
  v1 = 0;
  LOBYTE(v4) = 0;
  DestinationString = 0LL;
  memset(&KeyHandle_8, 0, 44);
  if ( !a1 )
  {
    *(_DWORD *)&PopPdcDeviceListLock.ApcStateFill[40] = 0;
    LODWORD(PopPdcDeviceListLock.WaitBlockList) = 0;
    PopPdcDeviceListLock.WaitStatus = 0LL;
    memset_0(&PopPdcDeviceListLock.RelativeTimerBias, 0, 0xE8uLL);
    memset_0(&PopPdcDeviceListLock.QueueListEntry.Blink, 0, 0xA0uLL);
    LODWORD(PopPdcDeviceListLock.QueueListEntry.Blink) = 2;
    PopPdcDeviceListLock.SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)&PopBlackBoxEntries;
    *(_QWORD *)&PopPdcDeviceListLock.SavedApcStateFill[40] = 0LL;
    *(_WORD *)&PopPdcDeviceListLock.SchedulerApc.Type = 0;
    PopPdcDeviceListLock.SchedulerApc.SpareLong0 = 0;
    PopPdcDeviceListLock.SchedulerApcFill3[8] = 0;
    *(_QWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[12] = 0LL;
    *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[32] = 24;
    PopPdcDeviceListLock.Teb = 0LL;
    PopInitializeWorkItem((__int64)&PopPdcDeviceListLock.WaitBlockFill11[64], (__int64)PopPowerButtonWorkCallback, 0LL);
    return;
  }
  if ( a1 == 1 )
  {
    if ( RtlIsStateSeparationEnabled() )
    {
      if ( RtlGetPersistedStateLocation(
             L"PowerButton",
             0LL,
             0LL,
             LocationTypeRegistry,
             SourceString,
             0x208u,
             BufferLengthOut) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        KeyHandle_8.Length = 48;
        KeyHandle_8.ObjectName = &DestinationString;
        KeyHandle_8.RootDirectory = 0LL;
        KeyHandle_8.Attributes = 576;
        *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
        if ( ZwOpenKey((PHANDLE)&KeyHandle, 0x11u, &KeyHandle_8) >= 0 )
        {
          PopPdcDeviceListLock.QueueListEntry.Flink = KeyHandle;
          *(_QWORD *)&PopPdcDeviceListLock.ThreadFlags2 = PopPowerButtonBugcheckWatchCallback;
          PopPdcDeviceListLock.Spare18 = 0LL;
          PopPowerButtonBugcheckConfigure(KeyHandle, 1, &v4, v2);
          if ( (_BYTE)v4 )
            return;
        }
      }
    }
    else
    {
      v1 = 1;
    }
    RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER");
    KeyHandle_8.Length = 48;
    KeyHandle_8.ObjectName = &DestinationString;
    KeyHandle_8.RootDirectory = 0LL;
    KeyHandle_8.Attributes = 576;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKey((PHANDLE)&KeyHandle, 0x11u, &KeyHandle_8) >= 0 )
    {
      if ( v1 )
      {
        *(_QWORD *)&PopPdcDeviceListLock.ThreadFlags2 = PopPowerButtonBugcheckWatchCallback;
        PopPdcDeviceListLock.QueueListEntry.Flink = KeyHandle;
        PopPdcDeviceListLock.Spare18 = 0LL;
      }
      PopPowerButtonBugcheckConfigure(KeyHandle, v1, &v4, v3);
    }
  }
}
