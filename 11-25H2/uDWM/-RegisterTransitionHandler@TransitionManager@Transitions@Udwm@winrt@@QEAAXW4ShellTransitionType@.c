/*
 * XREFs of ?RegisterTransitionHandler@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@AEBUITransition@234@@Z @ 0x18002AED0
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18006286C (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18002A4B8 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$_Try_emplace@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@_N@1@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@@Z @ 0x18002AD28 (--$_Try_emplace@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4S.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(
        __int64 a1,
        int a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v4 = std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransitionType,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransitionType,std::hash<enum winrt::Udwm::Transitions::ShellTransitionType>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransitionType>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>,0>>::_Try_emplace<enum winrt::Udwm::Transitions::ShellTransitionType const &,>(
         a1,
         (__int64)v6,
         &v7);
  return winrt::Windows::Foundation::IUnknown::operator=(
           (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)v4 + 24LL),
           a3);
}
