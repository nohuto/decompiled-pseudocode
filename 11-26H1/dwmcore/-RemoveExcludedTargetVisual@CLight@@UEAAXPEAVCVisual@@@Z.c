/*
 * XREFs of ?RemoveExcludedTargetVisual@CLight@@UEAAXPEAVCVisual@@@Z @ 0x180264B80
 * Callers:
 *     ?RemoveExcludedTargetVisual@CSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180282730 (-RemoveExcludedTargetVisual@CSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?erase@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@@Z @ 0x1800FC340 (-erase@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_V.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

void __fastcall CLight::RemoveExcludedTargetVisual(const __m128i **this, struct CVisual *a2)
{
  char *v2; // rdi
  const __m128i *trivial_8; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)(this + 26);
  trivial_8 = _std_find_trivial_8(this[26], this[27], (unsigned __int64)a2);
  if ( trivial_8 != this[27] )
    std::vector<CLight *>::erase((__int64)v2, &v5, (__int64)trivial_8);
}
