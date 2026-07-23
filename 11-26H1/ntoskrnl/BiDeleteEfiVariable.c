/*
 * XREFs of BiDeleteEfiVariable @ 0x1409A2B3C
 * Callers:
 *     BiExportEfiBootManager @ 0x140B3A0B8 (BiExportEfiBootManager.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x14072AD80 (ZwQuerySystemEnvironmentValueEx.c)
 *     ZwSetSystemEnvironmentValueEx @ 0x14072B740 (ZwSetSystemEnvironmentValueEx.c)
 *     BiAcquirePrivilege @ 0x1409A2D48 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409A2DFC (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 */

__int64 __fastcall BiDeleteEfiVariable(PCWSTR SourceString)
{
  int v2; // ebx
  unsigned int v3; // eax
  NTSTATUS v4; // eax
  ULONG ValueLength; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  GUID VendorGuid; // [rsp+50h] [rbp-20h] BYREF

  VendorGuid.Data1 = -1947934879;
  *(_DWORD *)&VendorGuid.Data2 = 299013066;
  *(_DWORD *)VendorGuid.Data4 = -536867414;
  *(_DWORD *)&VendorGuid.Data4[4] = -1943338088;
  DestinationString = 0LL;
  v7 = 0LL;
  v2 = BiAcquirePrivilege(22LL, &v7);
  if ( v2 >= 0 )
  {
    ValueLength = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v3 = ZwQuerySystemEnvironmentValueEx(&DestinationString, &VendorGuid, 0LL, &ValueLength, 0LL);
    v2 = v3;
    if ( v3 == -1073741789 )
    {
      v4 = ZwSetSystemEnvironmentValueEx(&DestinationString, &VendorGuid, 0LL, 0, 1u);
      v2 = v4;
      if ( v4 < 0 )
        BiLogMessage(4LL, L"Failed to delete \"%ws\" variable. Status: %x", SourceString, (unsigned int)v4);
    }
    else if ( v3 == -1073741568 )
    {
      v2 = 0;
    }
    else
    {
      BiLogMessage(4LL, L"Failed to query \"%ws\" variable. Status: %x", SourceString, v3);
    }
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v2;
}
