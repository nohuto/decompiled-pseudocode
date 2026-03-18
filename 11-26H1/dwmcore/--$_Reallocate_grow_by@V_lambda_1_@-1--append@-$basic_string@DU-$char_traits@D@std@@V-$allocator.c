/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_1_@?1??append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV34@QEBD_K@Z@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??append@01@QEAAAEAV01@QEBD0@Z@PEBD_K@Z @ 0x180237108
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x180237274 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18022FC5C (-_Xlen_string@std@@YAXXZ.c)
 *     ??$_Allocate_for_capacity@$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CAPEADAEAV?$allocator@D@1@AEA_K@Z @ 0x1802370E4 (--$_Allocate_for_capacity@$0A@@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CAPE.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x180237240 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 */

void **__fastcall ____Reallocate_grow_by_V_lambda_1___1__append___basic_string_DU__char_traits_D_std__V__allocator_D_2__std__QEAAAEAV34_QEBD_K_Z_PEBD_K___basic_string_DU__char_traits_D_std__V__allocator_D_2__std__AEAAAEAV01__KV_lambda_1___1__append_01_QEAAAEAV01_QEBD0_Z_PEBD_K_Z(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size)
{
  size_t v5; // r14
  size_t v6; // rbp
  unsigned __int64 v9; // r13
  size_t v10; // rbx
  __int64 v11; // rcx
  char *v12; // rsi
  char *v13; // r15
  void *v14; // rbx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = (size_t)Src[2];
  v6 = Size;
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    std::_Xlen_string();
  v9 = (unsigned __int64)Src[3];
  v10 = v5 + a2;
  v16 = std::string::_Calculate_growth(v5 + a2);
  v12 = (char *)std::string::_Allocate_for_capacity<0>(v11, &v16);
  Src[3] = (void *)v16;
  Src[2] = (void *)v10;
  v13 = &v12[v5];
  if ( v9 <= 0xF )
  {
    memcpy_0(v12, Src, v5);
    memcpy_0(v13, a4, v6);
    v13[v6] = 0;
  }
  else
  {
    v14 = *Src;
    memcpy_0(v12, *Src, v5);
    memcpy_0(v13, a4, v6);
    v13[v6] = 0;
    std::_Deallocate<16>(v14, v9 + 1);
  }
  *Src = v12;
  return Src;
}
