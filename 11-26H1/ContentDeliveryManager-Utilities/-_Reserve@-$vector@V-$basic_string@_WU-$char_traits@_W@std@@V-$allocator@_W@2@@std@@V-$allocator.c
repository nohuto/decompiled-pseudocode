/*
 * XREFs of ?_Reserve@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAX_K@Z @ 0x1800A43E8
 * Callers:
 *     ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800A446C (-push_back@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocato.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800047D4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Reallocate@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAX_K@Z @ 0x1800A4324 (-_Reallocate@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$alloca.c)
 */

__int64 __fastcall std::vector<std::wstring>::_Reserve(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx

  v2 = a1[1];
  result = (a1[2] - v2) >> 5;
  if ( !result )
  {
    v4 = (v2 - *a1) >> 5;
    if ( v4 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v5 = v4 + 1;
    v6 = (a1[2] - *a1) >> 5;
    v7 = 0LL;
    if ( 0x7FFFFFFFFFFFFFFLL - (v6 >> 1) >= v6 )
      v7 = v6 + (v6 >> 1);
    if ( v7 >= v5 )
      v5 = v7;
    return (__int64)std::vector<std::wstring>::_Reallocate(a1, v5);
  }
  return result;
}
