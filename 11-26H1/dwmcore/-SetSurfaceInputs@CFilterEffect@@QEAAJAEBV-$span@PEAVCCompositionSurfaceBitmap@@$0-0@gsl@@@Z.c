/*
 * XREFs of ?SetSurfaceInputs@CFilterEffect@@QEAAJAEBV?$span@PEAVCCompositionSurfaceBitmap@@$0?0@gsl@@@Z @ 0x18021B63C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$_Insert_counted_range@PEAPEAVCVectorShape@@@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCVectorShape@@@std@@@std@@@1@PEAPEAVCVectorShape@@_K@Z @ 0x1801C6474 (--$_Insert_counted_range@PEAPEAVCVectorShape@@@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVect.c)
 */

__int64 __fastcall CFilterEffect::SetSurfaceInputs(__int64 a1, __int64 a2)
{
  char **v2; // rcx
  char *v4; // rax
  char *v5; // rdx

  v2 = (char **)(a1 + 232);
  v4 = *v2;
  v5 = v2[1];
  if ( *v2 != v5 )
  {
    v2[1] = v4;
    v5 = v4;
  }
  std::vector<CVectorShape *>::_Insert_counted_range<CVectorShape * *>(
    (__int64)v2,
    v5,
    *(const void **)(a2 + 8),
    (8LL * *(_QWORD *)a2) >> 3);
  return 0LL;
}
