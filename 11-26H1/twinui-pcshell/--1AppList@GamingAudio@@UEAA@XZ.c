/*
 * XREFs of ??1AppList@GamingAudio@@UEAA@XZ @ 0x1803424F8
 * Callers:
 *     ??_EAppList@GamingAudio@@UEAAPEAXI@Z @ 0x1803452F0 (--_EAppList@GamingAudio@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x18033D394 (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVSessionI.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KV?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180341FD4 (--1-$_Tree@V-$_Tmap_traits@KV-$vector@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVS.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIAudioSessionManager2@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIAudioSessionManager2@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180342004 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$ComP.c)
 */

void __fastcall GamingAudio::AppList::~AppList(GamingAudio::AppList *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>>(
      v2,
      *((_QWORD *)this + 21));
    std::_Deallocate<16>(
      *((void **)this + 20),
      (struct std::nothrow_t *)((*((_QWORD *)this + 22) - *((_QWORD *)this + 20)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 19);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 13);
  std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IAudioSessionManager2>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IAudioSessionManager2>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IAudioSessionManager2>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IAudioSessionManager2>>>,0>>((void **)this + 11);
  __1___Tree_V___Tmap_traits_KV__vector_V__unique_any_t_V__unique_storage_U__resource_policy_PEAVSessionInfoItem_GamingAudio__P6AXPEAV12__Z_1_SessionInfoItemDeleter_2_YAX0_ZU__integral_constant__K_0A__wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil___wil__V__allocator_V__unique_any_t_V__unique_storage_U__resource_policy_PEAVSessionInfoItem_GamingAudio__P6AXPEAV12__Z_1_SessionInfoItemDeleter_2_YAX0_ZU__integral_constant__K_0A__wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil___wil___std___std__U__less_K_2_V__allocator_U__pair___CBKV__vector_V__unique_any_t_V__unique_storage_U__resource_policy_PEAVSessionInfoItem_GamingAudio__P6AXPEAV12__Z_1_SessionInfoItemDeleter_2_YAX0_ZU__integral_constant__K_0A__wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil___wil__V__allocator_V__unique_any_t_V__unique_storage_U__resource_policy_PEAVSessionInfoItem_GamingAudio__P6AXPEAV12__Z_1_SessionInfoItemDeleter_2_YAX0_ZU__integral_constant__K_0A__wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil___wil___std___std___std___2__0A__std___std__QEAA_XZ((void **)this + 9);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSessionNotification,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSessionNotification,Microsoft::WRL::FtmBase>((__int64)this);
}
