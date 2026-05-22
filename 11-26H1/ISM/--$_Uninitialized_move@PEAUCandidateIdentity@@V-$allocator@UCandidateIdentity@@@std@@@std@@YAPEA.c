/*
 * XREFs of ??$_Uninitialized_move@PEAUCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@YAPEAUCandidateIdentity@@QEAU1@0PEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801ADA44
 * Callers:
 *     ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1801AD74C (--$_Emplace_reallocate@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandid.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x1800B3168 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801AD5DC (--$_Destroy_range@V-$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@A.c)
 */

CandidateIdentity *__fastcall std::_Uninitialized_move<CandidateIdentity *>(
        __int64 a1,
        __int64 a2,
        CandidateIdentity *a3)
{
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r11

  if ( a1 != a2 )
  {
    do
    {
      std::wstring::wstring((__int64)a3);
      a3 = (CandidateIdentity *)((char *)a3 + 40);
      *(_DWORD *)(v5 + v4 + 32) = *(_DWORD *)(v5 + v4 + v6 + 32);
    }
    while ( v4 + 40 != v7 );
  }
  std::_Destroy_range<std::allocator<CandidateIdentity>>(a3, a3);
  return a3;
}
