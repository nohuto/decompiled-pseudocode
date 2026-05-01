/*
 * XREFs of ?at@?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@std@@QEBAAEBUguid@winrt@@AEB_K@Z @ 0x180154AC4
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x180061CF4 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 * Callees:
 *     ??$?R_K@?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@QEBA_KAEB_K@Z @ 0x180154B2C (--$-R_K@-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@QEBA_KAEB_K@Z.c)
 */

__int64 std::unordered_map<unsigned __int64,winrt::guid>::at()
{
  __int64 v0; // rax
  __int64 *v1; // rdx
  _QWORD *v2; // r10
  __int64 v3; // rcx
  __int64 v4; // r11
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx

  v0 = std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>::operator()<unsigned __int64>();
  v3 = v2[3];
  v4 = 2 * (v2[6] & v0);
  v5 = *(_QWORD *)(v3 + 16 * (v2[6] & v0) + 8);
  if ( v5 == v2[1] )
    goto LABEL_8;
  v6 = *(_QWORD *)(v3 + 8 * v4);
  v7 = *v1;
  while ( v7 != *(_QWORD *)(v5 + 16) )
  {
    if ( v5 == v6 )
      goto LABEL_8;
    v5 = *(_QWORD *)(v5 + 8);
  }
  if ( !v5 )
  {
LABEL_8:
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x180154B24LL);
  }
  return v5 + 24;
}
