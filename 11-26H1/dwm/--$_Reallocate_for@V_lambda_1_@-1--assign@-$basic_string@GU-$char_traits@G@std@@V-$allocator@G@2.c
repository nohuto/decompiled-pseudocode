/*
 * XREFs of ??$_Reallocate_for@V_lambda_1_@?1??assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@QEBG_K@Z@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??assign@01@QEAAAEAV01@QEBG0@Z@PEBG@Z @ 0x14000D988
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000DD18 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     memcpy_0 @ 0x140006152 (memcpy_0.c)
 *     ??$_Allocate_for_capacity@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAPEAGAEAV?$allocator@G@1@AEA_K@Z @ 0x14000D654 (--$_Allocate_for_capacity@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAPE.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x14000D8EC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x14000EBB4 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x14000EDC8 (-_Xlen_string@std@@YAXXZ.c)
 */

__int64 __fastcall ____Reallocate_for_V_lambda_1___1__assign___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__QEAAAEAV34_QEBG_K_Z_PEBG___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__AEAAAEAV01__KV_lambda_1___1__assign_01_QEAAAEAV01_QEBG0_Z_PEBG_Z(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  char *v9; // rax
  unsigned __int64 v10; // rcx
  char *v11; // rsi
  size_t v12; // rbx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v7 = *(_QWORD *)(a1 + 24);
  v14 = std::wstring::_Calculate_growth(a2);
  v9 = (char *)std::wstring::_Allocate_for_capacity<0>(v8, (unsigned __int64 *)&v14);
  v10 = v14;
  *(_QWORD *)(a1 + 16) = a2;
  v11 = v9;
  *(_QWORD *)(a1 + 24) = v10;
  v12 = 2 * a2;
  memcpy_0(v9, a4, v12);
  *(_WORD *)&v11[v12] = 0;
  if ( v7 > 7 )
    std::_Deallocate<16>(*(_QWORD **)a1, 2 * v7 + 2);
  *(_QWORD *)a1 = v11;
  return a1;
}
