/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x140AD5410
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x140517D2C (AdtpIsSDValidSelfRelative.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetControlSecurityDescriptor(unsigned __int8 *a1, _WORD *a2, _DWORD *a3)
{
  *a3 = *a1;
  if ( *a1 != 1 )
    return 3221225560LL;
  *a2 = *((_WORD *)a1 + 1);
  return 0LL;
}
