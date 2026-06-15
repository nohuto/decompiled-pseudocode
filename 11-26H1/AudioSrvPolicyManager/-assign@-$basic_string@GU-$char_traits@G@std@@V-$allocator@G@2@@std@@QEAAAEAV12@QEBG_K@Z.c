/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180021470
 * Callers:
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x18002D120 (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180021690 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18003B144 (-_Xlen_string@std@@YAXXZ.c)
 *     memmove_0 @ 0x18004B850 (memmove_0.c)
 */

void **__fastcall std::wstring::assign(void **a1, void *Src, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v7; // r15
  char *v8; // rax
  size_t v9; // rbx
  char *v10; // rbp
  char *v12; // rbp
  __int64 v13; // rbx

  v3 = (unsigned __int64)a1[3];
  if ( a3 <= v3 )
  {
    v12 = (char *)a1;
    if ( v3 > 7 )
      v12 = (char *)*a1;
    a1[2] = (void *)a3;
    v13 = 2 * a3;
    memmove_0(v12, Src, 2 * a3);
    *(_WORD *)&v12[v13] = 0;
  }
  else
  {
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    v7 = std::wstring::_Calculate_growth(a3);
    if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(2 * (v7 + 1));
    a1[2] = (void *)a3;
    v9 = 2 * a3;
    a1[3] = (void *)v7;
    v10 = v8;
    memcpy_0(v8, Src, v9);
    *(_WORD *)&v10[v9] = 0;
    if ( v3 > 7 )
      std::_Deallocate<16>(*a1, (const struct std::nothrow_t *)(2 * v3 + 2));
    *a1 = v10;
  }
  return a1;
}
