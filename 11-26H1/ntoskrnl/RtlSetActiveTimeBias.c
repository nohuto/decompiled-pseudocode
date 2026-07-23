/*
 * XREFs of RtlSetActiveTimeBias @ 0x14080A6D4
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x140A10F00 (RtlWriteRegistryValue.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x140A12764 (RtlpGetTimeZoneInfoHandle.c)
 */

__int64 __fastcall RtlSetActiveTimeBias(__int64 a1)
{
  __int64 result; // rax
  NTSTATUS RegistryValues; // ebx
  ULONG ValueData; // [rsp+20h] [rbp-39h]
  int v4[4]; // [rsp+30h] [rbp-29h] BYREF
  const WCHAR *v5; // [rsp+40h] [rbp-19h]
  int *v6; // [rsp+48h] [rbp-11h]
  int v7; // [rsp+50h] [rbp-9h]
  int v8; // [rsp+C0h] [rbp+67h] BYREF
  int v9; // [rsp+C8h] [rbp+6Fh] BYREF
  PCWSTR Path; // [rsp+D0h] [rbp+77h] BYREF

  v8 = a1;
  Path = 0LL;
  LOBYTE(a1) = 1;
  v9 = 0;
  result = RtlpGetTimeZoneInfoHandle(a1, &Path);
  if ( (int)result >= 0 )
  {
    memset_0(v4, 0, 0x70uLL);
    v6 = &v9;
    v4[2] = 292;
    v5 = L"ActiveTimeBias";
    v7 = 0x4000000;
    RegistryValues = RtlpQueryRegistryValues(0x40000000, (int)Path, (int)v4, 0, ValueData, 1);
    if ( RegistryValues < 0 || v9 != v8 )
      RegistryValues = RtlWriteRegistryValue(0x40000000u, Path, L"ActiveTimeBias", 4u, &v8, 4u);
    ZwClose((HANDLE)Path);
    return (unsigned int)RegistryValues;
  }
  return result;
}
