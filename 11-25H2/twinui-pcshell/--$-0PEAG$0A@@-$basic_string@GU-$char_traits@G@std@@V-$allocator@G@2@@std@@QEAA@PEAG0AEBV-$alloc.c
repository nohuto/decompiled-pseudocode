/*
 * XREFs of ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18018DFD4
 * Callers:
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180298624 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@K@Z @ 0x18046A0A0 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@K@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x18062F428 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180029F78 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802D0044 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

char **__fastcall std::wstring::wstring(char **a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  size_t v7; // rbx
  size_t size_of; // rax
  char *v10; // rax
  size_t v11; // rbx
  char *v12; // rdi

  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  if ( a2 == a3 )
  {
    a1[3] = (char *)7;
    *(_WORD *)a1 = 0;
  }
  else
  {
    v5 = 0x7FFFFFFFFFFFFFFELL;
    v6 = (a3 - a2) >> 1;
    if ( v6 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    a1[3] = (char *)7;
    if ( v6 <= 7 )
    {
      a1[2] = (char *)v6;
      v7 = 2 * v6;
      memcpy_0(a1, a2, v7);
      *(_WORD *)((char *)a1 + v7) = 0;
    }
    else
    {
      if ( (v6 | 7) <= 0x7FFFFFFFFFFFFFFELL )
      {
        v5 = v6 | 7;
        if ( (v6 | 7) < 0xA )
          v5 = 10LL;
      }
      size_of = std::_Get_size_of_n<2>(v5 + 1);
      v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      a1[2] = (char *)v6;
      v11 = 2 * v6;
      *a1 = v10;
      a1[3] = (char *)v5;
      v12 = v10;
      memcpy_0(v10, a2, v11);
      *(_WORD *)&v12[v11] = 0;
    }
  }
  return a1;
}
