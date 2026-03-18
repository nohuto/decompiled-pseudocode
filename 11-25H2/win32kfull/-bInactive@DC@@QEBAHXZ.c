/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1400E6190
 * Callers:
 *     NtGdiStrokeAndFillPath @ 0x1400E5050 (NtGdiStrokeAndFillPath.c)
 *     NtGdiSelectClipPath @ 0x1400E5210 (NtGdiSelectClipPath.c)
 *     NtGdiWidenPath @ 0x1400E53B0 (NtGdiWidenPath.c)
 *     NtGdiGetPath @ 0x1400E5620 (NtGdiGetPath.c)
 *     NtGdiStrokePath @ 0x1400E5B50 (NtGdiStrokePath.c)
 *     NtGdiPathToRegion @ 0x1400E5CB0 (NtGdiPathToRegion.c)
 *     NtGdiFillPath @ 0x1400E5DF0 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x140226630 (NtGdiFlattenPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bInactive(DC *this)
{
  unsigned int v1; // ecx
  int v2; // eax

  if ( !*((_QWORD *)this + 25) )
    return 0;
  v2 = *((_DWORD *)this + 62);
  v1 = 1;
  if ( (v2 & 1) != 0 )
    return 0;
  return v1;
}
