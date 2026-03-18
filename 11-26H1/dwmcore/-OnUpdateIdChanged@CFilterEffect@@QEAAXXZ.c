/*
 * XREFs of ?OnUpdateIdChanged@CFilterEffect@@QEAAXXZ @ 0x180267614
 * Callers:
 *     ?SetUpdateId@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJI@Z @ 0x18024EF1C (-SetUpdateId@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJI@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@2@@Z @ 0x1800E7078 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$emplace@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBIUInput@CFilterEffect@@@1@@Z @ 0x180266C9C (--$emplace@U-$pair@$$CBIUInput@CFilterEffect@@@std@@@-$_Hash@V-$_Umap_traits@IUInput@CFilterEffe.c)
 *     ??1?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180266E24 (--1-$_Hash@V-$_Umap_traits@IUInput@CFilterEffect@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@AEAAJAEBV?$unordered_map@IUInput@CFilterEffect@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@@std@@@Z @ 0x1802677E0 (-ProcessUpdateInputs@CFilterEffect@@AEAAJAEBV-$unordered_map@IUInput@CFilterEffect@@U-$hash@I@st.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180267D78 (-find@-$_Hash@V-$_Umap_traits@IVCDDisplayFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equ.c)
 */

void __fastcall CFilterEffect::OnUpdateIdChanged(CFilterEffect *this, __int64 a2)
{
  _QWORD *v3; // rax
  int *v4; // rbx
  int *v5; // rdi
  __int128 *v6; // rsi
  int v7; // ecx
  __int128 v8; // xmm0
  int v9; // eax
  __int64 v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // rdi
  _QWORD v14[2]; // [rsp+20h] [rbp-39h] BYREF
  int v15; // [rsp+30h] [rbp-29h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-21h]
  __int64 v17; // [rsp+40h] [rbp-19h]
  __int64 v18; // [rsp+48h] [rbp-11h] BYREF
  __int128 v19; // [rsp+50h] [rbp-9h]
  __int64 v20; // [rsp+60h] [rbp+7h]
  __int64 v21; // [rsp+68h] [rbp+Fh]
  int v22; // [rsp+70h] [rbp+17h] BYREF
  __int64 v23; // [rsp+78h] [rbp+1Fh]
  int v24; // [rsp+80h] [rbp+27h]
  __int128 v25; // [rsp+84h] [rbp+2Bh]
  int v26; // [rsp+94h] [rbp+3Bh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v17 = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL, a2);
  *v3 = v3;
  v3[1] = v3;
  v16 = v3;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 7LL;
  v21 = 8LL;
  v15 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CFilterEffect::Input>>>>>>::_Assign_grow(
    (__int64)&v18,
    0x10uLL,
    (unsigned __int64)v3);
  v4 = (int *)*((_QWORD *)this + 17);
  v5 = (int *)*((_QWORD *)this + 20);
  v6 = (__int128 *)*((_QWORD *)this + 23);
  while ( v4 != *((int **)this + 18) )
  {
    v7 = *v5;
    v8 = *v6;
    v9 = *v4;
    v23 = 0LL;
    v26 = 0;
    v24 = v7;
    v25 = v8;
    v22 = v9;
    std::_Hash<std::_Umap_traits<unsigned int,CFilterEffect::Input,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFilterEffect::Input>>,0>>::emplace<std::pair<unsigned int const,CFilterEffect::Input>>(
      (float *)&v15,
      (__int64)v14,
      (__int64)&v22);
    ++v4;
    ++v5;
    ++v6;
  }
  v10 = *((_QWORD *)this + 11);
  v11 = (_QWORD *)*((_QWORD *)this + 26);
  while ( v10 != *((_QWORD *)this + 12) )
  {
    std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::find(
      &v15,
      v14,
      v10);
    if ( (_QWORD *)v14[0] == v16 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x297,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\filtereffect.cpp",
        (const char *)retaddr);
    v10 += 4LL;
    *(_QWORD *)(v14[0] + 24LL) = *v11++;
  }
  v12 = *((_QWORD *)this + 14);
  v13 = (_QWORD *)*((_QWORD *)this + 29);
  while ( v12 != *((_QWORD *)this + 15) )
  {
    std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::find(
      &v15,
      v14,
      v12);
    if ( (_QWORD *)v14[0] == v16 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A3,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\filtereffect.cpp",
        (const char *)retaddr);
    v12 += 4LL;
    *(_QWORD *)(v14[0] + 24LL) = *v13++;
  }
  CFilterEffect::ProcessUpdateInputs(this);
  std::_Hash<std::_Umap_traits<unsigned int,CFilterEffect::Input,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFilterEffect::Input>>,0>>::~_Hash<std::_Umap_traits<unsigned int,CFilterEffect::Input,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFilterEffect::Input>>,0>>((__int64)&v15);
}
