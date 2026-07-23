/*
 * XREFs of CmpQueryHiveRedirectionFileList @ 0x140ADF368
 * Callers:
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmLoadKey @ 0x140ADEAD4 (CmLoadKey.c)
 *     CmpMachineHiveListInitialize @ 0x140B66A74 (CmpMachineHiveListInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 */

bool __fastcall CmpQueryHiveRedirectionFileList(PUNICODE_STRING ValueName, PUNICODE_STRING Destination)
{
  bool result; // al
  NTSTATUS v5; // eax
  bool v6; // zf
  NTSTATUS v7; // eax
  ULONG Length; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR Source[250]; // [rsp+9Ch] [rbp-64h] BYREF

  result = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  if ( HIDWORD(WheapPfaLock.KernelStack) )
  {
    Length = 512;
    if ( !*(_QWORD *)&WheapPfaLock.Timer.Processor )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\registry\\machine\\system\\currentcontrolset\\control\\hiveredirectionlist");
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
      v6 = v5 == 0;
      if ( v5 < 0 )
        return v6;
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)&WheapPfaLock.Timer.Processor,
             (signed __int64)KeyHandle,
             0LL) )
      {
        ZwClose(KeyHandle);
      }
    }
    v7 = ZwQueryValueKey(
           *(HANDLE *)&WheapPfaLock.Timer.Processor,
           ValueName,
           KeyValuePartialInformation,
           KeyValueInformation,
           Length,
           &Length);
    v6 = v7 == 0;
    if ( v7 >= 0 )
      return RtlAppendUnicodeToString(Destination, Source) == 0;
    return v6;
  }
  return result;
}
