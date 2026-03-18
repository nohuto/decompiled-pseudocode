/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1401142D4
 * Callers:
 *     NtGdiPathToRegion @ 0x1401128A0 (NtGdiPathToRegion.c)
 *     NtGdiStrokePath @ 0x1401129F0 (NtGdiStrokePath.c)
 *     NtGdiFillPath @ 0x140114130 (NtGdiFillPath.c)
 *     NtGdiWidenPath @ 0x14011ADC0 (NtGdiWidenPath.c)
 *     NtGdiGetPath @ 0x1401DE770 (NtGdiGetPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1402280F0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiSelectClipPath @ 0x140228790 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x140259C30 (NtGdiFlattenPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bInactive(DC *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( !*((_QWORD *)this + 25) )
    return 0;
  v1 = *((_DWORD *)this + 62);
  v2 = 1;
  if ( (v1 & 1) != 0 )
    return 0;
  return v2;
}
