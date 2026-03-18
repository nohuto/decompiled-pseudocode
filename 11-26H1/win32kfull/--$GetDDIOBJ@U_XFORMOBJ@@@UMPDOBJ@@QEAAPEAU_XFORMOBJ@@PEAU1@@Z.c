/*
 * XREFs of ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1400D9034
 * Callers:
 *     NtGdiXFORMOBJ_iGetXform @ 0x1400D8260 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400D8E90 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14032E7E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x14032EBB0 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( a2 == *(_QWORD *)(a1 + 280) )
  {
    v2 = *(_QWORD *)(a1 + 272);
  }
  else if ( a2 == *(_QWORD *)(a1 + 296) )
  {
    v2 = *(_QWORD *)(a1 + 288);
  }
  else
  {
    v2 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 428) & 0x100) != 0 && v2 )
    v2 &= -(__int64)GrepIsEngineVa((void *)v2);
  return v2;
}
