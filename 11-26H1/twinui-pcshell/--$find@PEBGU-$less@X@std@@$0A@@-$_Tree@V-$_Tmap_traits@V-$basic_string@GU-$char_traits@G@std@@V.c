/*
 * XREFs of ??$find@PEBGU?$less@X@std@@$0A@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@@1@AEBQEBG@Z @ 0x180572674
 * Callers:
 *     ?IsAppActive@UwpAppStateManager@@UEAA_NPEBG@Z @ 0x180572CE0 (-IsAppActive@UwpAppStateManager@@UEAA_NPEBG@Z.c)
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180572EF0 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x180033BDC (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::find<unsigned short const *,std::less<void>,0>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 *v7; // rsi
  int v8; // eax
  __int64 *v9; // rcx
  int v10; // eax
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)v7 + 25) )
  {
    do
    {
      LOBYTE(v8) = std::wstring::compare((__int64)(v7 + 4), *a3);
      v9 = v7 + 2;
      if ( v8 >= 0 )
      {
        v3 = v7;
        v9 = v7;
      }
      v7 = (__int64 *)*v9;
    }
    while ( !*(_BYTE *)(*v9 + 25) );
  }
  if ( *((_BYTE *)v3 + 25) || (LOBYTE(v10) = std::wstring::compare((__int64)(v3 + 4), *a3), v10 > 0) )
    v3 = (__int64 *)*a1;
  result = a2;
  *a2 = v3;
  return result;
}
