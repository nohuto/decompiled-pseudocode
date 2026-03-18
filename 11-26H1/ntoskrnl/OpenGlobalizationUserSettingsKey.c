/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x1404F6FC4
 * Callers:
 *     NtSetDefaultLocale @ 0x140B0F0F0 (NtSetDefaultLocale.c)
 *     ExpSetPendingUILanguage @ 0x140B1E260 (ExpSetPendingUILanguage.c)
 * Callees:
 *     GetGlobalizationUserModelType @ 0x1405026D4 (GetGlobalizationUserModelType.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1406D3AF8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1406D3D98 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlOpenCurrentUser @ 0x140B26C80 (RtlOpenCurrentUser.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey(int a1, __int64 a2, HANDLE *a3)
{
  int GlobalizationUserModelType; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a3 )
    return 3221225485LL;
  GlobalizationUserModelType = GetGlobalizationUserModelType();
  if ( GlobalizationUserModelType == 1 )
    return RtlOpenCurrentUser(8u, a3);
  v7 = (unsigned int)(GlobalizationUserModelType - 2);
  if ( GlobalizationUserModelType == 2 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v7, a3);
  if ( GlobalizationUserModelType != 3 )
    return 3221225701LL;
  v8 = 0;
  return OpenGlobalizationUserSettingsKey_ForMua(v7, v6, a3, &v8);
}
