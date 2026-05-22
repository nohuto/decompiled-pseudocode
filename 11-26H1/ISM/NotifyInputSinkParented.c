/*
 * XREFs of NotifyInputSinkParented @ 0x180047CE0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetLuidFromInputSinkHandle @ 0x180047DE0 (_anonymous_namespace_--GetLuidFromInputSinkHandle.c)
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180047E30 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z @ 0x180047EC8 (-SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180047F64 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equa.c)
 *     ??$emplace_back@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAAEAVNotificationData@@$$QEAW4NotificationType@@AEA_K1@Z @ 0x1800A5378 (--$emplace_back@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@VNotific.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800A5528 (-find@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-$_Uhash_co.c)
 */

__int64 __fastcall NotifyInputSinkParented(void *a1, __int64 a2)
{
  RTL_SRWLOCK *Instance; // rdi
  __int64 v5; // rax
  NotificationData *v6; // rax
  __int64 LuidFromInputSinkHandle; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v9[24]; // [rsp+28h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+70h] [rbp+30h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF

  Instance = (RTL_SRWLOCK *)InputSinkDataCache::GetInstance();
  LuidFromInputSinkHandle = anonymous_namespace_::GetLuidFromInputSinkHandle(a2);
  v11 = anonymous_namespace_::GetLuidFromInputSinkHandle(a1);
  AcquireSRWLockExclusive(Instance);
  std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find(
    &Instance[1],
    &v10,
    &v11);
  if ( v10 == Instance[2].Ptr )
  {
    v5 = std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
           &Instance[1],
           v9,
           &v11);
    LODWORD(v10) = 0;
    *(_QWORD *)(*(_QWORD *)v5 + 24LL) = LuidFromInputSinkHandle;
    v6 = (NotificationData *)((__int64 (__fastcall *)(RTL_SRWLOCK *, _QWORD **, __int64 *, __int64 *))std::vector<NotificationData>::emplace_back<enum NotificationType,unsigned __int64 &,unsigned __int64 &>)(
                               &Instance[9],
                               &v10,
                               &v11,
                               &LuidFromInputSinkHandle);
    NotificationData::SetInputSinkHandle(v6, a1);
  }
  else if ( v10[3] != LuidFromInputSinkHandle )
  {
    v10[3] = LuidFromInputSinkHandle;
    LODWORD(v10) = 1;
    ((void (__fastcall *)(RTL_SRWLOCK *, _QWORD **, __int64 *, __int64 *))std::vector<NotificationData>::emplace_back<enum NotificationType,unsigned __int64 &,unsigned __int64 &>)(
      &Instance[9],
      &v10,
      &v11,
      &LuidFromInputSinkHandle);
  }
  ReleaseSRWLockExclusive(Instance);
  return 1LL;
}
