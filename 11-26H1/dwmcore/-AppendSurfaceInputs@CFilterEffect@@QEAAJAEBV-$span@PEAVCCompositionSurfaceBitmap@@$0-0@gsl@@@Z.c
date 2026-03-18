/*
 * XREFs of ?AppendSurfaceInputs@CFilterEffect@@QEAAJAEBV?$span@PEAVCCompositionSurfaceBitmap@@$0?0@gsl@@@Z @ 0x18021D3E8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$_Insert_counted_range@PEAPEAVCVectorShape@@@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCVectorShape@@@std@@@std@@@1@PEAPEAVCVectorShape@@_K@Z @ 0x1801C6474 (--$_Insert_counted_range@PEAPEAVCVectorShape@@@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVect.c)
 */

__int64 __fastcall CFilterEffect::AppendSurfaceInputs(__int64 a1, __int64 a2)
{
  std::vector<CVectorShape *>::_Insert_counted_range<CVectorShape * *>(
    a1 + 232,
    *(char **)(a1 + 240),
    *(const void **)(a2 + 8),
    (8LL * *(_QWORD *)a2) >> 3);
  return 0LL;
}
