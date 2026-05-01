/*
 * XREFs of ?AreValidFastPathEnabledStates@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x1806235FC
 * Callers:
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180625824 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA@XZ @ 0x180286798 (--1-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Emplace@AEBH@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@HPEAX@std@@_N@1@AEBH@Z @ 0x18061E5B4 (--$_Emplace@AEBH@-$_Tree@V-$_Tset_traits@HU-$less@H@std@@V-$allocator@H@2@$0A@@std@@@std@@IEAA-A.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@details@wil@@QEAA_NXZ @ 0x1806368A4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CopilotHotkeyManager::AreValidFastPathEnabledStates(
        CopilotHotkeyManager *this,
        const struct TargetAppExtensionDetails *a2)
{
  char *v3; // rsi
  char *v4; // rdi
  _QWORD *v5; // rax
  int v6; // edi
  __int64 *v7; // rbx
  bool v8; // bl
  int v10; // eax
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[6]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h] BYREF

  v3 = (char *)a2 + 144;
  if ( *((_BYTE *)a2 + 136) != *((_BYTE *)a2 + 176) )
    return 0;
  v4 = (char *)a2 + 104;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenButtonSettingsModernization>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PenButtonSettingsModernization>::GetImpl'::`2'::impl) )
  {
    if ( !v4[32] || *((_DWORD *)a2 + 35) != *((_DWORD *)a2 + 45) )
    {
      if ( !*((_BYTE *)a2 + 96) )
        return 1;
      v10 = *((_DWORD *)a2 + 25);
      if ( v10 != *((_DWORD *)a2 + 35) )
        return v10 != *((_DWORD *)a2 + 45);
    }
    return 0;
  }
  v13[0] = (char *)a2 + 64;
  v13[1] = v4;
  v13[2] = v3;
  v13[3] = (char *)a2 + 184;
  v13[4] = (char *)a2 + 224;
  v13[5] = (char *)a2 + 264;
  v11 = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *(_QWORD *)&v11 = v5;
  v6 = 0;
  v7 = v13;
  do
  {
    if ( *(_BYTE *)(*v7 + 32) )
    {
      std::_Tree<std::_Tset_traits<int,std::less<int>,std::allocator<int>,0>>::_Emplace<int const &>(
        (__int64 *)&v11,
        (__int64)v12,
        (int *)(*v7 + 36));
      ++v6;
    }
    ++v7;
  }
  while ( v7 != &v14 );
  v8 = *((_QWORD *)&v11 + 1) == v6;
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::~_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>((void **)&v11);
  return v8;
}
