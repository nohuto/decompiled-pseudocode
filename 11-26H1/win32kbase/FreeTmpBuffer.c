/*
 * XREFs of FreeTmpBuffer @ 0x1400113B0
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1400101C0 (NtGdiExtCreateRegion.c)
 *     NtGdiGetRegionData @ 0x1400102B0 (NtGdiGetRegionData.c)
 *     NtGdiOpenDCW @ 0x140010610 (NtGdiOpenDCW.c)
 *     NtGdiPolyPolyDraw @ 0x140010C70 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     FreeThreadBufferWithTag @ 0x140041C20 (FreeThreadBufferWithTag.c)
 */

_QWORD *__fastcall FreeTmpBuffer(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *result; // rax

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( a1 != *(_QWORD *)(v2 + 2296) )
    return (_QWORD *)FreeThreadBufferWithTag(a1);
  result = *(_QWORD **)(v2 + 2288);
  *result = a1;
  return result;
}
