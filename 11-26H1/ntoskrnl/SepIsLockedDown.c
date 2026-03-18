/*
 * XREFs of SepIsLockedDown @ 0x14080FEE8
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140A2A0A4 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x140726010 (ZwQueryLicenseValue.c)
 *     KIsSideloadingEnabled @ 0x14084ACFC (KIsSideloadingEnabled.c)
 *     ExQueryFastCacheDevLicense @ 0x140AF3960 (ExQueryFastCacheDevLicense.c)
 */

__int64 __fastcall SepIsLockedDown(unsigned __int8 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  int LicenseValue; // eax
  __int64 v5; // rcx
  unsigned __int8 v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h]
  int v9; // [rsp+60h] [rbp+18h]
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v7 = 0;
  v10 = 0;
  v9 = 0;
  *a2 = 1;
  if ( a1 < 2u )
  {
    *a2 = 0;
    return v2;
  }
  v2 = KIsSideloadingEnabled(&v7);
  if ( (v2 & 0x80000000) != 0 )
    return v2;
  v8 = v7;
  if ( v7 )
    goto LABEL_9;
  LicenseValue = ZwQueryLicenseValue((__int64)&SshpBlockerCollections.Padding[2], (__int64)&v10);
  v2 = LicenseValue;
  if ( LicenseValue != -1073741772 )
  {
    if ( LicenseValue < 0 )
      return v2;
    if ( !v8 )
      goto LABEL_8;
LABEL_9:
    *a2 = 0;
    return v2;
  }
  v8 = 0;
  v2 = 0;
LABEL_8:
  if ( (unsigned __int8)ExQueryFastCacheDevLicense(v5) )
    goto LABEL_9;
  return v2;
}
