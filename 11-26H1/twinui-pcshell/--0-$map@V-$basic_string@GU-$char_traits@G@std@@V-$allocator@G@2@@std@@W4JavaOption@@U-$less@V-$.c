/*
 * XREFs of ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@1@@Z @ 0x180577520
 * Callers:
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1805776EC (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@1@@Z @ 0x180577160 (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::map<std::wstring,enum JavaOption>::map<std::wstring,enum JavaOption>(__int64 a1, __m128i *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __m128i v5; // xmm0
  __int64 v6; // rbx
  unsigned __int64 v7; // xmm0_8

  qword_1808DEB58 = 0LL;
  qword_1808DEB60 = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits>(0x48uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  qword_1808DEB58 = (__int64)v4;
  v5 = *a2;
  v6 = a2->m128i_i64[0];
  v7 = _mm_srli_si128(v5, 8).m128i_u64[0];
  while ( v6 != v7 )
  {
    std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::_Emplace_hint<std::pair<std::wstring const,enum JavaOption> const &>(
      v3,
      (__int64)v4,
      v6);
    v6 += 40LL;
  }
  return &qword_1808DEB58;
}
