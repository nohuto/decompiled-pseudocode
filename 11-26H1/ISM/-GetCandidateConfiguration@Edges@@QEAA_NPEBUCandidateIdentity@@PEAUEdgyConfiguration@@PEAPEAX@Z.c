/*
 * XREFs of ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z @ 0x1801AE530
 * Callers:
 *     ?GetCandidateEdgyDetectedInfo@EdgyConnection@@QEAA_NPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801AC5C0 (-GetCandidateEdgyDetectedInfo@EdgyConnection@@QEAA_NPEBUCandidateIdentity@@PEAUCandidateEdgyDete.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801AE218 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 */

char __fastcall Edges::GetCandidateConfiguration(
        Edges *this,
        const struct CandidateIdentity *a2,
        struct EdgyConfiguration *a3,
        void **a4)
{
  int Edge; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  *(_QWORD *)a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
    return 0;
  v8 = Edge;
  v9 = *(_QWORD *)this;
  v10 = v8 << 7;
  *(_OWORD *)a3 = *(_OWORD *)(v10 + *(_QWORD *)this + 52);
  *((_OWORD *)a3 + 1) = *(_OWORD *)(v10 + v9 + 68);
  *((_QWORD *)a3 + 4) = *(_QWORD *)(v10 + v9 + 84);
  if ( a4 )
    *a4 = *(void **)(v10 + *(_QWORD *)this);
  return 1;
}
