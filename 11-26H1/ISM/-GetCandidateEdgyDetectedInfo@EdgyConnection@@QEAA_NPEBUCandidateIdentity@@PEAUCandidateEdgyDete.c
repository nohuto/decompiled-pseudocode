/*
 * XREFs of ?GetCandidateEdgyDetectedInfo@EdgyConnection@@QEAA_NPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801AC5C0
 * Callers:
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801B1134 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 * Callees:
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@@PEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAW4EdgyExperienceRunState@5678@@Z @ 0x1801AE4A4 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z @ 0x1801AE530 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z.c)
 */

char __fastcall EdgyConnection::GetCandidateEdgyDetectedInfo(
        EdgyConnection *this,
        const struct CandidateIdentity *a2,
        struct CandidateEdgyDetectedInfo *a3)
{
  _DWORD *v3; // r14
  Edges *v5; // r13
  _QWORD *v6; // r15
  char v8; // bl
  char v9; // al
  _QWORD *v10; // rsi
  bool CandidateConfiguration; // al
  bool v12; // cl

  v3 = (_DWORD *)((char *)a3 + 28);
  v5 = (EdgyConnection *)((char *)this + 72);
  v6 = (_QWORD *)((char *)a3 + 16);
  v8 = 0;
  if ( !Edges::GetCandidateConfiguration(
          (EdgyConnection *)((char *)this + 72),
          a2,
          (struct EdgyControllerClientProxy **)a3 + 2,
          (struct CandidateEdgyDetectedInfo *)((char *)a3 + 24),
          (struct CandidateEdgyDetectedInfo *)((char *)a3 + 28))
    || (v9 = 1, !*v6) )
  {
    v9 = 0;
  }
  v10 = (_QWORD *)((char *)a3 + 72);
  *(_BYTE *)a3 = v9;
  CandidateConfiguration = Edges::GetCandidateConfiguration(
                             v5,
                             a2,
                             (struct CandidateEdgyDetectedInfo *)((char *)a3 + 32),
                             (void **)a3 + 9);
  *((_BYTE *)a3 + 1) = CandidateConfiguration;
  *((_QWORD *)a3 + 1) = 0LL;
  if ( *v6 )
  {
    v12 = CandidateConfiguration;
    if ( *((_DWORD *)a3 + 6) != 1 )
      goto LABEL_19;
    if ( !*v3 )
      return 0;
    if ( *v3 == 1 )
    {
      *((_BYTE *)a3 + 1) = 0;
    }
    else
    {
      if ( *v3 != 2 && *v3 != 3 && (*v3 != 4 || *v10) )
        goto LABEL_19;
      *((_BYTE *)a3 + 1) = 0;
      *((_QWORD *)a3 + 1) = -1LL;
    }
  }
  else
  {
    if ( !*((_QWORD *)a2 + 2) )
    {
      v12 = *v10 != 0LL && CandidateConfiguration;
      *((_BYTE *)a3 + 1) = v12;
      goto LABEL_19;
    }
    *(_WORD *)a3 = 0;
  }
  v12 = 0;
LABEL_19:
  if ( *(_BYTE *)a3 || v12 )
    return 1;
  return v8;
}
