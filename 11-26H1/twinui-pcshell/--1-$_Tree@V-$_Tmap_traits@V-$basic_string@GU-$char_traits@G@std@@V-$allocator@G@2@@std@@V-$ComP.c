/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIAudioSessionManager2@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIAudioSessionManager2@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180342004
 * Callers:
 *     ??1AppList@GamingAudio@@UEAA@XZ @ 0x1803424F8 (--1AppList@GamingAudio@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIAudioSessionManager2@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIAudioSessionManager2@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIAudioSessionManager2@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIAudioSessionManager2@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x18033DCD4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_18033DCD4.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IAudioSessionManager2>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IAudioSessionManager2>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IAudioSessionManager2>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IAudioSessionManager2>>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IAudioSessionManager2>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IAudioSessionManager2>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((char **)*a1 + 1));
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x48);
}
