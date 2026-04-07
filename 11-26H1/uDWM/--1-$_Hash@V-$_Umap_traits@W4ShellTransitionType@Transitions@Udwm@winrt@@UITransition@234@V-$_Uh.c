/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x1800D6C7C
 * Callers:
 *     ??1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D6DB4 (--1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??1?$unordered_map@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@@std@@QEAA@XZ @ 0x1800D8A50 (--1-$unordered_map@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@U-$hash@W4Shel.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D64FC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UUserResizeVisual@Transitions@U.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransitionType,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransitionType,std::hash<enum winrt::Udwm::Transitions::ShellTransitionType>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransitionType>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>,0>>::~_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransitionType,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransitionType,std::hash<enum winrt::Udwm::Transitions::ShellTransitionType>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransitionType>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>,0>>(
        __int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16>((void *)a1[1], 0x20uLL);
}
