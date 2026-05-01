/*
 * XREFs of ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x1803B8AA0
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180249650 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803B4C7C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ @ 0x180623DFC (-EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ.c)
 *     ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x18067AAF0 (-_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z.c)
 *     PersistEnterprisePinDataToRegistry @ 0x180694EC8 (PersistEnterprisePinDataToRegistry.c)
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801DE804 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall SHRegSetString(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, BYTE *a4)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&a4[2 * v4] );
  if ( v4 >= 0x7FFFFFFF )
  {
    LOWORD(result) = 534;
    return (unsigned __int16)result | 0x80070000;
  }
  result = _RegSetKeyValueWithSDDL(a1, a2, a3, 1u, a4, 2 * (int)v4 + 2);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
