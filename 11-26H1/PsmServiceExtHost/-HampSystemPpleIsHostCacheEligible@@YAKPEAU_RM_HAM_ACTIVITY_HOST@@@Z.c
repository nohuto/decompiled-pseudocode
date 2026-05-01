/*
 * XREFs of ?HampSystemPpleIsHostCacheEligible@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18008BB24
 * Callers:
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18007D2A8 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 * Callees:
 *     ?PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z @ 0x18006978C (-PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemPpleIsHostCacheEligible(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx
  unsigned __int8 v4[4]; // [rsp+20h] [rbp-128h] BYREF
  int v5[3]; // [rsp+24h] [rbp-124h] BYREF
  unsigned __int16 v6[128]; // [rsp+30h] [rbp-118h] BYREF

  v4[0] = 1;
  v5[0] = 256;
  PsmGetPackageFullNameFromKey((char *)a1 + 24, v6, v5);
  v2 = 544LL;
  if ( a1 )
    v2 = (__int64)a1 + 488;
  PpleHostCacheHelperIsEligibleByPackageFullName((void *)v2, v6, v4);
  return v4[0];
}
