/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180033DCC
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180030780 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x180171490 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x180177520 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1801DF5B0 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x1801E6AC0 (-CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801E95A0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x180033EEC (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180033F54 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     wmemset @ 0x1801C35CC (wmemset.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 */

__int64 *__fastcall std::wstring::append(__int64 *a1, size_t a2, wchar_t a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 size_of; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 *v15; // r10
  __int64 v16; // r10
  __int64 v17; // r11

  v3 = a1[3];
  v5 = a1[2];
  if ( a2 <= v3 - v5 )
  {
    v15 = a1;
    a1[2] = v5 + a2;
    if ( v3 > 7 )
      v15 = (__int64 *)*a1;
    wmemset((wchar_t *)v15 + v5, a3, a2);
    *(_WORD *)(v16 + 2 * v17) = 0;
  }
  else
  {
    if ( 0x7FFFFFFFFFFFFFFELL - v5 < a2 )
      std::_Xlen_string();
    v8 = v5 + a2;
    v9 = std::wstring::_Calculate_growth(v5 + a2, a1[3]);
    size_of = std::_Get_size_of_n<2>(v9 + 1);
    v12 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    a1[2] = v8;
    a1[3] = v9;
    if ( v3 <= 7 )
    {
      _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v11, v12, a1, v5, a2, a3);
    }
    else
    {
      v13 = *a1;
      _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v11, v12, *a1, v5, a2, a3);
      std::_Deallocate<16>(v13, 2 * v3 + 2);
    }
    *a1 = v12;
  }
  return a1;
}
