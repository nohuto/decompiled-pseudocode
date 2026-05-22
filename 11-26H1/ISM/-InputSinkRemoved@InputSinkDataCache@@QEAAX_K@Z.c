/*
 * XREFs of ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x180048110
 * Callers:
 *     NotifyInputSinkRemoved @ 0x180047CA0 (NotifyInputSinkRemoved.c)
 * Callees:
 *     ?_Unchecked_erase@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@2@QEAU32@@Z @ 0x180048248 (-_Unchecked_erase@-$list@U-$pair@$$CB_K_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@AEAAP.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x180048290 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ??$emplace_back@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAAEAVNotificationData@@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x1800A53D8 (--$emplace_back@W4NotificationType@@AEA_KH@-$vector@VNotificationData@@V-$allocator@VNotificatio.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x1800A5514 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800A5528 (-find@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-$_Uhash_co.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSinkDataCache::InputSinkRemoved(PSRWLOCK SRWLock, __int64 a2)
{
  unsigned __int8 *v3; // rbx
  __int64 v4; // rax
  unsigned __int8 *v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK v8; // [rsp+68h] [rbp+20h]

  v6 = a2;
  AcquireSRWLockExclusive(SRWLock);
  v8 = SRWLock;
  std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find(
    &SRWLock[1],
    &v5,
    &v6);
  v3 = v5;
  if ( v5 != SRWLock[2].Ptr )
  {
    LODWORD(v5) = 0;
    v7 = 3;
    std::vector<NotificationData>::emplace_back<enum NotificationType,unsigned __int64 &,int>(
      &SRWLock[9],
      &v7,
      &v6,
      &v5);
    v4 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()(v3 + 16);
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
      &SRWLock[1],
      v3,
      v4 & (__int64)SRWLock[7].Ptr);
    std::list<std::pair<unsigned __int64 const,unsigned __int64>>::_Unchecked_erase(&SRWLock[2]);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
