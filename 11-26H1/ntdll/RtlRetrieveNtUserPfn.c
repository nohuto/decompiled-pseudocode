/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x18013A8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_1801E0350 )
    return 3221225485LL;
  *a1 = NtDllUserStubs;
  *a2 = off_180172530;
  *a3 = off_1801725F0;
  return 0LL;
}
