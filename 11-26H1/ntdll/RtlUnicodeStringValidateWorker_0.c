/*
 * XREFs of RtlUnicodeStringValidateWorker_0 @ 0x1800D44D0
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18011D4E0 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringValidateWorker_0(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r8
  unsigned __int16 v2; // dx

  v1 = *a1;
  if ( (*a1 & 1) != 0 )
    return 3221225485LL;
  v2 = a1[1];
  if ( (v2 & 1) != 0 || v1 > v2 || v2 == 0xFFFF || !*((_QWORD *)a1 + 1) && (v1 || v2) )
    return 3221225485LL;
  else
    return 0LL;
}
