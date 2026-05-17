/*
 * XREFs of RtlpSetTimeZoneInformationWorker @ 0x180123C1C
 * Callers:
 *     RtlSetDynamicTimeZoneInformation @ 0x180141D20 (RtlSetDynamicTimeZoneInformation.c)
 *     RtlSetTimeZoneInformation @ 0x180141D30 (RtlSetTimeZoneInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlpGetRegistryHandle @ 0x18005A6B8 (RtlpGetRegistryHandle.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1800FC8F8 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlWriteRegistryValue @ 0x1801069C0 (RtlWriteRegistryValue.c)
 *     wcsnlen @ 0x18012DD40 (wcsnlen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwSetValueKey @ 0x18015FB30 (ZwSetValueKey.c)
 */

__int64 __fastcall RtlpSetTimeZoneInformationWorker(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  size_t v5; // rax
  int v6; // r15d
  size_t v7; // rax
  int v8; // r13d
  size_t v9; // rax
  int v10; // ebx
  __int64 result; // rax
  int RegistryHandle; // ebx
  const wchar_t **v13; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+80h] [rbp+40h] BYREF
  const wchar_t *v16; // [rsp+90h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+58h] BYREF

  v2 = a1 + 4;
  Handle = 0LL;
  v5 = wcsnlen((const wchar_t *)(a1 + 4), 0x20uLL);
  v6 = v5;
  if ( v5 >= 0x20 )
    return 3221225485LL;
  v7 = wcsnlen((const wchar_t *)(a1 + 88), 0x20uLL);
  v8 = v7;
  if ( v7 >= 0x20 )
    return 3221225485LL;
  if ( a2 < 0x1B0 )
  {
    v10 = 0;
  }
  else
  {
    v9 = wcsnlen((const wchar_t *)(a1 + 172), 0x80uLL);
    v10 = v9;
    if ( v9 >= 0x80 )
      return 3221225485LL;
  }
  result = RtlpGetTimeZoneInfoHandle(1, (const wchar_t **)&Handle);
  if ( (int)result >= 0 )
  {
    if ( (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"Bias", 4, a1, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"StandardName", 1, v2, 2 * v6 + 2) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"StandardBias", 4, a1 + 84, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"StandardStart", 3, a1 + 68, 16) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"DaylightName", 1, a1 + 88, 2 * v8 + 2) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"DaylightBias", 4, a1 + 168, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"DaylightStart", 3, a1 + 152, 16) < 0
      || a2 < 0x1B0 )
    {
      LOWORD(v15) = 0;
      v16 = 0LL;
      DestinationString = 0LL;
      RegistryHandle = RtlpGetRegistryHandle(0x40000000, (const wchar_t *)Handle, 1, &v16);
      if ( RegistryHandle < 0 )
        goto LABEL_23;
      RtlInitUnicodeString(&DestinationString, L"TimeZoneKeyName");
      RegistryHandle = ZwSetValueKey(v16, &DestinationString, 0LL, 1LL, &v15, 2);
      if ( RegistryHandle < 0 )
        goto LABEL_23;
      LODWORD(v16) = *(unsigned __int8 *)(a1 + 428);
      v13 = &v16;
    }
    else
    {
      RegistryHandle = RtlWriteRegistryValue(
                         0x40000000,
                         (const wchar_t *)Handle,
                         L"TimeZoneKeyName",
                         1,
                         a1 + 172,
                         2 * v10 + 2);
      if ( RegistryHandle < 0 )
      {
LABEL_23:
        NtClose(Handle);
        return (unsigned int)RegistryHandle;
      }
      v15 = *(unsigned __int8 *)(a1 + 428);
      v13 = (const wchar_t **)&v15;
    }
    RegistryHandle = RtlWriteRegistryValue(
                       0x40000000,
                       (const wchar_t *)Handle,
                       L"DynamicDaylightTimeDisabled",
                       4,
                       (__int64)v13,
                       4);
    goto LABEL_23;
  }
  return result;
}
