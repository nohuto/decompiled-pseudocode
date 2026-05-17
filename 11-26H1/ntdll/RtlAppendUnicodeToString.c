/*
 * XREFs of RtlAppendUnicodeToString @ 0x1800323C0
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     GetOverlayFilePathUsingChecksum @ 0x1800327F0 (GetOverlayFilePathUsingChecksum.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x180032AC0 (_GetOverlayPackageKeyForLanguage.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800335D0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180058660 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x18005A6B8 (RtlpGetRegistryHandle.c)
 *     LdrpFindKnownDll @ 0x180082BE0 (LdrpFindKnownDll.c)
 *     LdrpLoadWow64 @ 0x180086710 (LdrpLoadWow64.c)
 *     WerpGlobalFlagsForProcess @ 0x180088964 (WerpGlobalFlagsForProcess.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800989AC (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     WerEscalationLazyInit @ 0x1800D6160 (WerEscalationLazyInit.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106D68 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpMUIEtwOutput @ 0x180113278 (LdrpMUIEtwOutput.c)
 *     AVrfpFormatCurrentUserKeyPath @ 0x18011E79C (AVrfpFormatCurrentUserKeyPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x18014611C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeToString(unsigned __int16 *a1, const wchar_t *a2)
{
  size_t v4; // rax
  unsigned int v5; // ebp
  void *v6; // r14

  if ( !a2 )
    return 0LL;
  v4 = wcslen(a2);
  if ( v4 <= 0x7FFE )
  {
    v5 = (unsigned __int16)(2 * v4);
    if ( *a1 + v5 <= a1[1] )
    {
      v6 = (void *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1));
      memmove(v6, a2, (unsigned __int16)(2 * v4));
      *a1 += v5;
      if ( (unsigned int)*a1 + 1 < a1[1] )
        *((_WORD *)v6 + ((unsigned __int64)v5 >> 1)) = 0;
      return 0LL;
    }
  }
  return 3221225507LL;
}
