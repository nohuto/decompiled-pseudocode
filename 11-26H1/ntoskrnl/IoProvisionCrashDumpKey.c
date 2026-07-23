/*
 * XREFs of IoProvisionCrashDumpKey @ 0x1405C9C74
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     SecureDump_GetSecureDumpSettings @ 0x140511FA4 (SecureDump_GetSecureDumpSettings.c)
 *     SecureDump_ReInitialize @ 0x1405D97C4 (SecureDump_ReInitialize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoProvisionCrashDumpKey()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // [rsp+20h] [rbp-40h] BYREF
  int v3; // [rsp+28h] [rbp-38h]
  _QWORD v4[3]; // [rsp+30h] [rbp-30h] BYREF
  int v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+4Ch] [rbp-14h]
  char v7; // [rsp+50h] [rbp-10h]
  __int16 v8; // [rsp+51h] [rbp-Fh]
  char v9; // [rsp+53h] [rbp-Dh]

  v2 = 0LL;
  v3 = 0;
  if ( ForceDumpDisabled || !AllowCrashDump )
    return 3221225659LL;
  result = SecureDump_ReInitialize();
  if ( (int)result >= 0 )
  {
    result = SecureDump_GetSecureDumpSettings((__int64)&v2);
    if ( (int)result >= 0 )
    {
      if ( (_BYTE)v2 )
      {
        if ( qword_140E66058 )
        {
          v5 = HIDWORD(v2);
          v6 = v3;
          v7 = BYTE1(v2);
          v4[1] = SecureDump_Get_SecureDumpHeader;
          v4[2] = SecureDump_Encrypt_DmpData;
          v4[0] = 40LL;
          v8 = 0;
          v9 = 0;
          return guard_dispatch_icall_no_overrides(v4, v1);
        }
        else
        {
          return 3221225473LL;
        }
      }
    }
  }
  return result;
}
