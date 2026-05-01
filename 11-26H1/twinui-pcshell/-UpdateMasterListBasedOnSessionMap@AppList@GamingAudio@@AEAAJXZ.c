/*
 * XREFs of ?UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ @ 0x18036025C
 * Callers:
 *     _lambda_8f781994c3342d231902f4bb64d9d854_::operator() @ 0x18035E49C (_lambda_8f781994c3342d231902f4bb64d9d854_--operator().c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@std@@PEAX@1@@Z @ 0x18033DC3C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$vector@V-$unique_any_t@V-$unique_stora.c)
 *     ?ClearInvalidSessions@AppList@GamingAudio@@AEAA_NXZ @ 0x18035E690 (-ClearInvalidSessions@AppList@GamingAudio@@AEAA_NXZ.c)
 *     ?MatchingSessionExistsInMasterList@AppList@GamingAudio@@AEAA_NPEAVSessionInfoItem@2@@Z @ 0x18035FB90 (-MatchingSessionExistsInMasterList@AppList@GamingAudio@@AEAA_NPEAVSessionInfoItem@2@@Z.c)
 *     ?push_back@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1803604D4 (-push_back@-$vector@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVSessionInfoItem@Gam.c)
 */

__int64 __fastcall GamingAudio::AppList::UpdateMasterListBasedOnSessionMap(
        GamingAudio::AppList *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // r14
  __int64 *v6; // rbx
  char v7; // r15
  __int64 *v8; // rdi
  __int64 *v9; // r12
  __int64 v10; // rdx
  HSTRING **v11; // rdi
  __int64 **v12; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  _QWORD *v15; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (_QWORD *)((char *)this + 72);
  v6 = (__int64 *)**((_QWORD **)this + 9);
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = 0;
    v8 = (__int64 *)v6[5];
    v9 = (__int64 *)v6[6];
    while ( v8 != v9 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        if ( *(_DWORD *)(v10 + 84) == 1 )
        {
          v7 = 1;
          if ( !GamingAudio::AppList::MatchingSessionExistsInMasterList(this, (HSTRING *)v10) )
          {
            try
            {
              std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>::push_back(
                (char *)this + 160,
                v8);
            }
            catch ( ... )
            {
              return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                     retaddr,
                                     (void *)0x309,
                                     (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
                                     a4);
            }
          }
        }
      }
      ++v8;
    }
    try
    {
      if ( !v7 )
      {
        v11 = (HSTRING **)v6[5];
        if ( *v11 )
        {
          if ( !GamingAudio::AppList::MatchingSessionExistsInMasterList(this, *v11) )
            std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>::push_back(
              (char *)this + 160,
              v11);
        }
      }
      v12 = (__int64 **)v6[2];
      if ( *((_BYTE *)v12 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v6 = i;
        v6 = i;
      }
      else
      {
        v6 = (__int64 *)v6[2];
        for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v6 = j;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x31A,
                             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
                             a4);
    }
  }
  GamingAudio::AppList::ClearInvalidSessions(this);
  v15 = (_QWORD *)*v5;
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>>,void *>>>(
    (__int64)v5,
    (__int64)v5,
    *(_QWORD *)(*v5 + 8LL));
  v15[1] = v15;
  *v15 = v15;
  v15[2] = v15;
  v5[1] = 0LL;
  return 0LL;
}
