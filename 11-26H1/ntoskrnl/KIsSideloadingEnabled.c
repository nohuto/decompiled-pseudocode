/*
 * XREFs of KIsSideloadingEnabled @ 0x14085100C
 * Callers:
 *     SepIsLockedDown @ 0x140815978 (SepIsLockedDown.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404CEFB4 (CmIsStateSeparationEnabled.c)
 *     AppModelFreeUnicodeString @ 0x1404E0F44 (AppModelFreeUnicodeString.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x140A11E40 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     KGetUnlockSetting @ 0x140AF6570 (KGetUnlockSetting.c)
 */

__int64 __fastcall KIsSideloadingEnabled(_BYTE *a1)
{
  int v2; // ebx
  int v3; // eax
  _QWORD v5[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+60h] [rbp+10h] BYREF

  *a1 = 0;
  v6[0] = 7733364LL;
  v5[0] = 2621478LL;
  v6[1] = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  v5[1] = L"AllowAllTrustedApps";
  v8 = 0xFFFF;
  DestinationString = 0LL;
  v2 = KGetAppModelStateSeparatedRegKeyPath(
         L"AppxPolicies",
         L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx",
         &DestinationString);
  if ( v2 < 0 )
    goto LABEL_9;
  v2 = KGetUnlockSetting(&DestinationString, v5, &v8);
  if ( v2 < 0 )
    goto LABEL_9;
  if ( CmIsStateSeparationEnabled() )
  {
    v3 = v8;
    if ( v8 != 0xFFFF )
      goto LABEL_7;
    v2 = KGetUnlockSetting(v6, v5, &v8);
    if ( v2 < 0 )
      goto LABEL_9;
  }
  v3 = v8;
LABEL_7:
  if ( v3 )
    *a1 = 1;
LABEL_9:
  AppModelFreeUnicodeString((__int64)&DestinationString);
  return (unsigned int)v2;
}
