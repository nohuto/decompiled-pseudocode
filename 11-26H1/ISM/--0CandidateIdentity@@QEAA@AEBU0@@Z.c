/*
 * XREFs of ??0CandidateIdentity@@QEAA@AEBU0@@Z @ 0x1801ADBDC
 * Callers:
 *     ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1801AD74C (--$_Emplace_reallocate@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandid.c)
 *     ??$emplace_back@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAAEAUCandidateIdentity@@AEAU2@@Z @ 0x1801ADB94 (--$emplace_back@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIden.c)
 *     ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x1801AE37C (-GetCandidate@Edges@@QEAA_NPEBV-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@st.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180023358 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

CandidateIdentity *__fastcall CandidateIdentity::CandidateIdentity(
        CandidateIdentity *this,
        const struct CandidateIdentity *a2)
{
  std::wstring::wstring((__int64)this, a2);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return this;
}
