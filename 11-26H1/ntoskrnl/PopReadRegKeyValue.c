/*
 * XREFs of PopReadRegKeyValue @ 0x1404E60C8
 * Callers:
 *     PopReadUlongPowerKey @ 0x140603800 (PopReadUlongPowerKey.c)
 *     PopDiagTraceAbnormalReset @ 0x14060ABE4 (PopDiagTraceAbnormalReset.c)
 *     PopQueryRestrictedStandbyTimeoutSeconds @ 0x1407CBFCC (PopQueryRestrictedStandbyTimeoutSeconds.c)
 *     PopDiagTracePerfTrackData @ 0x140AF7650 (PopDiagTracePerfTrackData.c)
 *     PopEsOverrideSetByGroupPolicy @ 0x140B772DC (PopEsOverrideSetByGroupPolicy.c)
 *     PopCheckShutdownMarker @ 0x140CD620C (PopCheckShutdownMarker.c)
 *     PopBatteryReadOscBits @ 0x140CDB130 (PopBatteryReadOscBits.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadRegKeyValue(wchar_t *a1, const WCHAR *a2, size_t a3, int a4, void *a5)
{
  _DWORD *Pool2; // rdi
  size_t v9; // rax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+20h] BYREF

  DestinationString.Buffer = a1;
  Pool2 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  if ( a1 )
  {
    v9 = 2 * wcslen(a1);
    if ( v9 >= 0xFFFE )
      LOWORD(v9) = -4;
    DestinationString.Length = v9;
    DestinationString.MaximumLength = v9 + 2;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v10 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v10 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        v10 = -1073741801;
        goto LABEL_6;
      }
      v10 = ZwQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              Pool2,
              ResultLength,
              &ResultLength);
    }
    if ( v10 >= 0 )
    {
      if ( !a4 || Pool2[1] == a4 )
      {
        if ( Pool2[2] == a3 )
          memmove(a5, Pool2 + 3, a3);
        else
          v10 = -1073741789;
      }
      else
      {
        v10 = -1073741788;
      }
    }
  }
LABEL_6:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x50455654u);
  return (unsigned int)v10;
}
