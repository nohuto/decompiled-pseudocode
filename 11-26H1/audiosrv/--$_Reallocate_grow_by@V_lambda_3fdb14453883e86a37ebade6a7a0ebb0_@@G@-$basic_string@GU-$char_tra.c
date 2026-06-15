/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@Z @ 0x180133DEC
 * Callers:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x1801401C8 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x1800637FC (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800A9EA0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800C2998 (-_Xlen_string@std@@YAXXZ.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_3fdb14453883e86a37ebade6a7a0ebb0_,unsigned short>(
        void **Src,
        __int64 a2,
        __int64 a3,
        __int16 a4)
{
  void *v4; // r14
  unsigned __int64 v7; // r15
  void *v8; // rbx
  unsigned __int64 v9; // r13
  char *v10; // rax
  size_t v11; // r14
  char *v12; // rsi
  void *v13; // rbx

  v4 = Src[2];
  if ( v4 == (void *)0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v7 = (unsigned __int64)Src[3];
  v8 = (char *)v4 + 1;
  v9 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v4 + 1);
  if ( v9 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(2 * (v9 + 1));
  v11 = 2LL * (_QWORD)v4;
  Src[2] = v8;
  Src[3] = (void *)v9;
  v12 = v10;
  if ( v7 <= 7 )
  {
    memcpy_0(v10, Src, v11);
    *(_WORD *)&v12[v11] = a4;
    *(_WORD *)&v12[v11 + 2] = 0;
  }
  else
  {
    v13 = *Src;
    memcpy_0(v10, *Src, v11);
    *(_WORD *)&v12[v11] = a4;
    *(_WORD *)&v12[v11 + 2] = 0;
    std::_Deallocate<16>(v13, (struct std::nothrow_t *)(2 * v7 + 2));
  }
  *Src = v12;
  return Src;
}
