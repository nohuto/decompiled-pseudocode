/*
 * XREFs of FreeTmpBuffer @ 0x14001FD40
 * Callers:
 *     NtGdiGetRegionData @ 0x1400207A0 (NtGdiGetRegionData.c)
 *     NtGdiExtCreateRegion @ 0x140096BE0 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x140097540 (NtGdiOpenDCW.c)
 *     NtGdiPolyPolyDraw @ 0x140097BD0 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     FreeThreadBufferWithTag @ 0x14001E6A0 (FreeThreadBufferWithTag.c)
 */

void __fastcall FreeTmpBuffer(__int64 a1)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( a1 == *(_QWORD *)(v2 + 2208) )
    **(_QWORD **)(v2 + 2200) = a1;
  else
    FreeThreadBufferWithTag(a1);
}
