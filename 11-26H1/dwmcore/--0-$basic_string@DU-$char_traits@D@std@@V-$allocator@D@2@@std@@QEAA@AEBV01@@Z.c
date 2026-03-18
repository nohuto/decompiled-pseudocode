/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180280CF4
 * Callers:
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x180280E00 (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 * Callees:
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18022FC5C (-_Xlen_string@std@@YAXXZ.c)
 *     ??$_Allocate_for_capacity@$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CAPEADAEAV?$allocator@D@1@AEA_K@Z @ 0x1802370E4 (--$_Allocate_for_capacity@$0A@@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CAPE.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x180237240 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 */

__int64 __fastcall std::string::string(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  void *v6; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_OWORD *)a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) > 0xFuLL )
    v2 = *(_OWORD **)a2;
  if ( v4 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlen_string();
  if ( v4 > 0xF )
  {
    v8 = std::string::_Calculate_growth(v4, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
    v6 = std::string::_Allocate_for_capacity<0>(v5, &v8);
    *(_QWORD *)(a1 + 24) = v8;
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 16) = v4;
    memcpy_0(v6, v2, v4 + 1);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_OWORD *)a1 = *v2;
  }
  return a1;
}
