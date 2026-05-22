/*
 * XREFs of ??$emplace_back@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAAEAUCandidateIdentity@@AEAU2@@Z @ 0x1801ADB94
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801AE7BC (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1801AD74C (--$_Emplace_reallocate@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandid.c)
 *     ??0CandidateIdentity@@QEAA@AEBU0@@Z @ 0x1801ADBDC (--0CandidateIdentity@@QEAA@AEBU0@@Z.c)
 */

CandidateIdentity *__fastcall std::vector<CandidateIdentity>::emplace_back<CandidateIdentity &>(
        __int64 *a1,
        const struct CandidateIdentity *a2)
{
  __int64 v3; // rcx

  if ( a1[1] == a1[2] )
    return std::vector<CandidateIdentity>::_Emplace_reallocate<CandidateIdentity &>(a1, a1[1], a2);
  CandidateIdentity::CandidateIdentity((CandidateIdentity *)a1[1], a2);
  v3 = a1[1];
  a1[1] = v3 + 40;
  return (CandidateIdentity *)v3;
}
