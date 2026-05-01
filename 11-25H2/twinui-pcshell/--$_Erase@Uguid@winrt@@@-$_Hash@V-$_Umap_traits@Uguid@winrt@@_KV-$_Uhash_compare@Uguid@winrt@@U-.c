/*
 * XREFs of ??$_Erase@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@AEAA_KAEBUguid@winrt@@@Z @ 0x1801D1F14
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x180061CF4 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Erase<winrt::guid>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = (_QWORD *)a1[1];
  v8 = v4 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  v11 = *(_QWORD **)(v9 + 8 * v10 + 8);
  if ( v11 == v7 )
  {
LABEL_9:
    v11 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v12 = *a2 - v11[2];
      if ( *a2 == v11[2] )
        v12 = a2[1] - v11[3];
      if ( !v12 )
        break;
      if ( v11 == *(_QWORD **)(v9 + 8 * v10) )
        goto LABEL_9;
      v11 = (_QWORD *)v11[1];
    }
  }
  if ( !v11 )
    return 0LL;
  if ( *(_QWORD **)(v9 + 8 * v10 + 8) == v11 )
  {
    if ( *(_QWORD **)(v9 + 8 * v10) == v11 )
      *(_QWORD *)(v9 + 8 * v10) = v7;
    else
      v7 = (_QWORD *)v11[1];
    *(_QWORD *)(v9 + 8 * v10 + 8) = v7;
  }
  else if ( *(_QWORD **)(v9 + 8 * v10) == v11 )
  {
    *(_QWORD *)(v9 + 8 * v10) = *v11;
  }
  v13 = *v11;
  --a1[2];
  *(_QWORD *)v11[1] = v13;
  *(_QWORD *)(v13 + 8) = v11[1];
  std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)0x28);
  return 1LL;
}
