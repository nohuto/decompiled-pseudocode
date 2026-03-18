/*
 * XREFs of ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D7794
 * Callers:
 *     NtGdiPATHOBJ_vGetBounds @ 0x1400D6990 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1400D7020 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1400D74C0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiEngFillPath @ 0x1400F5100 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14032E7E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x14032EBB0 (NtGdiEngStrokePath.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x14032FA30 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14032FBB0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_PATHOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( a2 == *(_QWORD *)(a1 + 232) )
  {
    v2 = *(_QWORD *)(a1 + 224);
  }
  else if ( a2 == *(_QWORD *)(a1 + 248) )
  {
    v2 = *(_QWORD *)(a1 + 240);
  }
  else if ( a2 == *(_QWORD *)(a1 + 264) )
  {
    v2 = *(_QWORD *)(a1 + 256);
  }
  else
  {
    v2 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 428) & 0x100) != 0 && v2 )
    v2 &= -(__int64)GrepIsEngineVa((void *)v2);
  return v2;
}
