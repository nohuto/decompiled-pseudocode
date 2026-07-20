/*
 * XREFs of SmpPlatformBinaryTableExists @ 0x14000EB40
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

bool SmpPlatformBinaryTableExists()
{
  ULONG ReturnLength; // [rsp+20h] [rbp-38h] BYREF
  _DWORD SystemInformation[3]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v3; // [rsp+34h] [rbp-24h]

  SystemInformation[0] = 1094930505;
  ReturnLength = 0;
  v3 = 0LL;
  SystemInformation[1] = 1;
  SystemInformation[2] = 1414546007;
  return NtQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength) == -1073741789;
}
