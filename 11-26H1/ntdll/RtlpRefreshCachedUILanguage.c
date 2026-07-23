/*
 * XREFs of RtlpRefreshCachedUILanguage @ 0x18014DA10
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051900 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     NtFlushInstallUILanguage @ 0x180160C30 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x180160E10 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1801619D0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpRefreshCachedUILanguage(PCWSTR SourceString, char a2)
{
  ULONG v2; // edi
  int InstalledLanguageIndexByLangId; // ebx
  unsigned __int16 v6; // si
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  LANGID InstallUILanguageId; // [rsp+70h] [rbp+30h] BYREF
  __int16 v11; // [rsp+80h] [rbp+40h] BYREF
  DWORD Lcid; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  Lcid = 0;
  InstallUILanguageId = 0;
  v11 = -1;
  v8 = 0LL;
  DestinationString = 0LL;
  if ( SourceString )
  {
    InstalledLanguageIndexByLangId = NtQueryInstallUILanguage(&InstallUILanguageId);
    if ( InstalledLanguageIndexByLangId >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
      {
        v6 = Lcid;
        InstalledLanguageIndexByLangId = NtFlushInstallUILanguage(Lcid, 0);
        if ( InstalledLanguageIndexByLangId >= 0 )
        {
          InstalledLanguageIndexByLangId = RtlpCreateProcessRegistryInfo(&v8);
          if ( InstalledLanguageIndexByLangId >= 0 )
          {
            InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v8, v6, 1, &v11);
            if ( InstalledLanguageIndexByLangId < 0 )
            {
              NtFlushInstallUILanguage(InstallUILanguageId, 0);
            }
            else
            {
              LOBYTE(v2) = a2 != 0;
              InstalledLanguageIndexByLangId = NtFlushInstallUILanguage(v6, v2);
            }
            ZwGetMUIRegistryInfo(0xAu, 0LL, 0LL);
          }
        }
      }
      else
      {
        return (unsigned int)-1073741762;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)InstalledLanguageIndexByLangId;
}
