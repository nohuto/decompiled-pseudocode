/*
 * XREFs of ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D49D8
 * Callers:
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1400D4870 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1400D5DE0 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiEngBitBlt @ 0x1400D5EE0 (NtGdiEngBitBlt.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1401F6330 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiEngFillPath @ 0x14020DCC0 (NtGdiEngFillPath.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x140222E20 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokePath @ 0x140264B40 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x140264F30 (NtGdiEngTextOut.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x14033AEC0 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiEngLineTo @ 0x14033BA90 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x14033BD70 (NtGdiEngPaint.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033C2E0 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 == *(_QWORD *)(a1 + 168) )
  {
    result = *(_QWORD *)(a1 + 160);
  }
  else if ( a2 == *(_QWORD *)(a1 + 184) )
  {
    result = *(_QWORD *)(a1 + 176);
  }
  else
  {
    result = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 444) & 0x100) != 0 && result && result < (unsigned __int64)MmSystemRangeStart )
    return 0LL;
  return result;
}
