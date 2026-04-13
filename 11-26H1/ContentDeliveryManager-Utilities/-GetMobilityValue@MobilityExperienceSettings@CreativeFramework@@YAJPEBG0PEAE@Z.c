/*
 * XREFs of ?GetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJPEBG0PEAE@Z @ 0x18003259C
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002B40C (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 *     ?get_SuggestionsDisabled@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x18003F540 (-get_SuggestionsDisabled@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?get_YourPhoneTaskbarIconCreated@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x18003F660 (-get_YourPhoneTaskbarIconCreated@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::MobilityExperienceSettings::GetMobilityValue(
        LPCWSTR lpSubKey,
        LPCWSTR lpValue,
        unsigned __int16 *a3,
        unsigned __int8 *a4)
{
  LSTATUS ValueW; // eax
  bool v6; // sf
  int v8; // [rsp+60h] [rbp+18h] BYREF
  DWORD v9; // [rsp+68h] [rbp+20h] BYREF

  *(_BYTE *)a3 = 0;
  v8 = 0;
  v9 = 4;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, lpSubKey, lpValue, 0x20000010u, 0LL, &v8, &v9);
  v6 = ValueW < 0;
  if ( ValueW > 0 )
    v6 = 1;
  if ( !v6 )
    *(_BYTE *)a3 = v8 != 0;
  return 0LL;
}
