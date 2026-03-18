/*
 * XREFs of ??$UnmarshalResourceArray@VCCompositionGlyphRun@@$00@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV?$vector@PEAVCCompositionGlyphRun@@V?$allocator@PEAVCCompositionGlyphRun@@@std@@@std@@@Z @ 0x1802451A8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResource::UnmarshalResourceArray<CCompositionGlyphRun,1>(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return CResource::UnmarshalResourceArray(a1, a2, 0x1Cu, a4, a5, a6);
}
