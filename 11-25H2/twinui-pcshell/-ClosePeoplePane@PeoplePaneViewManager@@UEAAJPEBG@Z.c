/*
 * XREFs of ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1803FFE60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18002A0C0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180400098 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x180400268 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@@Z @ 0x180400460 (-FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$vector@V-$shared_ptr@UPeopl.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::ClosePeoplePane(PeoplePaneViewManager *this, const unsigned __int16 *a2)
{
  char *v3; // rsi
  PeoplePaneViewManager *v4; // rcx
  struct IApplicationView *v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  int ShareViewInfosByContactId; // eax
  PeoplePaneViewManager *v10; // rcx
  void *v11; // rdi
  void *v12; // rbx
  __int64 i; // rdi
  struct IApplicationView *v14; // rdx
  int v15; // eax
  unsigned int v16; // esi
  std::_Ref_count_base *v17[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  *(_OWORD *)v17 = 0LL;
  v3 = (char *)this - 88;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId((char *)this - 88, a2, v17) >= 0 )
  {
    v5 = (struct IApplicationView *)*((_QWORD *)v17[0] + 4);
    if ( v5 )
    {
      v6 = PeoplePaneViewManager::CloseView(v4, v5);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x193,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v6);
LABEL_5:
        if ( v17[1] )
          std::_Ref_count_base::_Decref(v17[1]);
        return v7;
      }
    }
  }
  v18 = 0LL;
  v19 = 0LL;
  ShareViewInfosByContactId = PeoplePaneViewManager::FindShareViewInfosByContactId(v3, a2, &v18);
  v7 = ShareViewInfosByContactId;
  if ( ShareViewInfosByContactId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x199,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)ShareViewInfosByContactId);
    v11 = (void *)v18;
    if ( (_QWORD)v18 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v18, *((__int64 *)&v18 + 1));
      std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)((v19 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    goto LABEL_5;
  }
  v12 = (void *)v18;
  for ( i = v18; i != *((_QWORD *)&v18 + 1); i += 16LL )
  {
    v14 = *(struct IApplicationView **)(*(_QWORD *)i + 32LL);
    if ( v14 )
    {
      v15 = PeoplePaneViewManager::CloseView(v10, v14);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x19E,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v15);
        if ( v12 )
        {
          std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v12, *((__int64 *)&v18 + 1));
          std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)((v19 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF0uLL));
        }
        if ( v17[1] )
          std::_Ref_count_base::_Decref(v17[1]);
        return v16;
      }
    }
  }
  if ( v12 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v12, *((__int64 *)&v18 + 1));
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)((v19 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
  return 0LL;
}
