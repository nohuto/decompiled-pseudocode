/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x18013A660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_1801DF350 )
    return 3221225485LL;
  *a1 = NtDllUserStubs;
  *a2 = off_180171530;
  *a3 = off_1801715F0;
  return 0LL;
}
