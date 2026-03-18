/*
 * XREFs of BiDeleteEfiVariable @ 0x1409D1B5C
 * Callers:
 *     BiExportEfiBootManager @ 0x140B37EA8 (BiExportEfiBootManager.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1407261B0 (ZwQuerySystemEnvironmentValueEx.c)
 *     ZwSetSystemEnvironmentValueEx @ 0x140726B70 (ZwSetSystemEnvironmentValueEx.c)
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 */

__int64 __fastcall BiDeleteEfiVariable(PCWSTR SourceString)
{
  int v2; // ebx
  unsigned int SystemEnvironmentValue; // eax
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-50h]
  __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v9[4]; // [rsp+50h] [rbp-20h] BYREF

  v9[0] = -1947934879;
  v9[1] = 299013066;
  v9[2] = -536867414;
  v9[3] = -1943338088;
  DestinationString = 0LL;
  v7 = 0LL;
  v2 = BiAcquirePrivilege(22LL, &v7);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    HIDWORD(v6) = 0;
    SystemEnvironmentValue = ZwQuerySystemEnvironmentValueEx((__int64)&DestinationString, (__int64)v9);
    v2 = SystemEnvironmentValue;
    if ( SystemEnvironmentValue == -1073741789 )
    {
      LODWORD(v6) = 1;
      v4 = ZwSetSystemEnvironmentValueEx((__int64)&DestinationString, (__int64)v9);
      v2 = v4;
      if ( v4 < 0 )
        BiLogMessage(4LL, L"Failed to delete \"%ws\" variable. Status: %x", SourceString, (unsigned int)v4, v6);
    }
    else if ( SystemEnvironmentValue == -1073741568 )
    {
      v2 = 0;
    }
    else
    {
      BiLogMessage(4LL, L"Failed to query \"%ws\" variable. Status: %x", SourceString, SystemEnvironmentValue, 0LL);
    }
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v2;
}
