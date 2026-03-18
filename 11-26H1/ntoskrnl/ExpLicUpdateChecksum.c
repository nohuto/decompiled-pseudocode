/*
 * XREFs of ExpLicUpdateChecksum @ 0x1406CD2D0
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1406CD17C (ExpGetLicenseTamperState.c)
 *     sub_140838310 @ 0x140838310 (sub_140838310.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
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
