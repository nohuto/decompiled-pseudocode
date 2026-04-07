/*
 * XREFs of ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800DCDF8
 * Callers:
 *     ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800DD1F8 (--$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transitions@.c)
 *     ?Append@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1800DDB50 (-Append@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResize.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180062ED8 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180063EE8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x180096034 (-_Calculate_growth@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800DCC4C (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 *     ??$_Uninitialized_move@PEAUUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800DCFA4 (--$_Uninitialized_move@PEAUUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVisu.c)
 *     ??$construct@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@?$_Default_allocator_traits@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@SAXAEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@1@QEAUUserResizeVisual@Transitions@Udwm@winrt@@AEBU3456@@Z @ 0x1800DD024 (--$construct@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@-$_Default_allocator_traits@V-$.c)
 */

char *__fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_reallocate<winrt::Udwm::Transitions::UserResizeVisual const &>(
        __int64 *a1,
        winrt::Udwm::Transitions::AnimationCompletedHandler *a2,
        __int64 a3)
{
  winrt::Udwm::Transitions::AnimationCompletedHandler *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v11; // rdx
  char *v12; // rdi
  __int64 v13; // rcx
  char *v14; // rbp
  winrt::Udwm::Transitions::AnimationCompletedHandler *v15; // rdx
  char *v16; // r8
  winrt::Udwm::Transitions::AnimationCompletedHandler *v17; // rcx
  char *result; // rax

  v3 = (winrt::Udwm::Transitions::AnimationCompletedHandler *)*a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)0x1FFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of, v11);
  v13 = (a2 - v3) >> 3;
  v14 = &v12[8 * v13];
  std::_Default_allocator_traits<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>::construct<winrt::Udwm::Transitions::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual const &>(
    v13,
    v14,
    a3);
  v15 = (winrt::Udwm::Transitions::AnimationCompletedHandler *)a1[1];
  v16 = v12;
  v17 = (winrt::Udwm::Transitions::AnimationCompletedHandler *)*a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<winrt::Udwm::Transitions::UserResizeVisual *>(v17, a2, v12);
    v15 = (winrt::Udwm::Transitions::AnimationCompletedHandler *)a1[1];
    v16 = v14 + 8;
    v17 = a2;
  }
  std::_Uninitialized_move<winrt::Udwm::Transitions::UserResizeVisual *>(v17, v15, v16);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(
      (winrt::Udwm::Transitions::AnimationCompletedHandler *)*a1,
      (winrt::Udwm::Transitions::AnimationCompletedHandler *)a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *a1 = (__int64)v12;
  result = v14;
  a1[1] = (__int64)&v12[8 * v8];
  a1[2] = (__int64)&v12[8 * v9];
  return result;
}
