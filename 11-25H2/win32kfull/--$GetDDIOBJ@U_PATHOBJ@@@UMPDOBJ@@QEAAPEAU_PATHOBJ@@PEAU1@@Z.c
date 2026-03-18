/*
 * XREFs of ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D3CC4
 * Callers:
 *     NtGdiPATHOBJ_vGetBounds @ 0x1400D2420 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1400D3280 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1400D39B0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiEngFillPath @ 0x14020DCC0 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokePath @ 0x140264B40 (NtGdiEngStrokePath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033C2E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x14033CFC0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14033D130 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_PATHOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 == *(_QWORD *)(a1 + 248) )
  {
    result = *(_QWORD *)(a1 + 240);
  }
  else if ( a2 == *(_QWORD *)(a1 + 264) )
  {
    result = *(_QWORD *)(a1 + 256);
  }
  else if ( a2 == *(_QWORD *)(a1 + 280) )
  {
    result = *(_QWORD *)(a1 + 272);
  }
  else
  {
    result = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 444) & 0x100) != 0 && result && result < (unsigned __int64)MmSystemRangeStart )
    return 0LL;
  return result;
}
