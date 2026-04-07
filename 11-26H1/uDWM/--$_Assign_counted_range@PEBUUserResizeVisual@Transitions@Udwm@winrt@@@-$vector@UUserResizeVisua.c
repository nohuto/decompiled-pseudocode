/*
 * XREFs of ??$_Assign_counted_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXPEBUUserResizeVisual@Transitions@Udwm@winrt@@_K@Z @ 0x1800D97A8
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXU?$array_view@$$CBUUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x1800DBD0C (-ReplaceAll@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUs.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002FDF4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180030428 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1800884DC (-_Calculate_growth@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800D98FC (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 *     ??$_Uninitialized_copy_n@PEBUUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@PEBU1234@_KPEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800D9CF4 (--$_Uninitialized_copy_n@PEBUUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 */

__int64 __fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Assign_counted_range<winrt::Udwm::Transitions::UserResizeVisual const *>(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 size_of; // rax
  __int64 *v9; // rax
  __int64 *v10; // r8
  unsigned __int64 v11; // r14
  __int64 *i; // r14
  __int64 result; // rax

  v3 = *(__int64 **)a1;
  v4 = a3;
  if ( a3 > (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3 )
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error((const char *)a1);
    v7 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth((_QWORD *)a1, a3);
    if ( v3 )
    {
      std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(v3, *(_QWORD *)(a1 + 8));
      std::_Deallocate<16>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    size_of = std::_Get_size_of_n<8>(v7);
    v9 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *(_QWORD *)a1 = v9;
    v10 = v9;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = &v9[v7];
    goto LABEL_14;
  }
  v10 = *(__int64 **)(a1 + 8);
  v11 = v10 - v3;
  if ( v4 > v11 )
  {
    while ( v3 != v10 )
    {
      winrt::Windows::Foundation::IUnknown::operator=(v3, a2);
      v10 = *(__int64 **)(a1 + 8);
      ++v3;
      ++a2;
    }
    v4 -= v11;
LABEL_14:
    result = std::_Uninitialized_copy_n<winrt::Udwm::Transitions::UserResizeVisual const *>(a2, v4, v10);
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  for ( i = &v3[v4]; v4; --v4 )
    winrt::Windows::Foundation::IUnknown::operator=(v3++, a2++);
  result = std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(i, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = i;
  return result;
}
