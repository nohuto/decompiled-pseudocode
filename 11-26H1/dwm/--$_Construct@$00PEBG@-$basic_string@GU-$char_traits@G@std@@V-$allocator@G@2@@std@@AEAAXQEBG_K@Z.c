/*
 * XREFs of ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x14000D6EC
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x14000DAB8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 * Callees:
 *     memcpy_0 @ 0x140006152 (memcpy_0.c)
 *     ??$_Allocate_for_capacity@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAPEAGAEAV?$allocator@G@1@AEA_K@Z @ 0x14000D654 (--$_Allocate_for_capacity@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAPE.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x14000EBB4 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x14000EDC8 (-_Xlen_string@std@@YAXXZ.c)
 */

__int64 __fastcall std::wstring::_Construct<1,unsigned short const *>(char **a1, const void *a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rcx
  char *v9; // rax
  char *v10; // rbx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v6 = 2 * a3;
  if ( a3 > 7 )
  {
    v11 = std::wstring::_Calculate_growth(a3);
    v9 = (char *)std::wstring::_Allocate_for_capacity<0>(v8, (unsigned __int64 *)&v11);
    a1[3] = (char *)v11;
    *a1 = v9;
    v10 = v9;
    a1[2] = (char *)a3;
    memcpy_0(v9, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)&v10[v6] = 0;
  }
  else
  {
    a1[3] = (char *)7;
    a1[2] = (char *)a3;
    memcpy_0(a1, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)((char *)a1 + v6) = 0;
  }
  return result;
}
