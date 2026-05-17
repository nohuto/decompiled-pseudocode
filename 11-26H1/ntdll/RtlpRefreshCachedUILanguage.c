/*
 * XREFs of RtlpRefreshCachedUILanguage @ 0x18014DB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800061D0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     NtFlushInstallUILanguage @ 0x180160D30 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x180160F10 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x180161AD0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpRefreshCachedUILanguage(PCWSTR SourceString, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  char v4; // r14
  int InstalledLanguageIndexByLangId; // ebx
  unsigned int v7; // esi
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int16 v11; // [rsp+70h] [rbp+30h] BYREF
  __int16 v12; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v13 = 0;
  v11 = 0;
  v4 = a2;
  v12 = -1;
  v9 = 0LL;
  DestinationString = 0LL;
  if ( SourceString )
  {
    InstalledLanguageIndexByLangId = NtQueryInstallUILanguage(&v11, a2, a3);
    if ( InstalledLanguageIndexByLangId >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString.Length, (int *)&v13) )
      {
        v7 = v13;
        InstalledLanguageIndexByLangId = NtFlushInstallUILanguage(v13, 0LL);
        if ( InstalledLanguageIndexByLangId >= 0 )
        {
          InstalledLanguageIndexByLangId = RtlpCreateProcessRegistryInfo(&v9);
          if ( InstalledLanguageIndexByLangId >= 0 )
          {
            InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v9, v7, 1, &v12);
            if ( InstalledLanguageIndexByLangId < 0 )
            {
              NtFlushInstallUILanguage(v11, 0LL);
            }
            else
            {
              LOBYTE(v3) = v4 != 0;
              InstalledLanguageIndexByLangId = NtFlushInstallUILanguage(v7, v3);
            }
            ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
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
