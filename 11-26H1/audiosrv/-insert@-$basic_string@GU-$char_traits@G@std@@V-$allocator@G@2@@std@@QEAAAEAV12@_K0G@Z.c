/*
 * XREFs of ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x18014E388
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigurationSettings@@@Z @ 0x180058868 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigur.c)
 * Callees:
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x1800F593C (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_9a2017f333e4665a2f587aa8c7c709b8_@@_K_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_9a2017f333e4665a2f587aa8c7c709b8_@@_K2G@Z @ 0x1801493B4 (--$_Reallocate_grow_by@V_lambda_9a2017f333e4665a2f587aa8c7c709b8_@@_K_KG@-$basic_string@GU-$char.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

void **__fastcall std::wstring::insert(void **Src)
{
  void *v2; // r8
  bool v3; // cf
  bool v4; // zf
  _WORD *v5; // rdi
  void **result; // rax

  std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)Src, 0LL);
  v2 = Src[2];
  if ( Src[3] == v2 )
    return std::wstring::_Reallocate_grow_by<_lambda_9a2017f333e4665a2f587aa8c7c709b8_,unsigned __int64,unsigned __int64,unsigned short>(Src);
  v3 = (unsigned __int64)Src[3] < 7;
  v4 = Src[3] == (void *)7;
  Src[2] = (char *)v2 + 1;
  v5 = Src;
  if ( !v3 && !v4 )
    v5 = *Src;
  memmove_0(v5 + 1, v5, 2LL * (_QWORD)v2 + 2);
  result = Src;
  *v5 = 94;
  return result;
}
