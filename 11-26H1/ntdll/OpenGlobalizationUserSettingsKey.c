/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x1800580A0
 * Callers:
 *     RtlpGetLocaleDataKey @ 0x18004CA18 (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180112980 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpSetInstallLanguage @ 0x180142A80 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x180142F3C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlOpenCurrentUser @ 0x180056B10 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     GetGlobalizationUserModelType @ 0x1800586B0 (GetGlobalizationUserModelType.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(__int64 DesiredAccess, __int64 a2, HANDLE *a3)
{
  ACCESS_MASK v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = DesiredAccess;
  if ( !a3 )
    return -1073741811;
  v5 = GetGlobalizationUserModelType(DesiredAccess, a2) - 1;
  if ( !v5 )
    return RtlOpenCurrentUser(v4, a3);
  v7 = v5 - 1;
  if ( !v7 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v4, a3);
  if ( v7 != 1 )
    return -1073741595;
  LODWORD(v9) = 0;
  return OpenGlobalizationUserSettingsKey_ForMua(v4, v6, a3, &v9);
}
