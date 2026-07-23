/*
 * XREFs of RtlpSetProcUserMachineLangList @ 0x1800545D0
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x18004E220 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     InitializeTEBUserLangList @ 0x180054030 (InitializeTEBUserLangList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180055400 (RtlpQueryDefaultUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800DAB90 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpInitMuiCriticalSection @ 0x1800537F0 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180056670 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 */

__int64 __fastcall RtlpSetProcUserMachineLangList(__int64 a1, unsigned int a2)
{
  int PreferredUILanguages; // esi
  int v6; // edx
  __int64 v7; // rdx
  __int64 LanguageList; // rcx
  bool v9; // sf
  char v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  PreferredUILanguages = 0;
  v11 = 0LL;
  v10 = 0;
  if ( a1 && a2 <= 1 )
  {
    if ( a2 == 1 && *(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 56) && !a2 )
      return 0LL;
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    if ( *(_QWORD *)(a1 + 64) && a2 == 1 || *(_QWORD *)(a1 + 56) && !a2 )
      goto LABEL_27;
    PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(a1, v6, a2, 3, (__int64)&v10, (__int64)&v11);
    LanguageList = v11;
    if ( !v11 )
    {
      LOBYTE(v7) = a2 != 1;
      LanguageList = RtlpMuiRegCreateLanguageList(1LL, v7, a1);
      v11 = LanguageList;
      if ( !LanguageList )
      {
        PreferredUILanguages = -1073741801;
        goto LABEL_27;
      }
    }
    v9 = PreferredUILanguages < 0;
    if ( PreferredUILanguages )
    {
      if ( PreferredUILanguages != -1073741801 && v10 )
      {
        PreferredUILanguages = 0;
        goto LABEL_15;
      }
      v9 = PreferredUILanguages < 0;
    }
    if ( v9 )
    {
LABEL_27:
      RtlLeaveCriticalSection(&RegistryInfoCritSect);
      return (unsigned int)PreferredUILanguages;
    }
LABEL_15:
    *(_DWORD *)(LanguageList + 40) |= 0x10u;
    *(_DWORD *)(LanguageList + 40) |= 0x40u;
    if ( a2 == 1 )
    {
      *(_QWORD *)(a1 + 64) = LanguageList;
      *(_DWORD *)a1 |= 0x20u;
    }
    else if ( !a2 )
    {
      *(_QWORD *)(a1 + 56) = LanguageList;
      *(_DWORD *)a1 |= 0x10u;
    }
    goto LABEL_27;
  }
  return 3221225485LL;
}
