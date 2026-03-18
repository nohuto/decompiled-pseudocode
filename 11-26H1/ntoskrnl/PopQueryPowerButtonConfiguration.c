/*
 * XREFs of PopQueryPowerButtonConfiguration @ 0x14060D13C
 * Callers:
 *     PopPowerButtonBugcheckConfigure @ 0x1407DAA14 (PopPowerButtonBugcheckConfigure.c)
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 */

__int64 __fastcall PopQueryPowerButtonConfiguration(HANDLE KeyHandle, _BYTE *a2)
{
  int v4; // ebx
  NTSTATUS v5; // edx
  int v6; // ecx
  int v7; // eax
  NTSTATUS v8; // edi
  ULONG ResultLength; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-21h] BYREF
  UNICODE_STRING v13; // [rsp+68h] [rbp-11h] BYREF
  UNICODE_STRING v14; // [rsp+78h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+Fh] BYREF
  int v16; // [rsp+98h] [rbp+1Fh]

  v16 = 0;
  ResultLength = 0;
  v4 = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  KeyValueInformation = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PowerButtonBugcheck");
  RtlInitUnicodeString(&ValueName, L"OneSettingPowerButtonBugcheck");
  RtlInitUnicodeString(&v13, L"PowerButtonLiveDump");
  RtlInitUnicodeString(&v14, L"OneSettingPowerButtonLiveDump");
  v5 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x14u,
         &ResultLength);
  if ( v5 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
  {
    LODWORD(PopModernStandbyStateNotify.AutoBoostThreadState) = 0;
    v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( v5 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
    {
      HIDWORD(PopModernStandbyStateNotify.KernelAbEntries) = 0;
      v5 = -1073741823;
      dword_140F0C420 = 0;
      goto LABEL_14;
    }
    v7 = HIDWORD(KeyValueInformation);
    *a2 = 1;
    if ( v7 )
    {
      HIDWORD(PopModernStandbyStateNotify.KernelAbEntries) = 2;
      goto LABEL_10;
    }
    HIDWORD(PopModernStandbyStateNotify.KernelAbEntries) = 1;
LABEL_12:
    dword_140F0C420 = 1;
    goto LABEL_14;
  }
  v6 = HIDWORD(KeyValueInformation);
  *a2 = 1;
  if ( !v6 )
  {
    LODWORD(PopModernStandbyStateNotify.AutoBoostThreadState) = 1;
    goto LABEL_12;
  }
  LODWORD(PopModernStandbyStateNotify.AutoBoostThreadState) = 2;
LABEL_10:
  dword_140F0C420 = 2;
LABEL_14:
  DbgPrintEx(
    0x92u,
    2u,
    "%s (Bugcheck) completed with Status: %08x, ManualBugcheckConfig: %08x, OneSettingBugcheckConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    v5,
    LODWORD(PopModernStandbyStateNotify.AutoBoostThreadState),
    HIDWORD(PopModernStandbyStateNotify.KernelAbEntries));
  v8 = ZwQueryValueKey(KeyHandle, &v13, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
  if ( v8 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
  {
    v4 = WORD6(KeyValueInformation) & 0x1FF;
    BYTE1(PopModernStandbyStateNotify.Spare32) = 1;
    HIDWORD(PopModernStandbyStateNotify.UserAbEntries) = v4;
  }
  else
  {
    BYTE1(PopModernStandbyStateNotify.Spare32) = 0;
    HIDWORD(PopModernStandbyStateNotify.UserAbEntries) = 0;
    v8 = ZwQueryValueKey(KeyHandle, &v14, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( v8 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
    {
      LOBYTE(PopModernStandbyStateNotify.KcsanThread) = 0;
      v8 = -1073741823;
      HIDWORD(PopModernStandbyStateNotify.KcsanThread) = 0;
      goto LABEL_22;
    }
    v4 = WORD6(KeyValueInformation) & 0x1FF;
    LOBYTE(PopModernStandbyStateNotify.KcsanThread) = 1;
    HIDWORD(PopModernStandbyStateNotify.KcsanThread) = v4;
  }
  *a2 = 1;
LABEL_22:
  LODWORD(stru_140F0C428.Header.WaitListHead.Flink) = v4;
  DbgPrintEx(
    0x92u,
    2u,
    "%s (LiveDump) completed with Status: %08x, ManualLiveDumpConfig %08x, OneSettingLiveDumpConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    v8,
    HIDWORD(PopModernStandbyStateNotify.UserAbEntries),
    HIDWORD(PopModernStandbyStateNotify.KcsanThread));
  if ( (BYTE4(PopModernStandbyStateNotify.UserAbEntries) & 1) != 0
    && !LODWORD(PopModernStandbyStateNotify.AutoBoostThreadState)
    && dword_140F0C420 == 2 )
  {
    dword_140F0C420 = 1;
  }
  DbgPrintEx(
    0x92u,
    2u,
    "%s completed with settings: PopPowerButtonBugcheckConfig: %08x, PopPowerButtonLiveDumpConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    dword_140F0C420,
    LODWORD(stru_140F0C428.Header.WaitListHead.Flink));
  return (unsigned int)v8;
}
