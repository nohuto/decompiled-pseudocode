/*
 * XREFs of ??$_Erase@I@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x18004AA78
 * Callers:
 *     ?OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x180049EA0 (-OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@Applicatio.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Erase<unsigned int>(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 *v7; // rax
  __int64 v8; // r11
  __int64 *v9; // rcx
  __int64 v11; // rdx

  v4 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a2);
  v5 = a1[3];
  v6 = a1[6] & v4;
  v7 = (__int64 *)a1[1];
  v8 = 2 * v6;
  v9 = *(__int64 **)(v5 + 8 * v8 + 8);
  if ( v9 == v7 )
  {
LABEL_2:
    v9 = 0LL;
  }
  else
  {
    while ( *(_DWORD *)a2 != *((_DWORD *)v9 + 4) )
    {
      if ( v9 == *(__int64 **)(v5 + 8 * v8) )
        goto LABEL_2;
      v9 = (__int64 *)v9[1];
    }
  }
  if ( !v9 )
    return 0LL;
  if ( *(__int64 **)(v5 + 8 * v8 + 8) == v9 )
  {
    if ( *(__int64 **)(v5 + 8 * v8) == v9 )
      *(_QWORD *)(v5 + 8 * v8) = v7;
    else
      v7 = (__int64 *)v9[1];
    *(_QWORD *)(v5 + 8 * v8 + 8) = v7;
  }
  else if ( *(__int64 **)(v5 + 8 * v8) == v9 )
  {
    *(_QWORD *)(v5 + 8 * v8) = *v9;
  }
  v11 = *v9;
  --a1[2];
  *(_QWORD *)v9[1] = v11;
  *(_QWORD *)(v11 + 8) = v9[1];
  std::_Deallocate<16>(v9, 24LL);
  return 1LL;
}
