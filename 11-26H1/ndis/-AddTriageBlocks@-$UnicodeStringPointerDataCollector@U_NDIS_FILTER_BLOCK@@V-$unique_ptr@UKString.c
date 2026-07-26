/*
 * XREFs of ?AddTriageBlocks@?$UnicodeStringPointerDataCollector@U_NDIS_FILTER_BLOCK@@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$0CI@@@SAXPEAU_NDIS_FILTER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x14009A1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMemoryValid@@YA_NPEAX_K@Z @ 0x140093E14 (-IsMemoryValid@@YA_NPEAX_K@Z.c)
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall UnicodeStringPointerDataCollector<_NDIS_FILTER_BLOCK,wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,40>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  unsigned __int16 *v2; // rbx
  char result; // al

  v2 = *(unsigned __int16 **)(a1 + 40);
  result = IsMemoryValid((char *)v2, 0x10uLL);
  if ( result )
  {
    if ( *((_QWORD *)v2 + 1) )
    {
      TriageDataArray::AddDataBlock(a2, v2, 0x10uLL);
      return TriageDataArray::AddDataBlock(a2, *((void **)v2 + 1), *v2);
    }
  }
  return result;
}
