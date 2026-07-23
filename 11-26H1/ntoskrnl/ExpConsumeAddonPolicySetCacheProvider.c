/*
 * XREFs of ExpConsumeAddonPolicySetCacheProvider @ 0x14083E4D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpQueryLicenseValueFromBlobHelper @ 0x1404EACF8 (ExpQueryLicenseValueFromBlobHelper.c)
 */

__int64 __fastcall ExpConsumeAddonPolicySetCacheProvider(
        __int64 a1,
        __int64 a2,
        struct _KLOCK_ENTRIES *a3,
        int a4,
        __int64 a5,
        _BYTE *a6)
{
  *a6 = 1;
  return ExpQueryLicenseValueFromBlobHelper(a1, (__int64)&qword_140BE01E0, a2, a3, a4, a5);
}
