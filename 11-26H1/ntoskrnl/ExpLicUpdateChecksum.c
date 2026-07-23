/*
 * XREFs of ExpLicUpdateChecksum @ 0x1406D1300
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1406D11AC (ExpGetLicenseTamperState.c)
 *     sub_14083E550 @ 0x14083E550 (sub_14083E550.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLicUpdateChecksum(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  return result;
}
