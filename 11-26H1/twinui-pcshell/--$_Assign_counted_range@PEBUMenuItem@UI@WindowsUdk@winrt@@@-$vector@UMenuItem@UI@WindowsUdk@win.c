/*
 * XREFs of ??$_Assign_counted_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXPEBUMenuItem@UI@WindowsUdk@winrt@@_K@Z @ 0x1805FF420
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@@winrt@@QEAAXU?$array_view@$$CBUMenuItem@UI@WindowsUdk@winrt@@@2@@Z @ 0x18060316C (-ReplaceAll@-$vector_base@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@W.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801C53CC (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x18022440C (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_copy_n@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU12345@_KPEAU12345@AEAV?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1804990DC (--$_Uninitialized_copy_n@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$allocator@.c)
 */

void __fastcall std::vector<winrt::WindowsUdk::UI::MenuItem>::_Assign_counted_range<winrt::WindowsUdk::UI::MenuItem const *>(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 size_of; // rax
  __int64 *v9; // rax
  __int64 *v10; // r8
  unsigned __int64 v11; // r14
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *i; // r14

  v3 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)a1;
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
      std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
        v3,
        *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 8));
      std::_Deallocate<16>(
        *(void **)a1,
        (struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
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
  v11 = ((char *)v10 - (char *)v3) >> 3;
  if ( v4 > v11 )
  {
    while ( v3 != (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10 )
    {
      winrt::Windows::Foundation::IUnknown::operator=((__int64 *)v3, a2);
      v10 = *(__int64 **)(a1 + 8);
      v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)v3 + 8);
      ++a2;
    }
    v4 -= v11;
LABEL_14:
    *(_QWORD *)(a1 + 8) = std::_Uninitialized_copy_n<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const *>(
                            (__int64)a2,
                            v4,
                            v10);
    return;
  }
  for ( i = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)v3 + 8 * v4);
        v4;
        --v4 )
  {
    winrt::Windows::Foundation::IUnknown::operator=((__int64 *)v3, a2);
    v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)v3 + 8);
    ++a2;
  }
  std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
    i,
    *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 8));
  *(_QWORD *)(a1 + 8) = i;
}
