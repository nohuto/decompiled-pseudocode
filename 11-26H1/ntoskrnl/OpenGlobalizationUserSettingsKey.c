/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x1404F05D4
 * Callers:
 *     NtSetDefaultLocale @ 0x140B10920 (NtSetDefaultLocale.c)
 *     ExpSetPendingUILanguage @ 0x140B202E0 (ExpSetPendingUILanguage.c)
 * Callees:
 *     GetGlobalizationUserModelType @ 0x1404FBFA4 (GetGlobalizationUserModelType.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1406D7B84 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1406D7E24 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlOpenCurrentUser @ 0x140B28EE0 (RtlOpenCurrentUser.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(int a1, __int64 a2, HANDLE *a3)
{
  int GlobalizationUserModelType; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a3 )
    return -1073741811;
  GlobalizationUserModelType = GetGlobalizationUserModelType();
  if ( GlobalizationUserModelType == 1 )
    return RtlOpenCurrentUser(8u, a3);
  v7 = (unsigned int)(GlobalizationUserModelType - 2);
  if ( GlobalizationUserModelType == 2 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v7, a3);
  if ( GlobalizationUserModelType != 3 )
    return -1073741595;
  v8 = 0;
  return OpenGlobalizationUserSettingsKey_ForMua(v7, v6, a3, &v8);
}
