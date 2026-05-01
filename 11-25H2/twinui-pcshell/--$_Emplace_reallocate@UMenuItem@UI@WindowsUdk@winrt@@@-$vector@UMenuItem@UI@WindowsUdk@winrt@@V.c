/*
 * XREFs of ??$_Emplace_reallocate@UMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x1800FEFF8
 * Callers:
 *     ?push_back@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAX$$QEAUMenuItem@UI@WindowsUdk@winrt@@@Z @ 0x1805DFC9C (-push_back@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800FE32C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXQEAUMenuItem@UI@WindowsUdk@winrt@@_K1@Z @ 0x1800FF12C (-_Change_array@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winr.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1800FF1A0 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x180100F30 (--$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *__fastcall std::vector<winrt::WindowsUdk::UI::MenuItem>::_Emplace_reallocate<winrt::WindowsUdk::UI::MenuItem>(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v12; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v13; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v14; // r14
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // rcx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v18; // r8
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *result; // rax
  __int64 v20; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v21; // [rsp+20h] [rbp-48h]
  void *v22; // [rsp+20h] [rbp-48h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v23; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v21 = v12;
  v14 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)v12 + 8 * v5);
  try
  {
    v15 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v14 = v15;
    v23 = v14;
    v16 = a1[1];
    v17 = *a1;
    v18 = v12;
    if ( a2 == v16 )
    {
      while ( v17 != v16 )
      {
        v20 = *v17;
        *v17 = 0LL;
        *(_QWORD *)v18 = v20;
        v18 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)v18 + 8);
        ++v17;
      }
      std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(v18);
    }
    else
    {
      std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(v17, a2, v12);
      v23 = v13;
      std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(a2, a1[1], (char *)v14 + 8);
    }
    std::vector<winrt::WindowsUdk::UI::MenuItem>::_Change_array(a1, v13, v8, v7, v21);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(v23);
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(8 * v7));
    throw;
  }
  return result;
}
