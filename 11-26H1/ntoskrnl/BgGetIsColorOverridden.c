/*
 * XREFs of BgGetIsColorOverridden @ 0x140C55A48
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1405C7F00 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !LOBYTE(gLoadedDiffHivesLock.MutantListHead.Blink) )
    return 0;
  *a1 = HIDWORD(gLoadedDiffHivesLock.MutantListHead.Blink);
  return 1;
}
