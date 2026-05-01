/*
 * XREFs of ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x18040A880
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18009100C (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18040AAF8 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18040ACE0 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@@Z @ 0x18040AEDC (-FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$vector@V-$shared_ptr@UPeopl.c)
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
  __int64 i; // rbx
  __int64 v12; // rsi
  struct IApplicationView *v13; // rdx
  int v14; // eax
  unsigned int v15; // edi
  std::_Ref_count_base *v16[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  *(_OWORD *)v16 = 0LL;
  v3 = (char *)this - 88;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId((char *)this - 88, a2, v16) >= 0 )
  {
    v5 = (struct IApplicationView *)*((_QWORD *)v16[0] + 4);
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
        if ( v16[1] )
          std::_Ref_count_base::_Decref(v16[1]);
        return v7;
      }
    }
  }
  v17 = 0LL;
  v18 = 0LL;
  ShareViewInfosByContactId = PeoplePaneViewManager::FindShareViewInfosByContactId(v3, a2, &v17);
  v7 = ShareViewInfosByContactId;
  if ( ShareViewInfosByContactId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x199,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)ShareViewInfosByContactId);
    if ( (_QWORD)v17 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v17, *((__int64 *)&v17 + 1));
      std::_Deallocate<16>((void *)v17, (struct std::nothrow_t *)((v18 - v17) & 0xFFFFFFFFFFFFFFF0uLL));
      v17 = 0LL;
      v18 = 0LL;
    }
    goto LABEL_5;
  }
  v12 = *((_QWORD *)&v17 + 1);
  for ( i = v17; i != v12; i += 16LL )
  {
    v13 = *(struct IApplicationView **)(*(_QWORD *)i + 32LL);
    if ( v13 )
    {
      v14 = PeoplePaneViewManager::CloseView(v10, v13);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x19E,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v14);
        if ( (_QWORD)v17 )
        {
          std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v17, *((__int64 *)&v17 + 1));
          std::_Deallocate<16>((void *)v17, (struct std::nothrow_t *)((v18 - v17) & 0xFFFFFFFFFFFFFFF0uLL));
          v17 = 0LL;
          v18 = 0LL;
        }
        if ( v16[1] )
          std::_Ref_count_base::_Decref(v16[1]);
        return v15;
      }
    }
  }
  if ( (_QWORD)v17 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v17, *((__int64 *)&v17 + 1));
    std::_Deallocate<16>((void *)v17, (struct std::nothrow_t *)((v18 - v17) & 0xFFFFFFFFFFFFFFF0uLL));
    v17 = 0LL;
    v18 = 0LL;
  }
  if ( v16[1] )
    std::_Ref_count_base::_Decref(v16[1]);
  return 0LL;
}
