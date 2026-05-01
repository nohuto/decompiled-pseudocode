/*
 * XREFs of ??$emplace_back@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@QEAAAEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@AEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F940
 * Callers:
 *     ?WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x18035716C (-WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@AEAAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU2@AEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033D478 (--$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@-$vector@U-$.c)
 *     ??$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F5F0 (--$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_trai.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<OwnedHWinEventHook<GamingOverlayExperienceManager>>::emplace_back<HWINEVENTHOOK__ * &,GamingOverlayExperienceManager *>(
        _QWORD *a1,
        __int64 *a2,
        struct _RTL_CRITICAL_SECTION *a3)
{
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+28h] [rbp-30h] BYREF
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF

  v4 = (_QWORD *)a1[1];
  if ( v4 == (_QWORD *)a1[2] )
    return std::vector<OwnedHWinEventHook<GamingOverlayExperienceManager>>::_Emplace_reallocate<HWINEVENTHOOK__ * &,GamingOverlayExperienceManager *>(
             a1,
             a1[1],
             a2,
             a3);
  DebugInfo = a3->DebugInfo;
  v12 = *a2;
  v5 = v12;
  v9 = 0LL;
  wil::EnterCriticalSection(&v9, &OwnedHWinEventHook<GamingOverlayExperienceManager>::m_eventHookOwnersCS);
  *v4 = v5;
  std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::emplace<HWINEVENTHOOK__ * &,GamingOverlayExperienceManager * &>(
    v6,
    (__int64)v10,
    (unsigned __int8 *)&v12,
    &DebugInfo);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  v7 = a1[1];
  a1[1] = v7 + 8;
  return (char *)v7;
}
