/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_9a2017f333e4665a2f587aa8c7c709b8_@@_K_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_9a2017f333e4665a2f587aa8c7c709b8_@@_K2G@Z @ 0x1801493B4
 * Callers:
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x18014E388 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x1800637FC (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800A9EA0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800C2998 (-_Xlen_string@std@@YAXXZ.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_9a2017f333e4665a2f587aa8c7c709b8_,unsigned __int64,unsigned __int64,unsigned short>(
        void **Src)
{
  void *v1; // rbx
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r15
  _WORD *v5; // rax
  _WORD *v6; // rsi
  size_t v7; // r8
  void *v8; // rcx
  void *v9; // rbx
  void *v10; // rdx

  v1 = Src[2];
  if ( v1 == (void *)0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v3 = (unsigned __int64)Src[3];
  v4 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v1 + 1);
  if ( v4 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(2 * (v4 + 1));
  Src[2] = (char *)v1 + 1;
  v6 = v5;
  Src[3] = (void *)v4;
  v7 = 2LL * (_QWORD)v1 + 2;
  v8 = v5 + 1;
  if ( v3 <= 7 )
  {
    *v5 = 94;
    memcpy_0(v8, Src, v7);
  }
  else
  {
    v9 = *Src;
    v10 = *Src;
    *v5 = 94;
    memcpy_0(v8, v10, v7);
    std::_Deallocate<16>(v9, (struct std::nothrow_t *)(2 * v3 + 2));
  }
  *Src = v6;
  return Src;
}
