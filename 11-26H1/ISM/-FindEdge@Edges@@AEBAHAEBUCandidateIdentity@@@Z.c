/*
 * XREFs of ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801AE218
 * Callers:
 *     ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x1801AE37C (-GetCandidate@Edges@@QEAA_NPEBV-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@st.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@@PEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAW4EdgyExperienceRunState@5678@@Z @ 0x1801AE4A4 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z @ 0x1801AE530 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801AE7BC (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 *     ?GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z @ 0x1801B1154 (-GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Edges::FindEdge(Edges *this, const struct CandidateIdentity *a2)
{
  unsigned int v2; // r8d

  v2 = *((_DWORD *)a2 + 8);
  if ( v2 )
  {
    if ( *((_QWORD *)a2 + 3) > 7uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    return Edges::FindEdgeWithInteraction(this, (const unsigned __int16 *)a2, v2);
  }
  else
  {
    if ( *((_QWORD *)a2 + 3) > 7uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    return Edges::FindEdge(this, (const unsigned __int16 *)a2);
  }
}
