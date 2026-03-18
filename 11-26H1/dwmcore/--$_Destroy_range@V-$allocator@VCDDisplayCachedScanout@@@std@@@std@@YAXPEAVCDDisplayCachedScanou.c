/*
 * XREFs of ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x1801D7D30
 * Callers:
 *     ?clear@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAXXZ @ 0x1801D7D00 (-clear@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAX.c)
 *     ??$_Uninitialized_move@PEAVCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDisplayCachedScanout@@QEAV1@0PEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180299F30 (--$_Uninitialized_move@PEAVCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDisplayCachedScanout@@PEAV1@_KAEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180299FBC (--$_Uninitialized_value_construct_n@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDi.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x18029A3D8 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAA@XZ @ 0x18029A6F0 (--1_Reallocation_guard@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@.c)
 *     ?_Change_array@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAXQEAVCDDisplayCachedScanout@@_K1@Z @ 0x18029B34C (-_Change_array@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@st.c)
 * Callees:
 *     ??1CDDisplayCachedScanout@@QEAA@XZ @ 0x1800FABEC (--1CDDisplayCachedScanout@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(
        CDDisplayCachedScanout *this,
        CDDisplayCachedScanout *a2)
{
  CDDisplayCachedScanout *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CDDisplayCachedScanout::~CDDisplayCachedScanout(v3);
      v3 = (CDDisplayCachedScanout *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
}
