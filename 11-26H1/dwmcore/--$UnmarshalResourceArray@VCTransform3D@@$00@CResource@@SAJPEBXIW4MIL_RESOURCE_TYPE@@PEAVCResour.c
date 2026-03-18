/*
 * XREFs of ??$UnmarshalResourceArray@VCTransform3D@@$00@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV?$vector@PEAVCTransform3D@@V?$allocator@PEAVCTransform3D@@@std@@@std@@@Z @ 0x180245234
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResource::UnmarshalResourceArray<CTransform3D,1>(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return CResource::UnmarshalResourceArray(a1, a2, 0x94u, a4, a5, a6);
}
