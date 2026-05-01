/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_3c42e42a79350c8a48dd4e272c8dbcce_@@$$V@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_3c42e42a79350c8a48dd4e272c8dbcce_@@@Z @ 0x18030F95C
 * Callers:
 *     ??$_Resize_and_overwrite@V_lambda_0c61b6091c0f476b83bd2ddad44c8ebc_@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KV_lambda_0c61b6091c0f476b83bd2ddad44c8ebc_@@@Z @ 0x18030FCB8 (--$_Resize_and_overwrite@V_lambda_0c61b6091c0f476b83bd2ddad44c8ebc_@@@-$basic_string@GU-$char_tr.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x18016F830 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_3c42e42a79350c8a48dd4e272c8dbcce_,>(
        void **Src,
        unsigned __int64 a2)
{
  void *v2; // r14
  unsigned __int64 v4; // r15
  char *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 size_of; // rax
  void *v8; // rax
  void *v9; // rbp
  size_t v10; // r8
  void *v11; // rbx

  v2 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v2 < a2 )
    std::_Xlen_string();
  v4 = (unsigned __int64)Src[3];
  v5 = (char *)v2 + a2;
  v6 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v2 + a2);
  size_of = std::_Get_size_of_n<2>(v6 + 1);
  v8 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  Src[2] = v5;
  v9 = v8;
  Src[3] = (void *)v6;
  v10 = 2LL * (_QWORD)v2 + 2;
  if ( v4 <= 7 )
  {
    memcpy_0(v8, Src, v10);
  }
  else
  {
    v11 = *Src;
    memcpy_0(v8, *Src, v10);
    std::_Deallocate<16>(v11, (struct std::nothrow_t *)(2 * v4 + 2));
  }
  *Src = v9;
  return Src;
}
