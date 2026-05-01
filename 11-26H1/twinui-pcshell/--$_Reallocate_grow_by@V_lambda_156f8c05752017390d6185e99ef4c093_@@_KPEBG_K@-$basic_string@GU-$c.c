/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG2@Z @ 0x1801081D4
 * Callers:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1801080A8 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

const void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_156f8c05752017390d6185e99ef4c093_,unsigned __int64,unsigned short const *,unsigned __int64>(
        const void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        void *Srca,
        __int64 a6)
{
  const void *v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v9; // r14
  char *v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 size_of; // rax
  char *v14; // rsi
  size_t v15; // r15
  size_t v16; // r8
  char *v17; // rbp
  const void *v18; // rbx

  v6 = Src[2];
  v7 = 0x7FFFFFFFFFFFFFFELL;
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v6 < a2 )
    std::_Xlen_string();
  v9 = (unsigned __int64)Src[3];
  v10 = (char *)v6 + a2;
  v11 = ((unsigned __int64)v6 + a2) | 7;
  if ( v11 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v12 = v9 >> 1;
    if ( v9 <= 0x7FFFFFFFFFFFFFFELL - (v9 >> 1) )
    {
      v7 = v9 + v12;
      if ( v11 >= v9 + v12 )
        v7 = v11;
    }
  }
  size_of = std::_Get_size_of_n<2>(v7 + 1);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v15 = 2LL * (_QWORD)v6 + 2;
  Src[2] = v10;
  Src[3] = (const void *)v7;
  v16 = 2 * a6;
  v17 = &v14[2 * a6];
  if ( v9 <= 7 )
  {
    memcpy_0(v14, Srca, v16);
    memcpy_0(v17, Src, v15);
  }
  else
  {
    v18 = *Src;
    memcpy_0(v14, Srca, v16);
    memcpy_0(v17, v18, v15);
    std::_Deallocate<16>(v18, 2 * v9 + 2);
  }
  *Src = v14;
  return Src;
}
