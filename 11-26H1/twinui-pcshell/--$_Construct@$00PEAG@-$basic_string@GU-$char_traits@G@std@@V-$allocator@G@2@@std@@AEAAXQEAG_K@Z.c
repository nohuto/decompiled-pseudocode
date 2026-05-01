/*
 * XREFs of ??$_Construct@$00PEAG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEAG_K@Z @ 0x180234A2C
 * Callers:
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x1801A950C (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180033F54 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,unsigned short *>(char **a1, const void *a2, unsigned __int64 a3)
{
  __int64 v6; // r15
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  __int64 size_of; // rax
  char *v10; // rax
  char *v11; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v6 = 2 * a3;
  if ( a3 > 7 )
  {
    v8 = std::wstring::_Calculate_growth(a3, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
    size_of = std::_Get_size_of_n<2>(v8 + 1);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v10;
    a1[2] = (char *)a3;
    a1[3] = (char *)v8;
    v11 = v10;
    memcpy_0(v10, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)&v11[v6] = 0;
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
