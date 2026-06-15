/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@Z @ 0x1800E8B2C
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800E91B0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x1800637FC (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800A9EA0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800C2998 (-_Xlen_string@std@@YAXXZ.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_7030d12a21dba11210293044e97fe9c7_,unsigned short const *,unsigned __int64>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  void *v5; // rbx
  unsigned __int64 v7; // r12
  char *v8; // rbp
  unsigned __int64 v9; // r14
  char *v10; // rax
  size_t v11; // r8
  char *v12; // rsi
  char *v13; // r14
  size_t v14; // rbp
  __int64 v15; // r15
  void *v16; // rbx

  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    std::_Xlen_string();
  v7 = (unsigned __int64)Src[3];
  v8 = (char *)v5 + a2;
  v9 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v5 + a2);
  if ( v9 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(2 * (v9 + 1));
  v11 = 2LL * (_QWORD)v5;
  Src[2] = v8;
  v12 = v10;
  Src[3] = (void *)v9;
  v13 = &v10[2 * (_QWORD)v5];
  v14 = 2 * a5;
  v15 = (__int64)v5 + a5;
  if ( v7 <= 7 )
  {
    memcpy_0(v10, Src, v11);
    memcpy_0(v13, L".dll", v14);
    *(_WORD *)&v12[2 * v15] = 0;
  }
  else
  {
    v16 = *Src;
    memcpy_0(v10, *Src, v11);
    memcpy_0(v13, L".dll", v14);
    *(_WORD *)&v12[2 * v15] = 0;
    std::_Deallocate<16>(v16, (struct std::nothrow_t *)(2 * v7 + 2));
  }
  *Src = v12;
  return Src;
}
