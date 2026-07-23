/*
 * XREFs of RtlCultureNameToLCID @ 0x14077CEE0
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x140724830 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1408ADCD8 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1408ADFF8 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1408AE2F4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1408AEAB8 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1408AEF70 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1408AF3E4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x1408AFB18 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x140B2FD94 (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     DownLevelLanguageNameToLangID @ 0x1406DCFA4 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // di
  size_t Length; // r8
  wchar_t *Buffer; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int16 v8; // ax
  _WORD v10[88]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  if ( String )
  {
    if ( Lcid )
    {
      Length = String->Length;
      if ( (_WORD)Length )
      {
        Buffer = String->Buffer;
        if ( Buffer )
        {
          if ( (unsigned int)(Length + 2) <= 0x55 )
          {
            v6 = String->Length;
            memmove(v10, Buffer, Length);
            v7 = v6 >> 1;
            if ( v7 >= 85 )
              _report_rangecheckfailure();
            v10[v7] = 0;
            v8 = DownLevelLanguageNameToLangID(v10, 2);
            *Lcid = v8;
            return v8 != 0;
          }
        }
      }
    }
  }
  return v2;
}
