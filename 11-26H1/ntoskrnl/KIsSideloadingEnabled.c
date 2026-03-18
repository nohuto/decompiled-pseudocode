/*
 * XREFs of KIsSideloadingEnabled @ 0x14084ACFC
 * Callers:
 *     SepIsLockedDown @ 0x14080FEE8 (SepIsLockedDown.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404D5744 (CmIsStateSeparationEnabled.c)
 *     AppModelFreeUnicodeString @ 0x1404E7B84 (AppModelFreeUnicodeString.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x140A12C50 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     KGetUnlockSetting @ 0x140AF3B50 (KGetUnlockSetting.c)
 */

__int64 __fastcall KIsSideloadingEnabled(_BYTE *a1)
{
  int v2; // ebx
  int v3; // eax
  _QWORD v5[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v7; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+60h] [rbp+10h] BYREF

  *a1 = 0;
  v6[0] = 7733364LL;
  v5[0] = 2621478LL;
  v6[1] = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  v5[1] = L"AllowAllTrustedApps";
  v8 = 0xFFFF;
  v7 = 0LL;
  v2 = KGetAppModelStateSeparatedRegKeyPath(L"AppxPolicies");
  if ( v2 < 0 )
    goto LABEL_9;
  v2 = KGetUnlockSetting(&v7, v5, &v8);
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
  AppModelFreeUnicodeString((__int64)&v7);
  return (unsigned int)v2;
}
