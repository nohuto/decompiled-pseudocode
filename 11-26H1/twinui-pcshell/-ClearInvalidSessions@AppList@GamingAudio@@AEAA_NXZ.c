/*
 * XREFs of ?ClearInvalidSessions@AppList@GamingAudio@@AEAA_NXZ @ 0x18035E690
 * Callers:
 *     ?UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ @ 0x18036025C (-UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ.c)
 * Callees:
 *     ??H?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x18035E484 (--H-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$unique_any_t@V-$unique_storage@U-$resou.c)
 *     ?erase@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18036041C (-erase@-$vector@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVSessionInfoItem@GamingA.c)
 */

bool __fastcall GamingAudio::AppList::ClearInvalidSessions(GamingAudio::AppList *this)
{
  __int64 *v1; // rdi
  char v2; // dl
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rax
  bool v8; // zf
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v1 = (__int64 *)((char *)this + 160);
  v2 = 0;
  v4 = (__int64)(*((_QWORD *)this + 21) - *((_QWORD *)this + 20)) >> 3;
  if ( (_DWORD)v4 )
  {
    v5 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v4 != 1 )
    {
      do
      {
        if ( (*((_QWORD *)this + 21) - *v1) >> 3 <= (unsigned __int64)(unsigned int)v5 )
        {
          std::_Xout_of_range("invalid vector subscript");
          __debugbreak();
          JUMPOUT(0x18035E73CLL);
        }
        v6 = *(_QWORD *)(*v1 + 8 * v5);
        if ( v6 && (*(_DWORD *)(v6 + 84) == 2 || !*(_DWORD *)(v6 + 80)) )
        {
          *(_DWORD *)(v6 + 80) = 0;
          v10 = *v1;
          v7 = std::_Vector_iterator<std::_Vector_val<std::_Simple_types<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>>>::operator+(
                 &v10,
                 &v11,
                 (unsigned int)v5);
          std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>::erase(
            v1,
            &v12,
            *v7);
          v2 = 1;
        }
        v8 = (_DWORD)v5 == 1;
        v5 = (unsigned int)(v5 - 1);
      }
      while ( !v8 );
    }
    LOBYTE(v4) = v2;
  }
  return v4;
}
