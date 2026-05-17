/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x1801224D0
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800DDC20 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlpLoadInstallLanguageFallback @ 0x18000144C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800DDD80 (RtlpMuiRegFreeRegistryInfo.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180125768 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpMuiRegCreateLanguages @ 0x18014D3E0 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x18014D440 (RtlpMuiRegCreateStringPool.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E7F8 (_RtlpMuiRegValidateInstalled.c)
 *     NtIsUILanguageComitted @ 0x1801610B0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180161AD0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalled(__int64 a1)
{
  int InstallUILanguage; // edi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 Languages; // rax
  __int64 StringPool; // rax

  InstallUILanguage = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( (int)NtIsUILanguageComitted() >= 0 )
  {
    InstallUILanguage = NtQueryInstallUILanguage(a1 + 4, v4, v5);
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_12;
    RtlpLoadInstallLanguageFallback(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  Languages = RtlpMuiRegCreateLanguages();
  *(_QWORD *)(a1 + 24) = Languages;
  if ( !Languages )
  {
    InstallUILanguage = -1073741801;
LABEL_12:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(0xFFFFFFFFLL, 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_12;
  *(_DWORD *)a1 |= 2u;
  InstallUILanguage = RtlpMuiRegLoadInstalledFromKey(a1);
  if ( InstallUILanguage < 0 )
    goto LABEL_12;
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_12;
  return result;
}
