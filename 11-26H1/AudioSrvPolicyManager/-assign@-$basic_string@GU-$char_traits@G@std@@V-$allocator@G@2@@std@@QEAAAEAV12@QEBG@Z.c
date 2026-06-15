/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180021570
 * Callers:
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18001C1E0 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180042BAC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180021690 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18003B144 (-_Xlen_string@std@@YAXXZ.c)
 *     memmove_0 @ 0x18004B850 (memmove_0.c)
 */

void **__fastcall std::wstring::assign(void **a1, _WORD *Src)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // r15
  char *v7; // rax
  size_t v8; // rbx
  char *v9; // rbp
  char *v11; // rbp
  size_t v12; // rbx

  v2 = -1LL;
  do
    ++v2;
  while ( Src[v2] );
  v5 = (unsigned __int64)a1[3];
  if ( v2 <= v5 )
  {
    v11 = (char *)a1;
    if ( v5 > 7 )
      v11 = (char *)*a1;
    a1[2] = (void *)v2;
    v12 = 2 * v2;
    memmove_0(v11, Src, v12);
    *(_WORD *)&v11[v12] = 0;
  }
  else
  {
    if ( v2 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    v6 = std::wstring::_Calculate_growth(v2);
    if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(2 * (v6 + 1));
    a1[2] = (void *)v2;
    v8 = 2 * v2;
    a1[3] = (void *)v6;
    v9 = v7;
    memcpy_0(v7, Src, v8);
    *(_WORD *)&v9[v8] = 0;
    if ( v5 > 7 )
      std::_Deallocate<16>(*a1, (const struct std::nothrow_t *)(2 * v5 + 2));
    *a1 = v9;
  }
  return a1;
}
