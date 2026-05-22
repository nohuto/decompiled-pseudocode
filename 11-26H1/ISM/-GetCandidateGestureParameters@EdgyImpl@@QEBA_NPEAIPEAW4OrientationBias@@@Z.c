/*
 * XREFs of ?GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z @ 0x1801B1154
 * Callers:
 *     ?ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ @ 0x1801AFA28 (-ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801AE218 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 */

char __fastcall EdgyImpl::GetCandidateGestureParameters(
        const struct CandidateIdentity ***this,
        unsigned int *a2,
        enum OrientationBias *a3)
{
  const struct CandidateIdentity **v3; // rbx
  const struct CandidateIdentity *v7; // rbp
  const struct CandidateIdentity *v8; // rbx
  int v9; // edi
  const struct CandidateIdentity **v10; // r15
  int Edge; // eax
  __int64 v12; // rcx
  const struct CandidateIdentity *v13; // rax
  int v14; // r8d
  int v15; // edx

  v3 = *this;
  *a2 = 0;
  *(_DWORD *)a3 = 0;
  if ( !v3 )
    return 0;
  v7 = v3[1];
  v8 = *v3;
  if ( v8 == v7 )
    return 0;
  v9 = 0;
  do
  {
    v10 = this[3];
    Edge = Edges::FindEdge((Edges *)(v10 + 9), v8);
    if ( Edge >= 0 )
    {
      v12 = Edge;
      v13 = v10[9];
      v12 <<= 7;
      v14 = *(_DWORD *)((char *)v13 + v12 + 92);
      v15 = *(_DWORD *)((char *)v13 + v12 + 96);
      if ( v14 && v15 )
      {
        *a2 |= v14;
        if ( !v9 )
          *(_DWORD *)a3 = v15;
        ++v9;
      }
    }
    v8 = (const struct CandidateIdentity *)((char *)v8 + 40);
  }
  while ( v8 != v7 );
  return 1;
}
