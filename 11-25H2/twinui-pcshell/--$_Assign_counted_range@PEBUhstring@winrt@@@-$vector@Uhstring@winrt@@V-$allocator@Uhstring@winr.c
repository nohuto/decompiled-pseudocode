/*
 * XREFs of ??$_Assign_counted_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@_K@Z @ 0x1805F3F78
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXU?$array_view@$$CBUhstring@winrt@@@2@@Z @ 0x1805F83FC (-ReplaceAll@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800AC148 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800FE32C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801D7794 (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x180499F08 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 *     ??$_Uninitialized_copy_n@PEBUhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring@winrt@@PEBU12@_KPEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1805F41E0 (--$_Uninitialized_copy_n@PEBUhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstri.c)
 */

void __fastcall std::vector<winrt::hstring>::_Assign_counted_range<winrt::hstring const *>(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  volatile signed __int32 **v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v7; // r14
  size_t size_of; // rax
  char *v9; // rax
  volatile signed __int32 **v10; // r8
  volatile signed __int32 **i; // r14

  v3 = *(volatile signed __int32 ***)a1;
  v4 = a3;
  if ( a3 > (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3 )
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    v7 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
           (_QWORD *)a1,
           a3);
    if ( v3 )
    {
      std::_Destroy_range<std::allocator<winrt::hstring>>(v3, *(volatile signed __int32 ***)(a1 + 8));
      std::_Deallocate<16,0>(
        *(void **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    size_of = std::_Get_size_of_n<8>(v7);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = &v9[8 * v7];
    goto LABEL_13;
  }
  v10 = *(volatile signed __int32 ***)(a1 + 8);
  if ( v4 > v10 - v3 )
  {
    while ( v3 != v10 )
    {
      winrt::hstring::operator=((struct winrt::impl::hstring_header **)v3, a2, (unsigned int)v10);
      v10 = *(volatile signed __int32 ***)(a1 + 8);
      ++v3;
      ++a2;
    }
LABEL_13:
    *(_QWORD *)(a1 + 8) = std::_Uninitialized_copy_n<winrt::hstring const *>((struct winrt::hstring *)a2);
    return;
  }
  for ( i = &v3[v4]; v4; --v4 )
    winrt::hstring::operator=((struct winrt::impl::hstring_header **)v3++, a2++, (unsigned int)v10);
  std::_Destroy_range<std::allocator<winrt::hstring>>(i, *(volatile signed __int32 ***)(a1 + 8));
  *(_QWORD *)(a1 + 8) = i;
}
