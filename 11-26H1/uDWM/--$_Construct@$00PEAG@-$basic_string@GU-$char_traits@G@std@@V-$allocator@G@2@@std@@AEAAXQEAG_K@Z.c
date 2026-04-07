/*
 * XREFs of ??$_Construct@$00PEAG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEAG_K@Z @ 0x1800D1B48
 * Callers:
 *     ??$_Integral_to_string@GH@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@H@Z @ 0x1800D1BFC (--$_Integral_to_string@GH@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@H@.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180068950 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate_for_capacity@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAPEAGAEAV?$allocator@G@1@AEA_K@Z @ 0x180074574 (--$_Allocate_for_capacity@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAPE.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,unsigned short *>(__int64 a1, const void *a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rcx
  char *v9; // rax
  char *v10; // rbx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Dwm_Xlength_error((const char *)a1);
  v6 = 2 * a3;
  if ( a3 > 7 )
  {
    v11 = std::wstring::_Calculate_growth(a3, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
    v9 = (char *)std::wstring::_Allocate_for_capacity<0>(v8, &v11);
    *(_QWORD *)(a1 + 24) = v11;
    *(_QWORD *)a1 = v9;
    v10 = v9;
    *(_QWORD *)(a1 + 16) = a3;
    memcpy_0(v9, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)&v10[v6] = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_QWORD *)(a1 + 16) = a3;
    memcpy_0((void *)a1, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)(v6 + a1) = 0;
  }
  return result;
}
