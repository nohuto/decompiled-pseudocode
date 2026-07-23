/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x180143C50
 * Callers:
 *     <none>
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DAA84 (RtlUpdateProcessRegistryInfo.c)
 *     RtlAdjustPrivilege @ 0x1800E32E0 (RtlAdjustPrivilege.c)
 *     RtlpGetInstalledLanguageType @ 0x180142960 (RtlpGetInstalledLanguageType.c)
 *     NtFlushInstallUILanguage @ 0x180160C30 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x180160E10 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1801619D0 (NtQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x180162710 (ZwShutdownSystem.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  NTSTATUS v2; // ebx
  BOOLEAN WasEnabled[4]; // [rsp+28h] [rbp-E0h] BYREF
  LANGID InstallUILanguageId; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v6; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  _UNICODE_STRING String; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v9[688]; // [rsp+58h] [rbp-B0h] BYREF

  v7 = 0LL;
  LODWORD(v6) = 0;
  InstallUILanguageId = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  memset_thunk_772440563353939046(v9, 0, 0x2B0uLL);
  v2 = NtQueryInstallUILanguage(&InstallUILanguageId);
  if ( v2 >= 0 )
  {
    String.Buffer = (wchar_t *)v9;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId, &String)
      && (int)RtlpCreateProcessRegistryInfo(&v7) >= 0
      && v7
      && (int)RtlpGetInstalledLanguageType(v7, String.Buffer, (int *)&v6, 0LL) >= 0
      && (_DWORD)v6 != 4 )
    {
      v2 = NtFlushInstallUILanguage(InstallUILanguageId, 1u);
      if ( v2 >= 0 )
      {
        ZwGetMUIRegistryInfo(0xAu, 0LL, 0LL);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  if ( a1 && v2 )
  {
    WasEnabled[0] = 0;
    if ( RtlAdjustPrivilege(0x13u, 1u, 1u, WasEnabled) == -1073741700 )
      RtlAdjustPrivilege(0x13u, 1u, 0, WasEnabled);
    v2 = ZwShutdownSystem(ShutdownPowerOff);
    if ( v2 < 0 )
      return (unsigned int)-1073741616;
  }
  return (unsigned int)v2;
}
