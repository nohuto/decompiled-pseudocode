/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@Z @ 0x18030F880
 * Callers:
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1803155B0 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x180314DE4 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 */

void **__fastcall std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(
        void **Src,
        __int64 a2,
        __int64 a3,
        char a4)
{
  size_t v4; // rbp
  unsigned __int64 v7; // r13
  __int64 v8; // rbx
  _BYTE *v9; // rax
  _BYTE *v10; // r14
  void *v11; // rbx

  v4 = (size_t)Src[2];
  if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlen_string();
  v7 = (unsigned __int64)Src[3];
  v8 = std::string::_Calculate_growth(v4 + 1);
  v9 = std::_Allocate<16,std::_Default_allocate_traits>(v8 + 1);
  Src[2] = (void *)(v4 + 1);
  v10 = v9;
  Src[3] = (void *)v8;
  if ( v7 <= 0xF )
  {
    memcpy_0(v9, Src, v4);
    v10[v4] = a4;
    v10[v4 + 1] = 0;
  }
  else
  {
    v11 = *Src;
    memcpy_0(v9, *Src, v4);
    v10[v4] = a4;
    v10[v4 + 1] = 0;
    std::_Deallocate<16>(v11, (struct std::nothrow_t *)(v7 + 1));
  }
  *Src = v10;
  return Src;
}
