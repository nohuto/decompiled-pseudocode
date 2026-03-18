/*
 * XREFs of ??1?$vector@PEAVCCompositionSurfaceBitmap@@V?$allocator@PEAVCCompositionSurfaceBitmap@@@std@@@std@@QEAA@XZ @ 0x18015168C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<CCompositionSurfaceBitmap *>::~vector<CCompositionSurfaceBitmap *>(__int64 a1)
{
  std::vector<CLight *>::_Tidy(a1);
}
