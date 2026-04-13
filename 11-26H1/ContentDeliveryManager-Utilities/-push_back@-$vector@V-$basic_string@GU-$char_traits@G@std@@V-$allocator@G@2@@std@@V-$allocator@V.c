/*
 * XREFs of ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18005ECE4
 * Callers:
 *     _anonymous_namespace_::SplitString @ 0x18005872C (_anonymous_namespace_--SplitString.c)
 *     ?SplitString@Details@SubscribedContentStore@CreativeFramework@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@5@PEBG@Z @ 0x180064304 (-SplitString@Details@SubscribedContentStore@CreativeFramework@@YA-AV-$vector@V-$basic_string@GU-.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004B5F0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Reserve@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18005C4D4 (-_Reserve@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-.c)
 */

__int64 __fastcall std::vector<std::wstring>::push_back(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rdi
  __int64 result; // rax

  v3 = a2;
  v4 = a1[1];
  if ( a2 < v4 && *a1 <= a2 )
  {
    v6 = a2 - *a1;
    if ( v4 == a1[2] )
      std::vector<std::wstring>::_Reserve(a1);
    v3 = *a1 + (v6 & 0xFFFFFFFFFFFFFFE0uLL);
  }
  else if ( v4 == a1[2] )
  {
    std::vector<std::wstring>::_Reserve(a1);
  }
  result = std::wstring::wstring(a1[1], v3);
  a1[1] += 32LL;
  return result;
}
