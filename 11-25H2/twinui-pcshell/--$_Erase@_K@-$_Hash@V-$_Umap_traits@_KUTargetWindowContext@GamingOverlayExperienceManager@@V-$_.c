/*
 * XREFs of ??$_Erase@_K@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x18033DDBC
 * Callers:
 *     ?WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803513DC (-WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1800F30A0 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ??$?R_K@?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@QEBA_KAEB_K@Z @ 0x180154B2C (--$-R_K@-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@QEBA_KAEB_K@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18033E080 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KUTargetWindowContext@GamingOverlayExperien.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::_Erase<unsigned __int64>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdx
  _QWORD *v4; // r10
  __int64 *v5; // rdx
  _QWORD *v6; // r10
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v12; // [rsp+20h] [rbp-18h] BYREF

  v2 = std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>::operator()<unsigned __int64>(
         a1,
         a2);
  v5 = std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Find_last<unsigned __int64>(
         v4,
         &v12,
         v3,
         v2)[1];
  if ( !v5 )
    return 0LL;
  v7 = v6[3];
  v8 = 2 * (v2 & v6[6]);
  if ( *(__int64 **)(v7 + 16 * (v2 & v6[6]) + 8) == v5 )
  {
    if ( *(__int64 **)(v7 + 16 * (v2 & v6[6])) == v5 )
    {
      v9 = v6[1];
      *(_QWORD *)(v7 + 16 * (v2 & v6[6])) = v9;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(__int64 **)(v7 + 16 * (v2 & v6[6])) == v5 )
  {
    *(_QWORD *)(v7 + 16 * (v2 & v6[6])) = *v5;
  }
  v10 = *v5;
  --v6[2];
  *(_QWORD *)v5[1] = v10;
  *(_QWORD *)(v10 + 8) = v5[1];
  std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>>>();
  return 1LL;
}
