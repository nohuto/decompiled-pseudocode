/*
 * XREFs of PopInitializePowerButtonHold @ 0x140CD502C
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopInitializeWorkItem @ 0x1407C8C6C (PopInitializeWorkItem.c)
 *     PopPowerButtonBugcheckConfigure @ 0x1407DAA14 (PopPowerButtonBugcheckConfigure.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     RtlIsStateSeparationEnabled @ 0x140AF47C0 (RtlIsStateSeparationEnabled.c)
 */

void __fastcall PopInitializePowerButtonHold(int a1)
{
  char v1; // bl
  struct _KLOCK_ENTRIES *v2; // r9
  struct _KLOCK_ENTRIES *v3; // r9
  __int64 v4; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES KeyHandle_8; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int64 v8; // [rsp+98h] [rbp-70h] BYREF
  WCHAR SourceString[264]; // [rsp+A8h] [rbp-60h] BYREF

  KeyHandle = 0LL;
  v1 = 0;
  LOBYTE(v4) = 0;
  DestinationString = 0LL;
  memset(&KeyHandle_8, 0, 44);
  if ( !a1 )
  {
    dword_140F0C420 = 0;
    LODWORD(stru_140F0C428.Header.WaitListHead.Flink) = 0;
    *(_QWORD *)&stru_140F0C428.Header.Lock = 0LL;
    memset_0(&PopModernStandbyStateNotify.Padding[2], 0, 0xE8uLL);
    memset_0(&PopModernStandbyStateNotify.SchedulerAssistPriorityFloor, 0, 0xA0uLL);
    PopModernStandbyStateNotify.SchedulerAssistPriorityFloor = 2;
    PopModernStandbyStateNotify.SchedulerAssistLastYieldBoostTime = (__int64)&PopBlackBoxEntries;
    PopModernStandbyStateNotify.AutoBoostThreadState = 0LL;
    LOWORD(PopModernStandbyStateNotify.Spare32) = 0;
    HIDWORD(PopModernStandbyStateNotify.UserAbEntries) = 0;
    LOBYTE(PopModernStandbyStateNotify.KcsanThread) = 0;
    *(unsigned __int64 *)((char *)&PopModernStandbyStateNotify.KcsanThread + 4) = 0LL;
    LODWORD(PopModernStandbyStateNotify.Padding[0]) = 24;
    PopModernStandbyStateNotify.Padding[1] = 0LL;
    PopInitializeWorkItem((__int64)&unk_140F0C390, (__int64)PopPowerButtonWorkCallback, 0LL);
    return;
  }
  if ( a1 == 1 )
  {
    if ( RtlIsStateSeparationEnabled() )
    {
      if ( (int)RtlGetPersistedStateLocation(L"PowerButton", 0LL, 0LL, 0, SourceString, 0x208u, (unsigned int *)&v8) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        KeyHandle_8.Length = 48;
        KeyHandle_8.ObjectName = &DestinationString;
        KeyHandle_8.RootDirectory = 0LL;
        KeyHandle_8.Attributes = 576;
        *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x11u, &KeyHandle_8) >= 0 )
        {
          qword_140F0C418 = (__int64)KeyHandle;
          qword_140F0C410 = (__int64)PopPowerButtonBugcheckWatchCallback;
          *(_QWORD *)qword_140F0C400 = 0LL;
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
    if ( ZwOpenKey(&KeyHandle, 0x11u, &KeyHandle_8) >= 0 )
    {
      if ( v1 )
      {
        qword_140F0C410 = (__int64)PopPowerButtonBugcheckWatchCallback;
        qword_140F0C418 = (__int64)KeyHandle;
        *(_QWORD *)qword_140F0C400 = 0LL;
      }
      PopPowerButtonBugcheckConfigure(KeyHandle, v1, &v4, v3);
    }
  }
}
