/*
 * XREFs of ?_Change_array@?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@AEAAXQEAPEAVCAnimatedTransitionVisual@@_K1@Z @ 0x180089B68
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18009D124 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800B2990 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CAnimatedTransitionVisual *>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
