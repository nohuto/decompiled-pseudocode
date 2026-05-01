/*
 * XREFs of ??$_Assign_counted_range@PEBUWindowId@UI@Windows@winrt@@@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@AEAAXPEBUWindowId@UI@Windows@winrt@@_K@Z @ 0x180664F0C
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUstruct_Windows_UI_WindowId@23@@Z @ 0x180665EA0 (-ReplaceAll@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x18022440C (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Copy_memmove_n@PEBUWindowId@UI@Windows@winrt@@PEAU1234@@std@@YAPEAUWindowId@UI@Windows@winrt@@PEBU1234@_KPEAU1234@@Z @ 0x1805A5BBC (--$_Copy_memmove_n@PEBUWindowId@UI@Windows@winrt@@PEAU1234@@std@@YAPEAUWindowId@UI@Windows@winrt.c)
 */

char *__fastcall std::vector<winrt::Windows::UI::WindowId>::_Assign_counted_range<winrt::Windows::UI::WindowId const *>(
        void **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // r10
  unsigned __int64 size_of; // rax
  char *v10; // rax
  void *v11; // r8
  char *v12; // rcx
  char *result; // rax
  unsigned __int64 v14; // rbp

  v3 = (char *)*a1;
  v4 = a3;
  if ( a3 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3 )
  {
    v11 = *a1;
    v14 = ((_BYTE *)a1[1] - v3) >> 3;
    if ( v4 > v14 )
    {
      std::_Copy_memmove_n<winrt::Windows::UI::WindowId const *,winrt::Windows::UI::WindowId *>(
        a2,
        ((_BYTE *)a1[1] - v3) >> 3,
        v11);
      v3 = (char *)a1[1];
      v12 = &a2[8 * v14];
      v11 = v3;
      v4 -= v14;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    v7 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
           a1,
           a3);
    if ( v3 )
    {
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)(8 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    size_of = std::_Get_size_of_n<8>(v7);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v10;
    v3 = v10;
    a1[1] = v10;
    v11 = v10;
    a1[2] = &v10[8 * v7];
  }
  v12 = a2;
LABEL_8:
  std::_Copy_memmove_n<winrt::Windows::UI::WindowId const *,winrt::Windows::UI::WindowId *>(v12, v4, v11);
  result = &v3[8 * v4];
  a1[1] = result;
  return result;
}
