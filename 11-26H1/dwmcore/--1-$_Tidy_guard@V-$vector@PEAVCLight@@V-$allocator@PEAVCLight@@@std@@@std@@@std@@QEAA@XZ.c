/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@@std@@QEAA@XZ @ 0x18025A6C4
 * Callers:
 *     ??$_Construct_n@PEAPEAVCLight@@PEAPEAV1@@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAX_K$$QEAPEAPEAVCLight@@1@Z @ 0x18025A510 (--$_Construct_n@PEAPEAVCLight@@PEAPEAV1@@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@st.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4 (-_Tidy@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_guard<std::vector<CLight *>>::~_Tidy_guard<std::vector<CLight *>>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<CLight *>::_Tidy(v1);
}
