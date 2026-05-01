/*
 * XREFs of ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x1800336D8
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18013CE90 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV56@_K@Z @ 0x180576F00 (-TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_tr.c)
 *     _anonymous_namespace_::TruncateDisplayName @ 0x1805F0E6C (_anonymous_namespace_--TruncateDisplayName.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall std::wstring::push_back(const void **Src, __int16 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // r14
  const void **v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx
  const void *v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 size_of; // rax
  char *v12; // rax
  size_t v13; // rsi
  char *v14; // rbp
  const void *v15; // rbx

  v2 = (unsigned __int64)Src[2];
  v4 = (unsigned __int64)Src[3];
  v5 = Src;
  if ( v2 >= v4 )
  {
    v7 = 0x7FFFFFFFFFFFFFFELL;
    if ( v2 == 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    v8 = (const void *)(v2 + 1);
    v9 = (v2 + 1) | 7;
    if ( v9 <= 0x7FFFFFFFFFFFFFFELL )
    {
      v10 = v4 >> 1;
      if ( v4 <= 0x7FFFFFFFFFFFFFFELL - (v4 >> 1) )
      {
        v7 = v4 + v10;
        if ( v9 >= v4 + v10 )
          v7 = (v2 + 1) | 7;
      }
    }
    size_of = std::_Get_size_of_n<2>(v7 + 1);
    v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    v13 = 2 * v2;
    v5[2] = v8;
    v5[3] = (const void *)v7;
    v14 = v12;
    if ( v4 > 7 )
    {
      v15 = *v5;
      memcpy_0(v12, *v5, v13);
      *(_WORD *)&v14[v13] = a2;
      *(_WORD *)&v14[v13 + 2] = 0;
      result = std::_Deallocate<16>(v15, 2 * v4 + 2);
    }
    else
    {
      memcpy_0(v12, v5, v13);
      result = 0LL;
      *(_WORD *)&v14[v13] = a2;
      *(_WORD *)&v14[v13 + 2] = 0;
    }
    *v5 = v14;
  }
  else
  {
    Src[2] = (const void *)(v2 + 1);
    if ( v4 > 7 )
      v5 = (const void **)*Src;
    result = 0LL;
    *((_WORD *)v5 + v2) = a2;
    *((_WORD *)v5 + v2 + 1) = 0;
  }
  return result;
}
