/*
 * XREFs of ?ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180179220
 * Callers:
 *     ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18017B3F0 (-OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180064BF0 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 */

void __fastcall ControllerNavigationManager::ClientRemoved(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  int v4; // esi
  const char *v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int ProcessId; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 4) + 16LL));
  v4 = ProcessId;
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 16,
    &v14,
    (const unsigned __int8 *)&ProcessId);
  v6 = v14;
  if ( v14 == *((_QWORD *)this + 17) || *(struct BamoControllerNavigationClientProxy **)(v14 + 24) != a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x16F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v5);
  if ( *((_DWORD *)this + 56) == v4 )
    ControllerNavigationManager::DisableNavigation(this);
  v7 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)(v6 + 16));
  v8 = *((_QWORD *)this + 19);
  v9 = 2 * (*((_QWORD *)this + 22) & v7);
  if ( *(_QWORD *)(v8 + 16 * (*((_QWORD *)this + 22) & v7) + 8) == v6 )
  {
    if ( *(_QWORD *)(v8 + 16 * (*((_QWORD *)this + 22) & v7)) == v6 )
    {
      v10 = *((_QWORD *)this + 17);
      *(_QWORD *)(v8 + 8 * v9) = v10;
    }
    else
    {
      v10 = *(_QWORD *)(v6 + 8);
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD *)(v8 + 16 * (*((_QWORD *)this + 22) & v7)) == v6 )
  {
    *(_QWORD *)(v8 + 16 * (*((_QWORD *)this + 22) & v7)) = *(_QWORD *)v6;
  }
  v11 = *(_QWORD *)v6;
  --*((_QWORD *)this + 18);
  **(_QWORD **)(v6 + 8) = v11;
  *(_QWORD *)(v11 + 8) = *(_QWORD *)(v6 + 8);
  std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>,void *>>>(
    v11,
    (_QWORD *)v6);
}
