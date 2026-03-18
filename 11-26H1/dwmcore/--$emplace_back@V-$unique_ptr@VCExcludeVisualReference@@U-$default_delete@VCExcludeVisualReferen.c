/*
 * XREFs of ??$emplace_back@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@$$QEAV21@@Z @ 0x180262D7C
 * Callers:
 *     ?AppendVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x1802193E4 (-AppendVisuals@CVisualGroup@@QEAAJV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180262E00 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180262C48 (--$_Emplace_reallocate@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisual.c)
 */

__int64 *__fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // r9
  __int64 v3; // rax
  __int64 *v4; // rdx

  v2 = a1[1];
  if ( v2 == a1[2] )
    return std::vector<std::unique_ptr<CExcludeVisualReference>>::_Emplace_reallocate<std::unique_ptr<CExcludeVisualReference>>(
             a1,
             a1[1],
             a2);
  v3 = *a2;
  *a2 = 0LL;
  *v2 = v3;
  v4 = a1[1];
  a1[1] = v4 + 1;
  return v4;
}
